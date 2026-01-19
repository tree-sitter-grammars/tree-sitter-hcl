#include <assert.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include "tree_sitter/parser.h"
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    {                                                                          \
        void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));       \
        assert(tmp != NULL);                                                   \
        (vec).data = tmp;                                                      \
        assert((vec).data != NULL);                                            \
        (vec).cap = (_cap);                                                    \
    }

#define VEC_PUSH(vec, el)                                                      \
    {                                                                          \
        if ((vec).cap == (vec).len) {                                          \
            VEC_RESIZE((vec), MAX(16, (vec).len * 2));                         \
        }                                                                      \
        (vec).data[(vec).len++] = (el);                                        \
    }

#define VEC_POP(vec)                                                           \
    {                                                                          \
        STRING_FREE(VEC_BACK((vec)).heredoc_identifier);                       \
        (vec).len--;                                                           \
    }

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                          \
    {                                                                          \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
        (vec).data = NULL;                                                     \
    }

#define VEC_CLEAR(vec)                                                         \
    {                                                                          \
        for (uint32_t i = 0; i < (vec).len; i++) {                             \
            STRING_FREE((vec).data[i].heredoc_identifier);                     \
        }                                                                      \
        (vec).len = 0;                                                         \
    }

#define STRING_RESIZE(vec, _cap)                                               \
    {                                                                          \
        void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0])); \
        assert(tmp != NULL);                                                   \
        (vec).data = tmp;                                                      \
        memset((vec).data + (vec).len, 0,                                      \
               (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));            \
        (vec).cap = (_cap);                                                    \
    }

#define STRING_GROW(vec, _cap)                                                 \
    if ((vec).cap < (_cap)) {                                                  \
        STRING_RESIZE((vec), (_cap));                                          \
    }

#define STRING_PUSH(vec, el)                                                   \
    if ((vec).cap == (vec).len) {                                              \
        STRING_RESIZE((vec), MAX(16, (vec).len * 2));                          \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define STRING_FREE(vec)                                                       \
    if ((vec).data != NULL)                                                    \
        free((vec).data);                                                      \
    (vec).data = NULL;

enum TokenType {
    QUOTED_TEMPLATE_START,
    QUOTED_TEMPLATE_END,
    TEMPLATE_LITERAL_CHUNK,
    TEMPLATE_INTERPOLATION_START,
    TEMPLATE_INTERPOLATION_END,
    TEMPLATE_DIRECTIVE_START,
    TEMPLATE_DIRECTIVE_END,
    HEREDOC_IDENTIFIER,
};

typedef enum ContextType {
    TEMPLATE_INTERPOLATION,
    TEMPLATE_DIRECTIVE,
    QUOTED_TEMPLATE,
    HEREDOC_TEMPLATE,
} ContextType;

typedef struct {
    uint32_t cap;
    uint32_t len;
    char *data;
} String;

static String string_new() { return (String){.cap = 16, .len = 0, .data = calloc(1, sizeof(char) * 17)}; }

typedef struct {
    ContextType type;

    // valid if type == HEREDOC_TEMPLATE
    String heredoc_identifier;
} Context;

typedef struct {
    uint32_t len;
    uint32_t cap;
    Context *data;
} context_vec;

typedef struct {
    bool is_line_ws_only;
    bool skip_next_newline;
    context_vec context_stack;
} Scanner;

static inline void record_whitespace_status(TSLexer *lexer, Scanner *scanner) {
    if (lexer->lookahead == '\n') {
        lexer->log(lexer, "Newline detected, setting is_line_ws_only to true");
        scanner->is_line_ws_only = true;
    } else if (lexer->lookahead != ' ' && lexer->lookahead != '\t') {
        lexer->log(lexer, "Non-whitespace character detected, setting is_line_ws_only to false");
        scanner->is_line_ws_only = false;
    }
}
static inline void advance(TSLexer *lexer, Scanner *scanner) {
    record_whitespace_status(lexer, scanner);
    lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer, Scanner *scanner) {
    record_whitespace_status(lexer, scanner);
    lexer->advance(lexer, true);
}

static unsigned serialize(Scanner *scanner, char *buf) {
    unsigned size = 0;

    buf[0] = scanner->is_line_ws_only ? 1 : 0;
    size++;
    buf[1] = scanner->skip_next_newline ? 1 : 0;
    size++;

    if (scanner->context_stack.len > CHAR_MAX) {
        return 0;
    }

    memcpy(&buf[size], &(scanner->context_stack.len), sizeof(uint32_t));
    size += sizeof(uint32_t);
    for (uint32_t i = 0; i < scanner->context_stack.len; i++) {
        Context *context = &scanner->context_stack.data[i];
        if (size + sizeof(ContextType) + sizeof(uint32_t) + context->heredoc_identifier.len >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
            return 0;
        }
        if (context->heredoc_identifier.len > CHAR_MAX) {
            return 0;
        }
        memcpy(&buf[size], &(context->type), sizeof(ContextType));
        size += sizeof(ContextType);
        memcpy(&buf[size], &(context->heredoc_identifier.len), sizeof(uint32_t));
        size += sizeof(uint32_t);
        memcpy(&buf[size], context->heredoc_identifier.data, context->heredoc_identifier.len);
        size += context->heredoc_identifier.len;
    }
    return size;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    VEC_CLEAR(scanner->context_stack);

    if (length == 0) {
        return;
    }

    unsigned size = 0;

    scanner->is_line_ws_only = buffer[0] != 0;
    size++;
    scanner->skip_next_newline = buffer[1] != 0;
    size++;

    uint32_t context_stack_size;
    memcpy(&context_stack_size, &buffer[size], sizeof(uint32_t));
    size += sizeof(uint32_t);
    for (uint32_t j = 0; j < context_stack_size; j++) {
        Context ctx;
        ctx.heredoc_identifier = string_new();

        memcpy(&(ctx.type), &buffer[size], sizeof(ContextType));
        size += sizeof(ContextType);

        uint32_t heredoc_identifier_size;
        memcpy(&heredoc_identifier_size, &buffer[size], sizeof(uint32_t));
        size += sizeof(uint32_t);
        if (heredoc_identifier_size > 0) {
          STRING_GROW(ctx.heredoc_identifier, heredoc_identifier_size);
          memcpy(ctx.heredoc_identifier.data, buffer + size, heredoc_identifier_size);
          ctx.heredoc_identifier.len = heredoc_identifier_size;
          size += heredoc_identifier_size;
        }
        VEC_PUSH(scanner->context_stack, ctx);
    }
    assert(size == length);
}

static inline bool accept_inplace(TSLexer *lexer, enum TokenType token) {
    lexer->result_symbol = token;
    return true;
}

static inline bool accept_and_advance(TSLexer *lexer, Scanner *scanner, enum TokenType token) {
    advance(lexer, scanner);
    return accept_inplace(lexer, token);
}

static inline bool consume_wxdigit(TSLexer *lexer, Scanner *scanner) {
    advance(lexer, scanner);
    return iswxdigit(lexer->lookahead);
}

static inline bool skip_comment(TSLexer *lexer, Scanner *scanner) {
    while (iswspace(lexer->lookahead)) {
        skip(lexer, scanner);
    }
    if (lexer->lookahead != '#') {
        return false;
    }
    skip(lexer, scanner);
    while (lexer->lookahead != '\n') {
        skip(lexer, scanner);
        if (lexer->eof(lexer)) {
            return false;
        }
    }
    return true;
}

static inline bool in_context_type(Scanner *scanner, enum ContextType type) {
    if (scanner->context_stack.len == 0) {
        return false;
    }
    return VEC_BACK(scanner->context_stack).type == type;
}

static inline bool in_quoted_context(Scanner *scanner) { return in_context_type(scanner, QUOTED_TEMPLATE); }

static inline bool in_heredoc_context(Scanner *scanner) { return in_context_type(scanner, HEREDOC_TEMPLATE); }

static inline bool in_template_context(Scanner *scanner) {
    return in_quoted_context(scanner) || in_heredoc_context(scanner);
}

static inline bool in_interpolation_context(Scanner *scanner) {
    return in_context_type(scanner, TEMPLATE_INTERPOLATION);
}

static inline int consume_ws(TSLexer *lexer, Scanner *scanner) {
    unsigned int consumed = 0;
    while (iswspace(lexer->lookahead) || lexer->lookahead == '\n') {
        if (lexer->lookahead == '\n') {
            scanner->is_line_ws_only = true;
        }
        consumed++;
        advance(lexer, scanner);
    }
    return consumed;
}
static inline bool in_directive_context(Scanner *scanner) { return in_context_type(scanner, TEMPLATE_DIRECTIVE); }

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    // Early EOF handling for heredoc contexts to prevent infinite loops
    if (lexer->eof(lexer) && in_heredoc_context(scanner)) {
        // If we're at EOF in a heredoc context, just return false to let the parser handle it
        return false;
    }

    if (scanner->skip_next_newline) {
        while (lexer->lookahead != '\n') {
            skip(lexer, scanner);
        }
        skip(lexer, scanner);
        scanner->skip_next_newline = false;
        scanner->is_line_ws_only = true;
    }

    bool is_in_template_context = in_template_context(scanner);
    if (is_in_template_context && valid_symbols[TEMPLATE_LITERAL_CHUNK]) {
        // In a template context, eat up any whitespace as a literal chunk
        // and exit early
        if (consume_ws(lexer, scanner)) {
            return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
        }
    }
    else {
        while (iswspace(lexer->lookahead)) {
            skip(lexer, scanner);
        }
    }
    if (lexer->lookahead == '\0') {
        return false;
    }
    // manage quoted context
    if (valid_symbols[QUOTED_TEMPLATE_START] && !in_quoted_context(scanner) && lexer->lookahead == '"') {
        Context ctx;
        ctx.type = QUOTED_TEMPLATE;
        ctx.heredoc_identifier = string_new();
        VEC_PUSH(scanner->context_stack, ctx);
        return accept_and_advance(lexer, scanner, QUOTED_TEMPLATE_START);
    }
    if (valid_symbols[QUOTED_TEMPLATE_END] && in_quoted_context(scanner) && lexer->lookahead == '"') {
        VEC_POP(scanner->context_stack);
        return accept_and_advance(lexer, scanner, QUOTED_TEMPLATE_END);
    }

    // manage template interpolations
    if (valid_symbols[TEMPLATE_INTERPOLATION_START] && valid_symbols[TEMPLATE_LITERAL_CHUNK] &&
        !in_interpolation_context(scanner) && lexer->lookahead == '$') {
        advance(lexer, scanner);
        if (lexer->lookahead == '{') {
            Context ctx;
            ctx.type = TEMPLATE_INTERPOLATION;
            ctx.heredoc_identifier = string_new();
            VEC_PUSH(scanner->context_stack, ctx);
            return accept_and_advance(lexer, scanner, TEMPLATE_INTERPOLATION_START);
        }
        // try to scan escape sequence
        if (lexer->lookahead == '$') {
            advance(lexer, scanner);
            if (lexer->lookahead == '{') {
                // $${
                advance(lexer, scanner);
                consume_ws(lexer, scanner);
                return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
            }
        }
        consume_ws(lexer, scanner);
        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
    if (valid_symbols[TEMPLATE_INTERPOLATION_END] && in_interpolation_context(scanner) && lexer->lookahead == '}') {
        VEC_POP(scanner->context_stack);
        return accept_and_advance(lexer, scanner, TEMPLATE_INTERPOLATION_END);
    }

    // manage template directives
    if (valid_symbols[TEMPLATE_DIRECTIVE_START] && valid_symbols[TEMPLATE_LITERAL_CHUNK] &&
        !in_directive_context(scanner) && lexer->lookahead == '%') {
        advance(lexer, scanner);
        if (lexer->lookahead == '{') {
            Context ctx;
            ctx.type = TEMPLATE_DIRECTIVE;
            ctx.heredoc_identifier = string_new();
            VEC_PUSH(scanner->context_stack, ctx);
            return accept_and_advance(lexer, scanner, TEMPLATE_DIRECTIVE_START);
        }
        // try to scan escape sequence
        if (lexer->lookahead == '%') {
            advance(lexer, scanner);
            if (lexer->lookahead == '{') {
                // $${
                advance(lexer, scanner);
                consume_ws(lexer, scanner);
                return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
            }
        }
        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
    if (valid_symbols[TEMPLATE_DIRECTIVE_END] && in_directive_context(scanner) && lexer->lookahead == '}') {
        VEC_POP(scanner->context_stack);
        return accept_and_advance(lexer, scanner, TEMPLATE_DIRECTIVE_END);
    }

    // manage heredoc context
    if (valid_symbols[HEREDOC_IDENTIFIER] && !in_heredoc_context(scanner)) {
        // First, skip any whitespace
        while (iswspace(lexer->lookahead)) {
            skip(lexer, scanner);
        }
        String identifier = string_new();
        // TODO: check that this is a valid identifier
        while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '-') {
            STRING_PUSH(identifier, lexer->lookahead);
            advance(lexer, scanner);
        }
        // Only proceed if we actually found a valid identifier
        if (identifier.len == 0) {
            STRING_FREE(identifier);
            return false;
        }
        Context ctx;
        ctx.type = HEREDOC_TEMPLATE;
        ctx.heredoc_identifier = identifier;
        VEC_PUSH(scanner->context_stack, ctx);
        lexer->result_symbol = HEREDOC_IDENTIFIER;
        lexer->mark_end(lexer);
        scanner->skip_next_newline = true;
        return true;
    }
    // Store a copy of is_line_ws_only before reading the potential heredoc identifier,
    // since consuming the identifier will always set is_line_ws_only to false.
    bool was_line_ws_only = scanner->is_line_ws_only;
    if (valid_symbols[HEREDOC_IDENTIFIER] && in_heredoc_context(scanner)) {
        String expected_identifier = VEC_BACK(scanner->context_stack).heredoc_identifier;
        for (size_t i = 0; i < expected_identifier.len; i++) {
            if (lexer->eof(lexer)) {
                // At EOF during identifier matching, treat as template literal chunk
                return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
            }
            if (lexer->lookahead == expected_identifier.data[i]) {
                advance(lexer, scanner);
            } else {
                // scanner->is_line_ws_only = false;
                advance(lexer, scanner);
                consume_ws(lexer, scanner);
                return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
            }
        }
        // check if the identifier is on a line of its own
        lexer->mark_end(lexer);
        while (iswspace(lexer->lookahead) && lexer->lookahead != '\n') {
            advance(lexer, scanner);
        }
        lexer->log(lexer, "Matched ending heredoc identifier. Checking if it's on a line of its own...");
        lexer->log(lexer, "Was Line whitespace only (other than heredoc ientifier): %d", was_line_ws_only);
        lexer->log(lexer, "Next char: %d", lexer->lookahead);
        if (was_line_ws_only) {
            lexer->log(lexer, "Line is whitespace only so far.");
        }
        if (lexer->lookahead == '\n') {
            lexer->log(lexer,"next char is a newline");
        }
        if (was_line_ws_only && (lexer->lookahead == '\n' || lexer->eof(lexer))) {
        lexer->log(lexer,"Line is whitespace only and next char is a newline or EOF, so accepting HEREDOC_IDENTIFIER and popping context.");
            VEC_POP(scanner->context_stack);
            return accept_inplace(lexer, HEREDOC_IDENTIFIER);
        }
        if (lexer->eof(lexer)) {
            // At EOF, treat as template literal chunk to avoid infinite loop
            return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
        }
        advance(lexer, scanner);
        consume_ws(lexer, scanner);
        lexer->mark_end(lexer);
        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
    // manage template literal chunks

    // handle template literal chunks in quoted contexts
    //
    // they may not contain newlines and may contain escape sequences
    if (valid_symbols[TEMPLATE_LITERAL_CHUNK] && in_quoted_context(scanner)) {
        switch (lexer->lookahead) {
            case '\\':
                advance(lexer, scanner);
                switch (lexer->lookahead) {
                    case '"':
                    case 'n':
                    case 'r':
                    case 't':
                    case '\\':
                        advance(lexer, scanner);
                        consume_ws(lexer, scanner);
                        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
                    case 'u':
                        for (int i = 0; i < 4; i++) {
                            if (!consume_wxdigit(lexer, scanner)) {
                                return false;
                            }
                        }
                        advance(lexer, scanner);
                        consume_ws(lexer, scanner);
                        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
                    case 'U':
                        for (int i = 0; i < 8; i++) {
                            if (!consume_wxdigit(lexer, scanner)) {
                                return false;
                            }
                        }
                        advance(lexer, scanner);
                        consume_ws(lexer, scanner);
                        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
                    default:
                        return false;
                }
        }
    }

    // handle all other quoted template or string literal characters
    if (valid_symbols[TEMPLATE_LITERAL_CHUNK] && in_template_context(scanner)) {
        advance(lexer, scanner);
        consume_ws(lexer, scanner);
        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }

    // probably not handled by the external scanner
    return false;
}

void *tree_sitter_terraform_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->context_stack.data = calloc(1, sizeof(Context));
    return scanner;
}

unsigned tree_sitter_terraform_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    return serialize(scanner, buffer);
}

void tree_sitter_terraform_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize(scanner, buffer, length);
}

bool tree_sitter_terraform_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    return scan(scanner, lexer, valid_symbols);
}

void tree_sitter_terraform_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (uint32_t i = 0; i < scanner->context_stack.len; i++) {
        STRING_FREE(scanner->context_stack.data[i].heredoc_identifier);
    }
    VEC_FREE(scanner->context_stack);
    free(scanner);
}
