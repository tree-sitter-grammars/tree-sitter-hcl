#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 678
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_numeric_lit_token1 = 7,
  aux_sym_numeric_lit_token2 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_null_lit = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  aux_sym_legacy_index_token1 = 17,
  anon_sym_DOT_STAR = 18,
  anon_sym_LBRACK_STAR_RBRACK = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PLUS = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_LT_LT = 40,
  anon_sym_LT_LT_DASH = 41,
  sym_strip_marker = 42,
  anon_sym_endfor = 43,
  anon_sym_else = 44,
  anon_sym_endif = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym_quoted_template_start = 48,
  sym_quoted_template_end = 49,
  sym__template_literal_chunk = 50,
  sym_template_interpolation_start = 51,
  sym_template_interpolation_end = 52,
  sym_template_directive_start = 53,
  sym_template_directive_end = 54,
  sym_heredoc_identifier = 55,
  sym__shim = 56,
  sym_config_file = 57,
  sym_body = 58,
  sym_attribute = 59,
  sym_block = 60,
  sym_block_start = 61,
  sym_block_end = 62,
  sym_expression = 63,
  sym__expr_term = 64,
  sym_literal_value = 65,
  sym_numeric_lit = 66,
  sym_bool_lit = 67,
  sym_string_lit = 68,
  sym_collection_value = 69,
  sym__comma = 70,
  sym_tuple = 71,
  sym_tuple_start = 72,
  sym_tuple_end = 73,
  sym__tuple_elems = 74,
  sym_object = 75,
  sym_object_start = 76,
  sym_object_end = 77,
  sym__object_elems = 78,
  sym_object_elem = 79,
  sym_index = 80,
  sym_new_index = 81,
  sym_legacy_index = 82,
  sym_get_attr = 83,
  sym_splat = 84,
  sym_attr_splat = 85,
  sym_full_splat = 86,
  sym_for_expr = 87,
  sym_for_tuple_expr = 88,
  sym_for_object_expr = 89,
  sym_for_intro = 90,
  sym_for_cond = 91,
  sym_variable_expr = 92,
  sym_function_call = 93,
  sym__function_call_start = 94,
  sym__function_call_end = 95,
  sym_function_arguments = 96,
  sym_conditional = 97,
  sym_operation = 98,
  sym_unary_operation = 99,
  sym_binary_operation = 100,
  sym_template_expr = 101,
  sym_quoted_template = 102,
  sym_heredoc_template = 103,
  sym_heredoc_start = 104,
  aux_sym__template = 105,
  sym_template_literal = 106,
  sym_template_interpolation = 107,
  sym_template_directive = 108,
  sym_template_for = 109,
  sym_template_for_start = 110,
  sym_template_for_end = 111,
  sym_template_if = 112,
  sym_template_if_intro = 113,
  sym_template_else_intro = 114,
  sym_template_if_end = 115,
  aux_sym_body_repeat1 = 116,
  aux_sym_block_repeat1 = 117,
  aux_sym__tuple_elems_repeat1 = 118,
  aux_sym__object_elems_repeat1 = 119,
  aux_sym_attr_splat_repeat1 = 120,
  aux_sym_template_literal_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym_legacy_index_token1] = "legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [anon_sym_endfor] = "endfor",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_template_directive_start] = "template_directive_start",
  [sym_template_directive_end] = "template_directive_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym__shim] = "_shim",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
  [aux_sym__template] = "_template",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [sym_template_for] = "template_for",
  [sym_template_for_start] = "template_for_start",
  [sym_template_for_end] = "template_for_end",
  [sym_template_if] = "template_if",
  [sym_template_if_intro] = "template_if_intro",
  [sym_template_else_intro] = "template_else_intro",
  [sym_template_if_end] = "template_if_end",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_legacy_index_token1] = aux_sym_legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_template_directive_start] = sym_template_directive_start,
  [sym_template_directive_end] = sym_template_directive_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym__shim] = sym__shim,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
  [aux_sym__template] = aux_sym__template,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [sym_template_for] = sym_template_for,
  [sym_template_for_start] = sym_template_for_start,
  [sym_template_for_end] = sym_template_for_end,
  [sym_template_if] = sym_template_if,
  [sym_template_if_intro] = sym_template_if_intro,
  [sym_template_else_intro] = sym_template_else_intro,
  [sym_template_if_end] = sym_template_if_end,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__shim] = {
    .visible = false,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__template] = {
    .visible = false,
    .named = false,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_for_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_else_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_template_if_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_val, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 7,
  [13] = 7,
  [14] = 7,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 25,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 44,
  [50] = 47,
  [51] = 45,
  [52] = 41,
  [53] = 47,
  [54] = 54,
  [55] = 48,
  [56] = 41,
  [57] = 43,
  [58] = 58,
  [59] = 44,
  [60] = 60,
  [61] = 48,
  [62] = 41,
  [63] = 47,
  [64] = 64,
  [65] = 65,
  [66] = 48,
  [67] = 44,
  [68] = 58,
  [69] = 69,
  [70] = 58,
  [71] = 58,
  [72] = 58,
  [73] = 43,
  [74] = 74,
  [75] = 43,
  [76] = 43,
  [77] = 45,
  [78] = 44,
  [79] = 48,
  [80] = 41,
  [81] = 81,
  [82] = 45,
  [83] = 47,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 45,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 93,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 95,
  [102] = 102,
  [103] = 98,
  [104] = 99,
  [105] = 105,
  [106] = 100,
  [107] = 105,
  [108] = 99,
  [109] = 102,
  [110] = 98,
  [111] = 99,
  [112] = 105,
  [113] = 100,
  [114] = 93,
  [115] = 98,
  [116] = 95,
  [117] = 102,
  [118] = 95,
  [119] = 105,
  [120] = 100,
  [121] = 93,
  [122] = 100,
  [123] = 102,
  [124] = 102,
  [125] = 105,
  [126] = 99,
  [127] = 98,
  [128] = 35,
  [129] = 40,
  [130] = 30,
  [131] = 39,
  [132] = 37,
  [133] = 28,
  [134] = 34,
  [135] = 33,
  [136] = 89,
  [137] = 91,
  [138] = 88,
  [139] = 90,
  [140] = 92,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 141,
  [175] = 39,
  [176] = 30,
  [177] = 37,
  [178] = 28,
  [179] = 34,
  [180] = 33,
  [181] = 40,
  [182] = 35,
  [183] = 170,
  [184] = 155,
  [185] = 161,
  [186] = 173,
  [187] = 156,
  [188] = 172,
  [189] = 163,
  [190] = 162,
  [191] = 142,
  [192] = 158,
  [193] = 160,
  [194] = 166,
  [195] = 147,
  [196] = 164,
  [197] = 171,
  [198] = 150,
  [199] = 157,
  [200] = 159,
  [201] = 145,
  [202] = 168,
  [203] = 167,
  [204] = 154,
  [205] = 152,
  [206] = 153,
  [207] = 169,
  [208] = 144,
  [209] = 151,
  [210] = 149,
  [211] = 165,
  [212] = 143,
  [213] = 148,
  [214] = 146,
  [215] = 35,
  [216] = 34,
  [217] = 92,
  [218] = 89,
  [219] = 88,
  [220] = 30,
  [221] = 91,
  [222] = 30,
  [223] = 37,
  [224] = 39,
  [225] = 37,
  [226] = 28,
  [227] = 34,
  [228] = 33,
  [229] = 40,
  [230] = 90,
  [231] = 40,
  [232] = 28,
  [233] = 35,
  [234] = 39,
  [235] = 33,
  [236] = 88,
  [237] = 90,
  [238] = 88,
  [239] = 89,
  [240] = 91,
  [241] = 91,
  [242] = 92,
  [243] = 90,
  [244] = 89,
  [245] = 92,
  [246] = 141,
  [247] = 157,
  [248] = 165,
  [249] = 148,
  [250] = 149,
  [251] = 167,
  [252] = 151,
  [253] = 152,
  [254] = 158,
  [255] = 146,
  [256] = 145,
  [257] = 164,
  [258] = 144,
  [259] = 141,
  [260] = 173,
  [261] = 150,
  [262] = 160,
  [263] = 147,
  [264] = 154,
  [265] = 166,
  [266] = 172,
  [267] = 141,
  [268] = 163,
  [269] = 153,
  [270] = 159,
  [271] = 155,
  [272] = 156,
  [273] = 142,
  [274] = 143,
  [275] = 169,
  [276] = 161,
  [277] = 162,
  [278] = 171,
  [279] = 170,
  [280] = 168,
  [281] = 152,
  [282] = 165,
  [283] = 169,
  [284] = 168,
  [285] = 143,
  [286] = 167,
  [287] = 173,
  [288] = 144,
  [289] = 142,
  [290] = 156,
  [291] = 155,
  [292] = 153,
  [293] = 163,
  [294] = 164,
  [295] = 147,
  [296] = 150,
  [297] = 159,
  [298] = 152,
  [299] = 171,
  [300] = 154,
  [301] = 170,
  [302] = 157,
  [303] = 158,
  [304] = 145,
  [305] = 162,
  [306] = 146,
  [307] = 171,
  [308] = 148,
  [309] = 160,
  [310] = 149,
  [311] = 168,
  [312] = 167,
  [313] = 151,
  [314] = 172,
  [315] = 166,
  [316] = 154,
  [317] = 165,
  [318] = 162,
  [319] = 160,
  [320] = 166,
  [321] = 158,
  [322] = 172,
  [323] = 157,
  [324] = 161,
  [325] = 173,
  [326] = 169,
  [327] = 144,
  [328] = 164,
  [329] = 145,
  [330] = 146,
  [331] = 143,
  [332] = 142,
  [333] = 148,
  [334] = 149,
  [335] = 159,
  [336] = 156,
  [337] = 151,
  [338] = 155,
  [339] = 153,
  [340] = 163,
  [341] = 170,
  [342] = 147,
  [343] = 150,
  [344] = 161,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 351,
  [353] = 351,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 356,
  [358] = 356,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 362,
  [365] = 363,
  [366] = 359,
  [367] = 367,
  [368] = 368,
  [369] = 361,
  [370] = 370,
  [371] = 361,
  [372] = 363,
  [373] = 373,
  [374] = 374,
  [375] = 374,
  [376] = 370,
  [377] = 361,
  [378] = 374,
  [379] = 359,
  [380] = 360,
  [381] = 381,
  [382] = 363,
  [383] = 367,
  [384] = 361,
  [385] = 368,
  [386] = 373,
  [387] = 368,
  [388] = 374,
  [389] = 363,
  [390] = 360,
  [391] = 381,
  [392] = 367,
  [393] = 373,
  [394] = 360,
  [395] = 370,
  [396] = 360,
  [397] = 374,
  [398] = 381,
  [399] = 362,
  [400] = 347,
  [401] = 346,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 407,
  [411] = 407,
  [412] = 412,
  [413] = 407,
  [414] = 414,
  [415] = 407,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 419,
  [421] = 419,
  [422] = 422,
  [423] = 423,
  [424] = 417,
  [425] = 422,
  [426] = 419,
  [427] = 427,
  [428] = 428,
  [429] = 347,
  [430] = 430,
  [431] = 346,
  [432] = 430,
  [433] = 417,
  [434] = 419,
  [435] = 422,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 439,
  [444] = 441,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 436,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 454,
  [463] = 461,
  [464] = 458,
  [465] = 441,
  [466] = 430,
  [467] = 460,
  [468] = 459,
  [469] = 454,
  [470] = 445,
  [471] = 471,
  [472] = 472,
  [473] = 457,
  [474] = 456,
  [475] = 445,
  [476] = 439,
  [477] = 454,
  [478] = 455,
  [479] = 472,
  [480] = 453,
  [481] = 472,
  [482] = 449,
  [483] = 445,
  [484] = 445,
  [485] = 446,
  [486] = 454,
  [487] = 440,
  [488] = 447,
  [489] = 442,
  [490] = 451,
  [491] = 452,
  [492] = 450,
  [493] = 493,
  [494] = 494,
  [495] = 452,
  [496] = 453,
  [497] = 497,
  [498] = 455,
  [499] = 456,
  [500] = 457,
  [501] = 501,
  [502] = 459,
  [503] = 460,
  [504] = 461,
  [505] = 430,
  [506] = 506,
  [507] = 458,
  [508] = 347,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 159,
  [516] = 422,
  [517] = 517,
  [518] = 510,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 346,
  [528] = 528,
  [529] = 440,
  [530] = 442,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 494,
  [535] = 494,
  [536] = 526,
  [537] = 537,
  [538] = 538,
  [539] = 510,
  [540] = 540,
  [541] = 451,
  [542] = 446,
  [543] = 447,
  [544] = 526,
  [545] = 346,
  [546] = 531,
  [547] = 449,
  [548] = 531,
  [549] = 549,
  [550] = 347,
  [551] = 551,
  [552] = 436,
  [553] = 553,
  [554] = 450,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 556,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 563,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 559,
  [575] = 563,
  [576] = 564,
  [577] = 577,
  [578] = 560,
  [579] = 555,
  [580] = 565,
  [581] = 557,
  [582] = 559,
  [583] = 558,
  [584] = 573,
  [585] = 572,
  [586] = 586,
  [587] = 565,
  [588] = 573,
  [589] = 556,
  [590] = 562,
  [591] = 571,
  [592] = 592,
  [593] = 563,
  [594] = 558,
  [595] = 557,
  [596] = 596,
  [597] = 565,
  [598] = 568,
  [599] = 569,
  [600] = 558,
  [601] = 559,
  [602] = 562,
  [603] = 571,
  [604] = 572,
  [605] = 573,
  [606] = 555,
  [607] = 569,
  [608] = 563,
  [609] = 568,
  [610] = 564,
  [611] = 557,
  [612] = 560,
  [613] = 613,
  [614] = 555,
  [615] = 562,
  [616] = 556,
  [617] = 559,
  [618] = 618,
  [619] = 569,
  [620] = 568,
  [621] = 558,
  [622] = 557,
  [623] = 623,
  [624] = 556,
  [625] = 562,
  [626] = 573,
  [627] = 555,
  [628] = 568,
  [629] = 569,
  [630] = 630,
  [631] = 565,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 634,
  [638] = 634,
  [639] = 633,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 648,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 633,
  [659] = 640,
  [660] = 641,
  [661] = 642,
  [662] = 662,
  [663] = 642,
  [664] = 664,
  [665] = 647,
  [666] = 647,
  [667] = 647,
  [668] = 648,
  [669] = 669,
  [670] = 647,
  [671] = 671,
  [672] = 672,
  [673] = 641,
  [674] = 674,
  [675] = 640,
  [676] = 676,
  [677] = 677,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43360
    ? (c < 4096
      ? (c < 2654
        ? (c < 1808
          ? (c < 902
            ? (c < 216
              ? (c < 'u'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'o'
                    ? (c >= 'g' && c <= 'm')
                    : c <= 's')))
                : (c <= 'z' || (c < 186
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 186 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 750
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 890
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))))))
            : (c <= 902 || (c < 1488
              ? (c < 1015
                ? (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3200
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8064
        ? (c < 5998
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5112
              ? (c < 4824
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))))))
          : (c <= 6000 || (c < 7168
            ? (c < 6528
              ? (c < 6314
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)))
                : (c <= 6314 || (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))
              : (c <= 6571 || (c < 6917
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
            : (c <= 7203 || (c < 7424
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))))
              : (c <= 7615 || (c < 8016
                ? (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))))
        : (c <= 8116 || (c < 11728
          ? (c < 8490
            ? (c < 8319
              ? (c < 8150
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))
              : (c <= 8319 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))
            : (c <= 8505 || (c < 11565
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11688
                ? (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))))))
          : (c <= 11734 || (c < 42560
            ? (c < 12549
              ? (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12443
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))
              : (c <= 12591 || (c < 19968
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))))))
            : (c <= 42606 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))))
              : (c <= 43013 || (c < 43250
                ? (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))
                : (c <= 43255 || (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))))))))))))
    : (c <= 43388 || (c < 70751
      ? (c < 66967
        ? (c < 64323
          ? (c < 43785
            ? (c < 43646
              ? (c < 43520
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))
              : (c <= 43695 || (c < 43714
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))))))
            : (c <= 43790 || (c < 63744
              ? (c < 43868
                ? (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64109 || (c < 64287
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))
                : (c <= 64296 || (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))))))
          : (c <= 64324 || (c < 65664
            ? (c < 65474
              ? (c < 65136
                ? (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))
                : (c <= 65140 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65549
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66513
              ? (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))))
              : (c <= 66517 || (c < 66864
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))
        : (c <= 66977 || (c < 69296
          ? (c < 67872
            ? (c < 67592
              ? (c < 67424
                ? (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)))
                : (c <= 67431 || (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))))
              : (c <= 67592 || (c < 67680
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c >= 67840 && c <= 67861)))))))
            : (c <= 67897 || (c < 68297
              ? (c < 68117
                ? (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68096 || (c >= 68112 && c <= 68115)))
                : (c <= 68119 || (c < 68224
                  ? (c < 68192
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68220)
                  : (c <= 68252 || (c >= 68288 && c <= 68295)))))
              : (c <= 68324 || (c < 68608
                ? (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c >= 68480 && c <= 68497)))
                : (c <= 68680 || (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68899 || (c >= 69248 && c <= 69289)))))))))
          : (c <= 69297 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69445 || (c >= 69488 && c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43396
    ? (c < 4176
      ? (c < 2703
        ? (c < 1969
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3585
            ? (c < 3389
              ? (c < 3296
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3461
                ? (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3632 || (c < 3773
              ? (c < 3718
                ? (c < 3713
                  ? (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))))
              : (c <= 3773 || (c < 3904
                ? (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))))))))))))
      : (c <= 4181 || (c < 8118
        ? (c < 6103
          ? (c < 4800
            ? (c < 4348
              ? (c < 4238
                ? (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))
              : (c <= 4680 || (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))
            : (c <= 4800 || (c < 5743
              ? (c < 4888
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42623
            ? (c < 12593
              ? (c < 12353
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12443 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))
              : (c <= 12686 || (c < 42192
                ? (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))))
            : (c <= 42653 || (c < 43015
              ? (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))
              : (c <= 43018 || (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))))))
    : (c <= 43442 || (c < 70784
      ? (c < 66979
        ? (c < 64326
          ? (c < 43793
            ? (c < 43697
              ? (c < 43584
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))
              : (c <= 43697 || (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))
            : (c <= 43798 || (c < 64112
              ? (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))
              : (c <= 64217 || (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43520
    ? (c < 3749
      ? (c < 2730
        ? (c < 1984
          ? (c < 910
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)))))))))
          : (c <= 2037 || (c < 2534
            ? (c < 2437
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))))
              : (c <= 2444 || (c < 2492
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))
                : (c <= 2500 || (c < 2519
                  ? (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)
                  : (c <= 2519 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3157
          ? (c < 2929
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))))))
            : (c <= 2929 || (c < 3014
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))))
              : (c <= 3016 || (c < 3086
                ? (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)))
                : (c <= 3088 || (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)))))))))
          : (c <= 3158 || (c < 3412
            ? (c < 3270
              ? (c < 3205
                ? (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)))))
              : (c <= 3272 || (c < 3313
                ? (c < 3293
                  ? (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)
                  : (c <= 3294 || (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)))))))
            : (c <= 3415 || (c < 3542
              ? (c < 3482
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)
                  : (c <= 3455 || (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c < 3535
                    ? c == 3530
                    : c <= 3540)))))
              : (c <= 3542 || (c < 3664
                ? (c < 3570
                  ? (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)
                  : (c <= 3571 || (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))))))))))
      : (c <= 3749 || (c < 7960
        ? (c < 5761
          ? (c < 4304
            ? (c < 3897
              ? (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3881 || (c < 3895
                    ? c == 3893
                    : c <= 3895)))))
              : (c <= 3897 || (c < 4038
                ? (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)))
                : (c <= 4038 || (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))
            : (c <= 4346 || (c < 4802
              ? (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 4969
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)))
                : (c <= 4977 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))))))))
          : (c <= 5786 || (c < 6576
            ? (c < 6112
              ? (c < 5984
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || (c < 6108
                    ? c == 6103
                    : c <= 6109)))))
              : (c <= 6121 || (c < 6400
                ? (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)))
                : (c <= 6430 || (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))))
            : (c <= 6601 || (c < 7019
              ? (c < 6800
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))
                : (c <= 6809 || (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6862 || (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)))))
              : (c <= 7027 || (c < 7312
                ? (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)))
                : (c <= 7354 || (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11688
          ? (c < 8417
            ? (c < 8134
              ? (c < 8029
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || (c < 8027
                    ? c == 8025
                    : c <= 8027)))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))))
              : (c <= 8140 || (c < 8255
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8256 || (c < 8319
                  ? (c < 8305
                    ? c == 8276
                    : c <= 8305)
                  : (c <= 8319 || (c < 8400
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8412)))))))
            : (c <= 8417 || (c < 8517
              ? (c < 8472
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8421 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)))))
              : (c <= 8521 || (c < 11559
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 43520
    ? (c < 3751
      ? (c < 2738
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3160
          ? (c < 2946
            ? (c < 2835
              ? (c < 2784
                ? (c < 2759
                  ? (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)
                  : (c <= 2761 || (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)))))
              : (c <= 2856 || (c < 2891
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)))
                : (c <= 2893 || (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))))))
            : (c <= 2947 || (c < 3018
              ? (c < 2974
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)))))
              : (c <= 3021 || (c < 3090
                ? (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3055 || (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)))
                : (c <= 3112 || (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))))))))
          : (c <= 3162 || (c < 3423
            ? (c < 3274
              ? (c < 3214
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3183 || (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)))))
              : (c <= 3277 || (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))))))
            : (c <= 3427 || (c < 3544
              ? (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))))
              : (c <= 3551 || (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))))))))))
      : (c <= 3773 || (c < 7968
        ? (c < 5792
          ? (c < 4348
            ? (c < 3902
              ? (c < 3840
                ? (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))
                : (c <= 3840 || (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))))
              : (c <= 3911 || (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))))))
            : (c <= 4680 || (c < 4808
              ? (c < 4746
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))))
              : (c <= 4822 || (c < 4992
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))))))))
          : (c <= 5866 || (c < 6608
            ? (c < 6155
              ? (c < 5998
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))))
              : (c <= 6157 || (c < 6432
                ? (c < 6272
                  ? (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6443 || (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)))))))
            : (c <= 6618 || (c < 7040
              ? (c < 6823
                ? (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))))
              : (c <= 7155 || (c < 7357
                ? (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))))))))
        : (c <= 8005 || (c < 11688
          ? (c < 8421
            ? (c < 8144
              ? (c < 8031
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))))
              : (c <= 8147 || (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))))
            : (c <= 8432 || (c < 8526
              ? (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)))))
              : (c <= 8526 || (c < 11565
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
          : (c <= 11694 || (c < 42512
            ? (c < 12353
              ? (c < 11736
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)))
                : (c <= 11742 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11744 && c <= 11775)
                    : c <= 12295)
                  : (c <= 12335 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))))
              : (c <= 12438 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))))))
            : (c <= 42539 || (c < 43072
              ? (c < 42891
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)
                  : (c <= 42737 || (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)))
                : (c <= 42954 || (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)))))
              : (c <= 43123 || (c < 43312
                ? (c < 43232
                  ? (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)
                  : (c <= 43255 || (c < 43261
                    ? c == 43259
                    : c <= 43309)))
                : (c <= 43347 || (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))))))))))))))
    : (c <= 43574 || (c < 71488
      ? (c < 67647
        ? (c < 65482
          ? (c < 64275
            ? (c < 43816
              ? (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))
              : (c <= 43822 || (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))))
            : (c <= 64279 || (c < 65024
              ? (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65019)))))
              : (c <= 65039 || (c < 65296
                ? (c < 65101
                  ? (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)
                  : (c <= 65103 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))
                : (c <= 65305 || (c < 65345
                  ? (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)
                  : (c <= 65370 || (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)))))))))
          : (c <= 65487 || (c < 66736
            ? (c < 66176
              ? (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))))
              : (c <= 66204 || (c < 66432
                ? (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))))))
            : (c <= 66771 || (c < 67072
              ? (c < 66956
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)))
                : (c <= 66962 || (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))))
              : (c <= 67382 || (c < 67584
                ? (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))))))
        : (c <= 67669 || (c < 70006
          ? (c < 68608
            ? (c < 68117
              ? (c < 67872
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68099 || (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)))))
              : (c <= 68119 || (c < 68288
                ? (c < 68159
                  ? (c < 68152
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68154)
                  : (c <= 68159 || (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)))
                : (c <= 68295 || (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68326)
                    : c <= 68405)
                  : (c <= 68437 || (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)))))))
            : (c <= 68680 || (c < 69552
              ? (c < 69291
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68903 || (c < 69248
                    ? (c >= 68912 && c <= 68921)
                    : c <= 69289)))
                : (c <= 69292 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69456)
                    : c <= 69509)))))
              : (c <= 69572 || (c < 69840
                ? (c < 69734
                  ? (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69702)
                  : (c <= 69749 || (c < 69826
                    ? (c >= 69759 && c <= 69818)
                    : c <= 69826)))
                : (c <= 69864 || (c < 69942
                  ? (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)
                  : (c <= 69951 || (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(43);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(59);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(59);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 3, .external_lex_state = 3},
  [12] = {.lex_state = 3, .external_lex_state = 3},
  [13] = {.lex_state = 3, .external_lex_state = 3},
  [14] = {.lex_state = 3, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 1, .external_lex_state = 3},
  [18] = {.lex_state = 1, .external_lex_state = 3},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 4},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 4},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 4},
  [25] = {.lex_state = 1, .external_lex_state = 4},
  [26] = {.lex_state = 1, .external_lex_state = 4},
  [27] = {.lex_state = 1, .external_lex_state = 4},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 1, .external_lex_state = 3},
  [48] = {.lex_state = 1, .external_lex_state = 3},
  [49] = {.lex_state = 1, .external_lex_state = 3},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 1, .external_lex_state = 3},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 3},
  [54] = {.lex_state = 1, .external_lex_state = 3},
  [55] = {.lex_state = 1, .external_lex_state = 3},
  [56] = {.lex_state = 1, .external_lex_state = 3},
  [57] = {.lex_state = 1, .external_lex_state = 3},
  [58] = {.lex_state = 1, .external_lex_state = 3},
  [59] = {.lex_state = 1, .external_lex_state = 3},
  [60] = {.lex_state = 1, .external_lex_state = 3},
  [61] = {.lex_state = 1, .external_lex_state = 3},
  [62] = {.lex_state = 1, .external_lex_state = 3},
  [63] = {.lex_state = 1, .external_lex_state = 3},
  [64] = {.lex_state = 1, .external_lex_state = 3},
  [65] = {.lex_state = 1, .external_lex_state = 3},
  [66] = {.lex_state = 1, .external_lex_state = 3},
  [67] = {.lex_state = 1, .external_lex_state = 3},
  [68] = {.lex_state = 1, .external_lex_state = 3},
  [69] = {.lex_state = 1, .external_lex_state = 3},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 1, .external_lex_state = 3},
  [72] = {.lex_state = 1, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 1, .external_lex_state = 3},
  [76] = {.lex_state = 1, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 1, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 1, .external_lex_state = 3},
  [81] = {.lex_state = 1, .external_lex_state = 3},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 1, .external_lex_state = 3},
  [85] = {.lex_state = 1, .external_lex_state = 3},
  [86] = {.lex_state = 1, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 1, .external_lex_state = 3},
  [89] = {.lex_state = 1, .external_lex_state = 3},
  [90] = {.lex_state = 1, .external_lex_state = 3},
  [91] = {.lex_state = 1, .external_lex_state = 3},
  [92] = {.lex_state = 1, .external_lex_state = 3},
  [93] = {.lex_state = 1, .external_lex_state = 3},
  [94] = {.lex_state = 1, .external_lex_state = 3},
  [95] = {.lex_state = 1, .external_lex_state = 3},
  [96] = {.lex_state = 1, .external_lex_state = 3},
  [97] = {.lex_state = 1, .external_lex_state = 3},
  [98] = {.lex_state = 1, .external_lex_state = 3},
  [99] = {.lex_state = 1, .external_lex_state = 3},
  [100] = {.lex_state = 1, .external_lex_state = 3},
  [101] = {.lex_state = 1, .external_lex_state = 3},
  [102] = {.lex_state = 1, .external_lex_state = 3},
  [103] = {.lex_state = 1, .external_lex_state = 3},
  [104] = {.lex_state = 1, .external_lex_state = 3},
  [105] = {.lex_state = 1, .external_lex_state = 3},
  [106] = {.lex_state = 1, .external_lex_state = 3},
  [107] = {.lex_state = 1, .external_lex_state = 3},
  [108] = {.lex_state = 1, .external_lex_state = 3},
  [109] = {.lex_state = 1, .external_lex_state = 3},
  [110] = {.lex_state = 1, .external_lex_state = 3},
  [111] = {.lex_state = 1, .external_lex_state = 3},
  [112] = {.lex_state = 1, .external_lex_state = 3},
  [113] = {.lex_state = 1, .external_lex_state = 3},
  [114] = {.lex_state = 1, .external_lex_state = 3},
  [115] = {.lex_state = 1, .external_lex_state = 3},
  [116] = {.lex_state = 1, .external_lex_state = 3},
  [117] = {.lex_state = 1, .external_lex_state = 3},
  [118] = {.lex_state = 1, .external_lex_state = 3},
  [119] = {.lex_state = 1, .external_lex_state = 3},
  [120] = {.lex_state = 1, .external_lex_state = 3},
  [121] = {.lex_state = 1, .external_lex_state = 3},
  [122] = {.lex_state = 1, .external_lex_state = 3},
  [123] = {.lex_state = 1, .external_lex_state = 3},
  [124] = {.lex_state = 1, .external_lex_state = 3},
  [125] = {.lex_state = 1, .external_lex_state = 3},
  [126] = {.lex_state = 1, .external_lex_state = 3},
  [127] = {.lex_state = 1, .external_lex_state = 3},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 1, .external_lex_state = 3},
  [142] = {.lex_state = 1, .external_lex_state = 3},
  [143] = {.lex_state = 1, .external_lex_state = 3},
  [144] = {.lex_state = 1, .external_lex_state = 3},
  [145] = {.lex_state = 1, .external_lex_state = 3},
  [146] = {.lex_state = 1, .external_lex_state = 3},
  [147] = {.lex_state = 1, .external_lex_state = 3},
  [148] = {.lex_state = 1, .external_lex_state = 3},
  [149] = {.lex_state = 1, .external_lex_state = 3},
  [150] = {.lex_state = 1, .external_lex_state = 3},
  [151] = {.lex_state = 1, .external_lex_state = 3},
  [152] = {.lex_state = 1, .external_lex_state = 3},
  [153] = {.lex_state = 1, .external_lex_state = 3},
  [154] = {.lex_state = 1, .external_lex_state = 3},
  [155] = {.lex_state = 1, .external_lex_state = 3},
  [156] = {.lex_state = 1, .external_lex_state = 3},
  [157] = {.lex_state = 1, .external_lex_state = 3},
  [158] = {.lex_state = 1, .external_lex_state = 3},
  [159] = {.lex_state = 1, .external_lex_state = 3},
  [160] = {.lex_state = 1, .external_lex_state = 3},
  [161] = {.lex_state = 1, .external_lex_state = 3},
  [162] = {.lex_state = 1, .external_lex_state = 3},
  [163] = {.lex_state = 1, .external_lex_state = 3},
  [164] = {.lex_state = 1, .external_lex_state = 3},
  [165] = {.lex_state = 1, .external_lex_state = 3},
  [166] = {.lex_state = 1, .external_lex_state = 3},
  [167] = {.lex_state = 1, .external_lex_state = 3},
  [168] = {.lex_state = 1, .external_lex_state = 3},
  [169] = {.lex_state = 1, .external_lex_state = 3},
  [170] = {.lex_state = 1, .external_lex_state = 3},
  [171] = {.lex_state = 1, .external_lex_state = 3},
  [172] = {.lex_state = 1, .external_lex_state = 3},
  [173] = {.lex_state = 1, .external_lex_state = 3},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 41},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41, .external_lex_state = 5},
  [216] = {.lex_state = 41, .external_lex_state = 6},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 41, .external_lex_state = 6},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 41, .external_lex_state = 5},
  [223] = {.lex_state = 41, .external_lex_state = 6},
  [224] = {.lex_state = 41, .external_lex_state = 5},
  [225] = {.lex_state = 41, .external_lex_state = 5},
  [226] = {.lex_state = 41, .external_lex_state = 5},
  [227] = {.lex_state = 41, .external_lex_state = 5},
  [228] = {.lex_state = 41, .external_lex_state = 5},
  [229] = {.lex_state = 41, .external_lex_state = 6},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 41, .external_lex_state = 5},
  [232] = {.lex_state = 41, .external_lex_state = 6},
  [233] = {.lex_state = 41, .external_lex_state = 6},
  [234] = {.lex_state = 41, .external_lex_state = 6},
  [235] = {.lex_state = 41, .external_lex_state = 6},
  [236] = {.lex_state = 41, .external_lex_state = 5},
  [237] = {.lex_state = 41, .external_lex_state = 6},
  [238] = {.lex_state = 41, .external_lex_state = 6},
  [239] = {.lex_state = 41, .external_lex_state = 6},
  [240] = {.lex_state = 41, .external_lex_state = 6},
  [241] = {.lex_state = 41, .external_lex_state = 5},
  [242] = {.lex_state = 41, .external_lex_state = 5},
  [243] = {.lex_state = 41, .external_lex_state = 5},
  [244] = {.lex_state = 41, .external_lex_state = 5},
  [245] = {.lex_state = 41, .external_lex_state = 6},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 41, .external_lex_state = 5},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 41, .external_lex_state = 6},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 41, .external_lex_state = 6},
  [282] = {.lex_state = 41, .external_lex_state = 5},
  [283] = {.lex_state = 41, .external_lex_state = 5},
  [284] = {.lex_state = 41, .external_lex_state = 6},
  [285] = {.lex_state = 41, .external_lex_state = 5},
  [286] = {.lex_state = 41, .external_lex_state = 6},
  [287] = {.lex_state = 41, .external_lex_state = 6},
  [288] = {.lex_state = 41, .external_lex_state = 6},
  [289] = {.lex_state = 41, .external_lex_state = 5},
  [290] = {.lex_state = 41, .external_lex_state = 5},
  [291] = {.lex_state = 41, .external_lex_state = 5},
  [292] = {.lex_state = 41, .external_lex_state = 5},
  [293] = {.lex_state = 41, .external_lex_state = 5},
  [294] = {.lex_state = 41, .external_lex_state = 6},
  [295] = {.lex_state = 41, .external_lex_state = 5},
  [296] = {.lex_state = 41, .external_lex_state = 5},
  [297] = {.lex_state = 41, .external_lex_state = 6},
  [298] = {.lex_state = 41, .external_lex_state = 5},
  [299] = {.lex_state = 41, .external_lex_state = 6},
  [300] = {.lex_state = 41, .external_lex_state = 5},
  [301] = {.lex_state = 41, .external_lex_state = 5},
  [302] = {.lex_state = 41, .external_lex_state = 5},
  [303] = {.lex_state = 41, .external_lex_state = 5},
  [304] = {.lex_state = 41, .external_lex_state = 6},
  [305] = {.lex_state = 41, .external_lex_state = 5},
  [306] = {.lex_state = 41, .external_lex_state = 6},
  [307] = {.lex_state = 41, .external_lex_state = 5},
  [308] = {.lex_state = 41, .external_lex_state = 6},
  [309] = {.lex_state = 41, .external_lex_state = 5},
  [310] = {.lex_state = 41, .external_lex_state = 6},
  [311] = {.lex_state = 41, .external_lex_state = 5},
  [312] = {.lex_state = 41, .external_lex_state = 5},
  [313] = {.lex_state = 41, .external_lex_state = 6},
  [314] = {.lex_state = 41, .external_lex_state = 6},
  [315] = {.lex_state = 41, .external_lex_state = 6},
  [316] = {.lex_state = 41, .external_lex_state = 6},
  [317] = {.lex_state = 41, .external_lex_state = 6},
  [318] = {.lex_state = 41, .external_lex_state = 6},
  [319] = {.lex_state = 41, .external_lex_state = 6},
  [320] = {.lex_state = 41, .external_lex_state = 5},
  [321] = {.lex_state = 41, .external_lex_state = 6},
  [322] = {.lex_state = 41, .external_lex_state = 5},
  [323] = {.lex_state = 41, .external_lex_state = 6},
  [324] = {.lex_state = 41, .external_lex_state = 6},
  [325] = {.lex_state = 41, .external_lex_state = 5},
  [326] = {.lex_state = 41, .external_lex_state = 6},
  [327] = {.lex_state = 41, .external_lex_state = 5},
  [328] = {.lex_state = 41, .external_lex_state = 5},
  [329] = {.lex_state = 41, .external_lex_state = 5},
  [330] = {.lex_state = 41, .external_lex_state = 5},
  [331] = {.lex_state = 41, .external_lex_state = 6},
  [332] = {.lex_state = 41, .external_lex_state = 6},
  [333] = {.lex_state = 41, .external_lex_state = 5},
  [334] = {.lex_state = 41, .external_lex_state = 5},
  [335] = {.lex_state = 41, .external_lex_state = 5},
  [336] = {.lex_state = 41, .external_lex_state = 6},
  [337] = {.lex_state = 41, .external_lex_state = 5},
  [338] = {.lex_state = 41, .external_lex_state = 6},
  [339] = {.lex_state = 41, .external_lex_state = 6},
  [340] = {.lex_state = 41, .external_lex_state = 6},
  [341] = {.lex_state = 41, .external_lex_state = 6},
  [342] = {.lex_state = 41, .external_lex_state = 6},
  [343] = {.lex_state = 41, .external_lex_state = 6},
  [344] = {.lex_state = 41, .external_lex_state = 5},
  [345] = {.lex_state = 1, .external_lex_state = 3},
  [346] = {.lex_state = 1, .external_lex_state = 3},
  [347] = {.lex_state = 1, .external_lex_state = 3},
  [348] = {.lex_state = 1, .external_lex_state = 3},
  [349] = {.lex_state = 3, .external_lex_state = 3},
  [350] = {.lex_state = 3, .external_lex_state = 3},
  [351] = {.lex_state = 0, .external_lex_state = 7},
  [352] = {.lex_state = 0, .external_lex_state = 7},
  [353] = {.lex_state = 0, .external_lex_state = 7},
  [354] = {.lex_state = 1, .external_lex_state = 3},
  [355] = {.lex_state = 1, .external_lex_state = 3},
  [356] = {.lex_state = 0, .external_lex_state = 7},
  [357] = {.lex_state = 0, .external_lex_state = 7},
  [358] = {.lex_state = 0, .external_lex_state = 7},
  [359] = {.lex_state = 0, .external_lex_state = 7},
  [360] = {.lex_state = 0, .external_lex_state = 8},
  [361] = {.lex_state = 0, .external_lex_state = 9},
  [362] = {.lex_state = 0, .external_lex_state = 8},
  [363] = {.lex_state = 0, .external_lex_state = 9},
  [364] = {.lex_state = 0, .external_lex_state = 9},
  [365] = {.lex_state = 0, .external_lex_state = 9},
  [366] = {.lex_state = 0, .external_lex_state = 7},
  [367] = {.lex_state = 0, .external_lex_state = 7},
  [368] = {.lex_state = 0, .external_lex_state = 7},
  [369] = {.lex_state = 0, .external_lex_state = 9},
  [370] = {.lex_state = 0, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 9},
  [372] = {.lex_state = 0, .external_lex_state = 9},
  [373] = {.lex_state = 0, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 8},
  [375] = {.lex_state = 0, .external_lex_state = 8},
  [376] = {.lex_state = 0, .external_lex_state = 7},
  [377] = {.lex_state = 0, .external_lex_state = 9},
  [378] = {.lex_state = 0, .external_lex_state = 8},
  [379] = {.lex_state = 0, .external_lex_state = 7},
  [380] = {.lex_state = 0, .external_lex_state = 8},
  [381] = {.lex_state = 0, .external_lex_state = 7},
  [382] = {.lex_state = 0, .external_lex_state = 9},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 9},
  [385] = {.lex_state = 0, .external_lex_state = 7},
  [386] = {.lex_state = 0, .external_lex_state = 7},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 8},
  [389] = {.lex_state = 0, .external_lex_state = 9},
  [390] = {.lex_state = 0, .external_lex_state = 8},
  [391] = {.lex_state = 0, .external_lex_state = 7},
  [392] = {.lex_state = 0, .external_lex_state = 7},
  [393] = {.lex_state = 0, .external_lex_state = 7},
  [394] = {.lex_state = 0, .external_lex_state = 8},
  [395] = {.lex_state = 0, .external_lex_state = 7},
  [396] = {.lex_state = 0, .external_lex_state = 8},
  [397] = {.lex_state = 0, .external_lex_state = 8},
  [398] = {.lex_state = 0, .external_lex_state = 7},
  [399] = {.lex_state = 0, .external_lex_state = 7},
  [400] = {.lex_state = 41},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 41, .external_lex_state = 2},
  [403] = {.lex_state = 41, .external_lex_state = 2},
  [404] = {.lex_state = 4, .external_lex_state = 3},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 41},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 41},
  [409] = {.lex_state = 41},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 41, .external_lex_state = 3},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 41},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0, .external_lex_state = 8},
  [423] = {.lex_state = 41, .external_lex_state = 3},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0, .external_lex_state = 9},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0, .external_lex_state = 8},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0, .external_lex_state = 9},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0, .external_lex_state = 7},
  [436] = {.lex_state = 0, .external_lex_state = 9},
  [437] = {.lex_state = 0, .external_lex_state = 10},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0, .external_lex_state = 8},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0, .external_lex_state = 8},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0, .external_lex_state = 8},
  [447] = {.lex_state = 0, .external_lex_state = 8},
  [448] = {.lex_state = 0, .external_lex_state = 8},
  [449] = {.lex_state = 0, .external_lex_state = 8},
  [450] = {.lex_state = 0, .external_lex_state = 8},
  [451] = {.lex_state = 0, .external_lex_state = 8},
  [452] = {.lex_state = 0, .external_lex_state = 8},
  [453] = {.lex_state = 0, .external_lex_state = 8},
  [454] = {.lex_state = 0, .external_lex_state = 9},
  [455] = {.lex_state = 0, .external_lex_state = 8},
  [456] = {.lex_state = 0, .external_lex_state = 8},
  [457] = {.lex_state = 0, .external_lex_state = 8},
  [458] = {.lex_state = 0, .external_lex_state = 9},
  [459] = {.lex_state = 0, .external_lex_state = 8},
  [460] = {.lex_state = 0, .external_lex_state = 8},
  [461] = {.lex_state = 0, .external_lex_state = 8},
  [462] = {.lex_state = 0, .external_lex_state = 9},
  [463] = {.lex_state = 0, .external_lex_state = 9},
  [464] = {.lex_state = 0, .external_lex_state = 8},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 9},
  [468] = {.lex_state = 0, .external_lex_state = 9},
  [469] = {.lex_state = 0, .external_lex_state = 9},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0, .external_lex_state = 9},
  [474] = {.lex_state = 0, .external_lex_state = 9},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0, .external_lex_state = 9},
  [478] = {.lex_state = 0, .external_lex_state = 9},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0, .external_lex_state = 9},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0, .external_lex_state = 9},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0, .external_lex_state = 9},
  [486] = {.lex_state = 0, .external_lex_state = 9},
  [487] = {.lex_state = 0, .external_lex_state = 9},
  [488] = {.lex_state = 0, .external_lex_state = 9},
  [489] = {.lex_state = 0, .external_lex_state = 9},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 0, .external_lex_state = 9},
  [493] = {.lex_state = 0, .external_lex_state = 6},
  [494] = {.lex_state = 0, .external_lex_state = 5},
  [495] = {.lex_state = 0, .external_lex_state = 7},
  [496] = {.lex_state = 0, .external_lex_state = 7},
  [497] = {.lex_state = 41, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 7},
  [499] = {.lex_state = 0, .external_lex_state = 7},
  [500] = {.lex_state = 0, .external_lex_state = 7},
  [501] = {.lex_state = 41, .external_lex_state = 3},
  [502] = {.lex_state = 0, .external_lex_state = 7},
  [503] = {.lex_state = 0, .external_lex_state = 7},
  [504] = {.lex_state = 0, .external_lex_state = 7},
  [505] = {.lex_state = 0, .external_lex_state = 10},
  [506] = {.lex_state = 41},
  [507] = {.lex_state = 0, .external_lex_state = 7},
  [508] = {.lex_state = 0, .external_lex_state = 5},
  [509] = {.lex_state = 0, .external_lex_state = 7},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0, .external_lex_state = 7},
  [512] = {.lex_state = 0, .external_lex_state = 6},
  [513] = {.lex_state = 41},
  [514] = {.lex_state = 0, .external_lex_state = 7},
  [515] = {.lex_state = 41, .external_lex_state = 3},
  [516] = {.lex_state = 0, .external_lex_state = 10},
  [517] = {.lex_state = 0, .external_lex_state = 7},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0, .external_lex_state = 6},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 3},
  [522] = {.lex_state = 41},
  [523] = {.lex_state = 0, .external_lex_state = 7},
  [524] = {.lex_state = 0, .external_lex_state = 7},
  [525] = {.lex_state = 0, .external_lex_state = 6},
  [526] = {.lex_state = 0, .external_lex_state = 5},
  [527] = {.lex_state = 0, .external_lex_state = 6},
  [528] = {.lex_state = 0, .external_lex_state = 7},
  [529] = {.lex_state = 0, .external_lex_state = 7},
  [530] = {.lex_state = 0, .external_lex_state = 7},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0, .external_lex_state = 7},
  [533] = {.lex_state = 41},
  [534] = {.lex_state = 0, .external_lex_state = 5},
  [535] = {.lex_state = 0, .external_lex_state = 5},
  [536] = {.lex_state = 0, .external_lex_state = 5},
  [537] = {.lex_state = 0, .external_lex_state = 7},
  [538] = {.lex_state = 0, .external_lex_state = 6},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0, .external_lex_state = 7},
  [542] = {.lex_state = 0, .external_lex_state = 7},
  [543] = {.lex_state = 0, .external_lex_state = 7},
  [544] = {.lex_state = 0, .external_lex_state = 5},
  [545] = {.lex_state = 0, .external_lex_state = 5},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0, .external_lex_state = 7},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0, .external_lex_state = 7},
  [550] = {.lex_state = 0, .external_lex_state = 6},
  [551] = {.lex_state = 0, .external_lex_state = 6},
  [552] = {.lex_state = 0, .external_lex_state = 7},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 0, .external_lex_state = 7},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0, .external_lex_state = 6},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 41},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 0, .external_lex_state = 6},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0, .external_lex_state = 6},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 6},
  [572] = {.lex_state = 0, .external_lex_state = 6},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 6},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0, .external_lex_state = 6},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0, .external_lex_state = 6},
  [586] = {.lex_state = 0, .external_lex_state = 6},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 41},
  [591] = {.lex_state = 0, .external_lex_state = 6},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 41},
  [603] = {.lex_state = 0, .external_lex_state = 6},
  [604] = {.lex_state = 0, .external_lex_state = 6},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 1},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0, .external_lex_state = 6},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0, .external_lex_state = 6},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 41},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 41},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 41},
  [633] = {.lex_state = 0, .external_lex_state = 6},
  [634] = {.lex_state = 0, .external_lex_state = 6},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0, .external_lex_state = 6},
  [637] = {.lex_state = 0, .external_lex_state = 6},
  [638] = {.lex_state = 0, .external_lex_state = 6},
  [639] = {.lex_state = 0, .external_lex_state = 6},
  [640] = {.lex_state = 0, .external_lex_state = 6},
  [641] = {.lex_state = 0, .external_lex_state = 6},
  [642] = {.lex_state = 0, .external_lex_state = 5},
  [643] = {.lex_state = 0, .external_lex_state = 6},
  [644] = {.lex_state = 41},
  [645] = {.lex_state = 41},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0, .external_lex_state = 11},
  [648] = {.lex_state = 0, .external_lex_state = 5},
  [649] = {.lex_state = 0, .external_lex_state = 5},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 41},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 41},
  [656] = {.lex_state = 41},
  [657] = {.lex_state = 0, .external_lex_state = 6},
  [658] = {.lex_state = 0, .external_lex_state = 6},
  [659] = {.lex_state = 0, .external_lex_state = 6},
  [660] = {.lex_state = 0, .external_lex_state = 6},
  [661] = {.lex_state = 0, .external_lex_state = 5},
  [662] = {.lex_state = 0, .external_lex_state = 6},
  [663] = {.lex_state = 0, .external_lex_state = 5},
  [664] = {.lex_state = 0, .external_lex_state = 6},
  [665] = {.lex_state = 0, .external_lex_state = 11},
  [666] = {.lex_state = 0, .external_lex_state = 11},
  [667] = {.lex_state = 0, .external_lex_state = 11},
  [668] = {.lex_state = 0, .external_lex_state = 5},
  [669] = {.lex_state = 0, .external_lex_state = 11},
  [670] = {.lex_state = 0, .external_lex_state = 11},
  [671] = {.lex_state = 0, .external_lex_state = 6},
  [672] = {.lex_state = 0, .external_lex_state = 12},
  [673] = {.lex_state = 0, .external_lex_state = 6},
  [674] = {.lex_state = 0, .external_lex_state = 6},
  [675] = {.lex_state = 0, .external_lex_state = 6},
  [676] = {.lex_state = 0, .external_lex_state = 6},
  [677] = {.lex_state = 0},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_template_directive_start = 5,
  ts_external_token_template_directive_end = 6,
  ts_external_token_heredoc_identifier = 7,
  ts_external_token__shim = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_template_directive_start] = sym_template_directive_start,
  [ts_external_token_template_directive_end] = sym_template_directive_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
  [ts_external_token__shim] = sym__shim,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_template_directive_end] = true,
    [ts_external_token_heredoc_identifier] = true,
    [ts_external_token__shim] = true,
  },
  [2] = {
    [ts_external_token__shim] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [4] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [5] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token_template_directive_end] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [8] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [9] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_directive_start] = true,
  },
  [10] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [11] = {
    [ts_external_token_heredoc_identifier] = true,
  },
  [12] = {
    [ts_external_token_quoted_template_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_template_directive_start] = ACTIONS(1),
    [sym_template_directive_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
    [sym__shim] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(650),
    [sym_body] = STATE(677),
    [sym_attribute] = STATE(408),
    [sym_block] = STATE(408),
    [aux_sym_body_repeat1] = STATE(408),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__shim] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(45), 1,
      sym_for_intro,
    STATE(326), 1,
      sym_object_end,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(574), 1,
      sym__object_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [107] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(51), 1,
      sym_for_intro,
    STATE(169), 1,
      sym_object_end,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(582), 1,
      sym__object_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [214] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(82), 1,
      sym_for_intro,
    STATE(283), 1,
      sym_object_end,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(559), 1,
      sym__object_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [321] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(87), 1,
      sym_for_intro,
    STATE(275), 1,
      sym_object_end,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(601), 1,
      sym__object_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [428] = 30,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(77), 1,
      sym_for_intro,
    STATE(207), 1,
      sym_object_end,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(617), 1,
      sym__object_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [535] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(71), 1,
      sym_for_intro,
    STATE(190), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_conditional,
    STATE(428), 1,
      sym_expression,
    STATE(611), 1,
      sym__tuple_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [639] = 28,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(63), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(69), 1,
      sym_null_lit,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LT_LT,
    ACTIONS(84), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(87), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym__comma,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(66), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [741] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(23), 1,
      sym__comma,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(10), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [843] = 28,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(21), 1,
      sym__comma,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [945] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(70), 1,
      sym_for_intro,
    STATE(162), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_conditional,
    STATE(428), 1,
      sym_expression,
    STATE(581), 1,
      sym__tuple_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1049] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(72), 1,
      sym_for_intro,
    STATE(318), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_conditional,
    STATE(428), 1,
      sym_expression,
    STATE(557), 1,
      sym__tuple_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1153] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(58), 1,
      sym_for_intro,
    STATE(305), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_conditional,
    STATE(428), 1,
      sym_expression,
    STATE(595), 1,
      sym__tuple_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1257] = 29,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(68), 1,
      sym_for_intro,
    STATE(277), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_conditional,
    STATE(428), 1,
      sym_expression,
    STATE(622), 1,
      sym__tuple_elems,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1361] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(273), 1,
      sym__function_call_end,
    STATE(400), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(600), 1,
      sym_function_arguments,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1459] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(191), 1,
      sym__function_call_end,
    STATE(400), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(621), 1,
      sym_function_arguments,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1557] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(289), 1,
      sym__function_call_end,
    STATE(400), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(558), 1,
      sym_function_arguments,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1655] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(332), 1,
      sym__function_call_end,
    STATE(400), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(583), 1,
      sym_function_arguments,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1753] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(142), 1,
      sym__function_call_end,
    STATE(400), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    STATE(594), 1,
      sym_function_arguments,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1851] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(130), 1,
      sym_strip_marker,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(535), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1946] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(348), 1,
      sym_object_elem,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2041] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(138), 1,
      sym_strip_marker,
    ACTIONS(140), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(494), 1,
      sym_expression,
    STATE(508), 1,
      sym_conditional,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2136] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(348), 1,
      sym_object_elem,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2231] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(142), 1,
      sym_strip_marker,
    ACTIONS(144), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(534), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2326] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(146), 1,
      sym_strip_marker,
    ACTIONS(148), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(526), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2421] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(150), 1,
      sym_strip_marker,
    ACTIONS(152), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(544), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2516] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    ACTIONS(154), 1,
      sym_strip_marker,
    ACTIONS(156), 1,
      sym_template_interpolation_end,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(536), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2611] = 9,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 16,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [2671] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(418), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2763] = 13,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(174), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [2831] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(418), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2923] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(348), 1,
      sym_object_elem,
    STATE(400), 1,
      sym_conditional,
    STATE(521), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3015] = 8,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 18,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3073] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(158), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3127] = 18,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(176), 1,
      anon_sym_AMP_AMP,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_DOT_STAR,
    ACTIONS(190), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(192), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(174), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(182), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(180), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [3205] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(418), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3297] = 11,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 14,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3361] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(418), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3453] = 12,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(170), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(174), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(158), 12,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3519] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(200), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(198), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [3573] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(569), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3662] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(418), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3751] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(346), 1,
      sym_expression,
    STATE(347), 1,
      sym_conditional,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(35), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3840] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(589), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3929] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(570), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4018] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(525), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4107] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(407), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4196] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(568), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4285] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(561), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4374] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(410), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4463] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(563), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4552] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(599), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4641] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(415), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4730] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(538), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4819] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(620), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4908] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(619), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4997] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(508), 1,
      sym_conditional,
    STATE(545), 1,
      sym_expression,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(215), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5086] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(420), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5175] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(624), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5264] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(345), 1,
      sym_expression,
    STATE(347), 1,
      sym_conditional,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(35), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5353] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(628), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5442] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(629), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5531] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(413), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5620] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(540), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5709] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(592), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5798] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(598), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5887] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(556), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5976] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(421), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6065] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(512), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6154] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(429), 1,
      sym_conditional,
    STATE(434), 1,
      sym_expression,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6243] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6332] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(426), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6421] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(401), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6510] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(613), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6599] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(527), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6688] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(429), 1,
      sym_conditional,
    STATE(431), 1,
      sym_expression,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6777] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(608), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6866] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(616), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6955] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(609), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7044] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(607), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7133] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(493), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7222] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(593), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7311] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(411), 1,
      sym_expression,
    STATE(429), 1,
      sym_conditional,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(182), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7400] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(519), 1,
      sym_expression,
    STATE(550), 1,
      sym_conditional,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7489] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(550), 1,
      sym_conditional,
    STATE(551), 1,
      sym_expression,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(233), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7578] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(438), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7667] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(400), 1,
      sym_conditional,
    STATE(575), 1,
      sym_expression,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7756] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(250), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7810] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(254), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7864] = 7,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(90), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(258), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7918] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(88), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(270), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(268), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [7972] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(168), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(89), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(272), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [8026] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8109] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8192] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(30), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8275] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(231), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8358] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(220), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8441] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(37), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8524] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(28), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8607] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(228), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8690] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8773] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8856] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(132), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8939] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9022] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9105] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(6), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(666), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(196), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(201), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(208), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(214), 2,
      sym_tuple,
      sym_object,
    STATE(213), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9188] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(227), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9271] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(226), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9354] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(234), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9437] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9520] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(232), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9603] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(216), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9686] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(235), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9769] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(224), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(228), 1,
      sym_null_lit,
    ACTIONS(232), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(12), 1,
      sym_tuple_start,
    STATE(665), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(288), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(294), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(304), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(306), 2,
      sym_tuple,
      sym_object,
    STATE(308), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(229), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9852] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(225), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [9935] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(176), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10018] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10101] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(122), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(126), 1,
      sym_null_lit,
    ACTIONS(132), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(13), 1,
      sym_tuple_start,
    STATE(647), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(128), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(327), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(328), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(329), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(330), 2,
      sym_tuple,
      sym_object,
    STATE(333), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(222), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10184] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10267] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(33), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10350] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(40), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10433] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(180), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10516] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(175), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10599] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(208), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(212), 1,
      sym_null_lit,
    ACTIONS(216), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(670), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(144), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(145), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(146), 2,
      sym_tuple,
      sym_object,
    STATE(164), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(148), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(39), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10682] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(179), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10765] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(178), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10848] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(244), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(14), 1,
      sym_tuple_start,
    STATE(667), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(255), 2,
      sym_tuple,
      sym_object,
    STATE(256), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(257), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(258), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(249), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [10931] = 18,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_DOT_STAR,
    ACTIONS(282), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
    ACTIONS(298), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(180), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [11005] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(200), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11055] = 13,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(296), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [11119] = 12,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(294), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 14,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11181] = 11,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 16,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11241] = 9,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 18,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11297] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11347] = 8,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11401] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(139), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(256), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(254), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11451] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(138), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(270), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11501] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(139), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11551] = 7,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(139), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(260), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(258), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11601] = 7,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(202), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(136), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(274), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11651] = 5,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(306), 19,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11697] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(312), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(316), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11779] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(320), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11820] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(324), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11861] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(328), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11902] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(332), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11943] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(336), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [11984] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(340), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(344), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12066] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(348), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12107] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(352), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12148] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(356), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12189] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(360), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12230] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(364), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(368), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12312] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(372), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(376), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12394] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(380), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(384), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12476] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(388), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12517] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(392), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12558] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(396), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12599] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(400), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12640] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(404), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12681] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(408), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12722] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(412), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12763] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(416), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12804] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(420), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12845] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(424), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12886] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(428), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12927] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(432), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [12968] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 12,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(436), 20,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [13009] = 5,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13052] = 12,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13108] = 13,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [13166] = 11,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13220] = 9,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13270] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13314] = 8,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13362] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(200), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13406] = 17,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 1,
      anon_sym_DOT_STAR,
    ACTIONS(462), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(442), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(452), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(279), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(251), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(180), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13472] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13509] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13546] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13583] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13620] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13657] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13694] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13768] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13805] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13842] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13916] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14027] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14064] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14138] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14175] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14212] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14249] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14286] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14323] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14360] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14434] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14471] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14508] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14545] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14582] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14619] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 22,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14656] = 17,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      anon_sym_DOT_STAR,
    ACTIONS(472), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(486), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(180), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [14720] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14762] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(218), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14806] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(230), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14850] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(230), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14894] = 13,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(502), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(490), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 6,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [14950] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(219), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14994] = 13,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(486), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15050] = 11,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(490), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15102] = 12,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(484), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15156] = 11,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(480), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(482), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15208] = 9,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 11,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15256] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15298] = 8,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15344] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(200), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15386] = 7,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(507), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(230), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15430] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(301), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(312), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(200), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15472] = 9,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 11,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15520] = 17,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(502), 1,
      anon_sym_AMP_AMP,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_DOT_STAR,
    ACTIONS(516), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(518), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(180), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [15584] = 12,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(160), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(490), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(498), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(158), 7,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15638] = 8,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(341), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(286), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(160), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 13,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15684] = 7,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(243), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15726] = 7,
    ACTIONS(520), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(237), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15768] = 7,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(252), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(237), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(250), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15810] = 7,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(237), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15852] = 7,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(238), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15894] = 7,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(270), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(236), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(268), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15936] = 7,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(244), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [15978] = 7,
    ACTIONS(526), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(260), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(243), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16020] = 7,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(311), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(256), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(243), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(254), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16062] = 7,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(284), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(274), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(239), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(272), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16104] = 5,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16172] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16234] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16265] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16327] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16358] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16389] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16420] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16451] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16513] = 5,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16548] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16579] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16765] = 5,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [16800] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16862] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16893] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16924] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16955] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17048] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17079] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17110] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17172] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [17203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17232] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17261] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17290] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17319] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17348] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17377] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17406] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17464] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17493] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17522] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17551] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17609] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17667] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17696] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17725] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17754] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17841] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17870] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17899] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17957] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [17986] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18015] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18102] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(414), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18131] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18160] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18189] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18218] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18247] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(406), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18276] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18305] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18334] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18363] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18392] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18450] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18479] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(438), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18508] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(422), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18537] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18566] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(402), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18624] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18653] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18682] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18711] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18740] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18798] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18856] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18885] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18914] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(398), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18943] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(426), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [18972] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym_template_directive_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19030] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [19059] = 4,
    ACTIONS(542), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(538), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19087] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(544), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(182), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(180), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(52), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19164] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(550), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19189] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(554), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19214] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(562), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(398), 1,
      sym_template_else_intro,
    STATE(459), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(358), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19253] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(564), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(381), 1,
      sym_template_else_intro,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(502), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(357), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19292] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(566), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(391), 1,
      sym_template_else_intro,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(468), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(356), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(570), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(568), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19354] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(574), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(572), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [19377] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(566), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(367), 1,
      sym_template_else_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(478), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19416] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(564), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(383), 1,
      sym_template_else_intro,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(498), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19455] = 11,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(562), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(392), 1,
      sym_template_else_intro,
    STATE(455), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19494] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(576), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(499), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19530] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(584), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19566] = 11,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(586), 1,
      sym_quoted_template_end,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(454), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(363), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [19604] = 10,
    ACTIONS(592), 1,
      sym__template_literal_chunk,
    ACTIONS(595), 1,
      sym_template_interpolation_start,
    ACTIONS(598), 1,
      sym_template_directive_start,
    ACTIONS(601), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19640] = 10,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(603), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19676] = 10,
    ACTIONS(598), 1,
      sym_template_directive_start,
    ACTIONS(601), 1,
      sym_quoted_template_end,
    ACTIONS(605), 1,
      sym__template_literal_chunk,
    ACTIONS(608), 1,
      sym_template_interpolation_start,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19712] = 10,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(611), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19748] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(613), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(456), 1,
      sym_template_for_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19784] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(615), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(492), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(370), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19820] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(615), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(492), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19856] = 11,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(617), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(486), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(372), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [19894] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(615), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(485), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [19930] = 11,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(619), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(469), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(382), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [19968] = 10,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(621), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20004] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(576), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(503), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(359), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20040] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(623), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(380), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20076] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(625), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(360), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20112] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(446), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20148] = 11,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(629), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(477), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(365), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20186] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(631), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(394), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20222] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(633), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(474), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20258] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(635), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20294] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(637), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(498), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(385), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20330] = 10,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(639), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20366] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(637), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(554), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(395), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20402] = 11,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(641), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    STATE(462), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(389), 3,
      aux_sym__template,
      sym_template_interpolation,
      sym_template_directive,
  [20440] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(637), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(554), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20476] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(633), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(467), 1,
      sym_template_for_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(379), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20512] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(450), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20548] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(643), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(390), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20584] = 10,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(588), 1,
      sym__template_literal_chunk,
    ACTIONS(590), 1,
      sym_template_interpolation_start,
    ACTIONS(645), 1,
      sym_quoted_template_end,
    STATE(353), 1,
      sym_template_if_intro,
    STATE(386), 1,
      sym_template_for_start,
    STATE(432), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(458), 2,
      sym_template_for,
      sym_template_if,
    STATE(364), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20620] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(647), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20656] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(615), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(478), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(368), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20692] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(450), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(376), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20728] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(613), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(460), 1,
      sym_template_for_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(366), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20764] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(649), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20800] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(637), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    STATE(542), 1,
      sym_template_if_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20836] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(651), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(362), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20872] = 10,
    ACTIONS(578), 1,
      sym__template_literal_chunk,
    ACTIONS(580), 1,
      sym_template_interpolation_start,
    ACTIONS(582), 1,
      sym_template_directive_start,
    ACTIONS(653), 1,
      sym_heredoc_identifier,
    STATE(351), 1,
      sym_template_if_intro,
    STATE(393), 1,
      sym_template_for_start,
    STATE(430), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(464), 2,
      sym_template_for,
      sym_template_if,
    STATE(396), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20908] = 10,
    ACTIONS(558), 1,
      sym__template_literal_chunk,
    ACTIONS(560), 1,
      sym_template_interpolation_start,
    ACTIONS(627), 1,
      sym_template_directive_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(455), 1,
      sym_template_if_end,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(387), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20944] = 9,
    ACTIONS(598), 1,
      sym_template_directive_start,
    ACTIONS(655), 1,
      sym__template_literal_chunk,
    ACTIONS(658), 1,
      sym_template_interpolation_start,
    STATE(352), 1,
      sym_template_if_intro,
    STATE(373), 1,
      sym_template_for_start,
    STATE(466), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(507), 2,
      sym_template_for,
      sym_template_if,
    STATE(399), 4,
      aux_sym__template,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
  [20977] = 3,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [20997] = 3,
    ACTIONS(546), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [21017] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym__shim,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(522), 1,
      sym_block_end,
    STATE(623), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21042] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym__shim,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(513), 1,
      sym_block_end,
    STATE(577), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(408), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21067] = 7,
    ACTIONS(663), 1,
      anon_sym_EQ,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(669), 1,
      sym_quoted_template_start,
    STATE(403), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(414), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21091] = 5,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym__comma,
    STATE(405), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(671), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21110] = 4,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(676), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(406), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21127] = 7,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(683), 1,
      sym_ellipsis,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(211), 1,
      sym_object_end,
    STATE(627), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21150] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(406), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21167] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(406), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21184] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    ACTIONS(691), 1,
      sym_ellipsis,
    STATE(248), 1,
      sym_object_end,
    STATE(579), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21207] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      sym_ellipsis,
    STATE(317), 1,
      sym_object_end,
    STATE(614), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21230] = 7,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      sym_ellipsis,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    STATE(36), 1,
      sym__comma,
    STATE(427), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21253] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      sym_ellipsis,
    STATE(282), 1,
      sym_object_end,
    STATE(606), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21276] = 6,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      sym_quoted_template_start,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(402), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(423), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21297] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      sym_ellipsis,
    STATE(165), 1,
      sym_object_end,
    STATE(555), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21320] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(409), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [21337] = 6,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(713), 1,
      sym_strip_marker,
    ACTIONS(715), 1,
      anon_sym_else,
    ACTIONS(717), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21357] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(671), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [21371] = 6,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(199), 1,
      sym_tuple_end,
    STATE(580), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21391] = 6,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(302), 1,
      sym_tuple_end,
    STATE(587), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21411] = 6,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(247), 1,
      sym_tuple_end,
    STATE(565), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21431] = 4,
    ACTIONS(719), 1,
      sym__template_literal_chunk,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21447] = 5,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      sym_identifier,
    ACTIONS(729), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(423), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [21465] = 6,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(715), 1,
      anon_sym_else,
    ACTIONS(732), 1,
      sym_strip_marker,
    ACTIONS(734), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21485] = 4,
    ACTIONS(736), 1,
      sym__template_literal_chunk,
    STATE(425), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21501] = 6,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(323), 1,
      sym_tuple_end,
    STATE(631), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21521] = 6,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      sym_ellipsis,
    STATE(31), 1,
      sym__comma,
    STATE(405), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21541] = 6,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym__comma,
    STATE(471), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21561] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21573] = 4,
    ACTIONS(747), 1,
      sym__template_literal_chunk,
    STATE(422), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(749), 3,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21589] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [21601] = 4,
    ACTIONS(751), 1,
      sym__template_literal_chunk,
    STATE(425), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(749), 3,
      sym_quoted_template_end,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21617] = 6,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(715), 1,
      anon_sym_else,
    ACTIONS(753), 1,
      sym_strip_marker,
    ACTIONS(755), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21637] = 6,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(681), 1,
      anon_sym_if,
    ACTIONS(685), 1,
      anon_sym_QMARK,
    STATE(157), 1,
      sym_tuple_end,
    STATE(597), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21657] = 4,
    ACTIONS(757), 1,
      sym__template_literal_chunk,
    STATE(435), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(722), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21672] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21683] = 5,
    ACTIONS(762), 1,
      sym_quoted_template_end,
    ACTIONS(764), 1,
      sym__template_literal_chunk,
    STATE(505), 1,
      aux_sym_template_literal_repeat1,
    STATE(672), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21700] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(766), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [21713] = 5,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(772), 1,
      anon_sym_else,
    ACTIONS(774), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(776), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21741] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(778), 1,
      sym_strip_marker,
    ACTIONS(780), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21758] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21769] = 5,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(772), 1,
      anon_sym_else,
    ACTIONS(784), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21786] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(786), 1,
      sym_strip_marker,
    ACTIONS(788), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21803] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    STATE(265), 1,
      sym_object_end,
    STATE(573), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [21820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21831] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21842] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(794), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21864] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(796), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21875] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21886] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(800), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21908] = 3,
    ACTIONS(804), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(806), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21921] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(810), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21943] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(812), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(814), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [21965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21976] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21987] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [21998] = 3,
    ACTIONS(822), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(806), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22011] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(814), 4,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
      sym_heredoc_identifier,
  [22033] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(824), 1,
      sym_strip_marker,
    ACTIONS(826), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22050] = 4,
    ACTIONS(828), 1,
      sym__template_literal_chunk,
    STATE(435), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(749), 2,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22087] = 3,
    ACTIONS(830), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(806), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22100] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    STATE(315), 1,
      sym_object_end,
    STATE(605), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22117] = 5,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym__comma,
    STATE(405), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22134] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(734), 1,
      anon_sym_endif,
    ACTIONS(834), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22151] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(812), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(810), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22173] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    STATE(320), 1,
      sym_object_end,
    STATE(626), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22190] = 5,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(772), 1,
      anon_sym_else,
    ACTIONS(836), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22207] = 3,
    ACTIONS(838), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(806), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22220] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22231] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(717), 1,
      anon_sym_endif,
    ACTIONS(840), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22248] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22259] = 5,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(755), 1,
      anon_sym_endif,
    ACTIONS(842), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22276] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(794), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22287] = 5,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    STATE(166), 1,
      sym_object_end,
    STATE(588), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22304] = 5,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_if,
    STATE(194), 1,
      sym_object_end,
    STATE(584), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22321] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22332] = 3,
    ACTIONS(844), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(806), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22345] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(776), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22367] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22378] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22389] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(800), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22400] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(796), 4,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22411] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(848), 1,
      sym_strip_marker,
    ACTIONS(850), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22425] = 4,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(854), 1,
      sym_strip_marker,
    ACTIONS(856), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22439] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(800), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22449] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(802), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(858), 3,
      sym__shim,
      anon_sym_RBRACE,
      sym_identifier,
  [22469] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(808), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22479] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(810), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22489] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(812), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22499] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(436), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22509] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(816), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22519] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(818), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22529] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(820), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22539] = 4,
    ACTIONS(749), 1,
      sym_quoted_template_end,
    ACTIONS(860), 1,
      sym__template_literal_chunk,
    STATE(516), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22553] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(862), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22563] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(814), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22573] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(864), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22593] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(866), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22607] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(868), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22617] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(870), 1,
      sym_strip_marker,
    ACTIONS(872), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22631] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(874), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(876), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22651] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [22661] = 4,
    ACTIONS(722), 1,
      sym_quoted_template_end,
    ACTIONS(878), 1,
      sym__template_literal_chunk,
    STATE(516), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(881), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22685] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(883), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22699] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(885), 1,
      sym_strip_marker,
    ACTIONS(887), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22713] = 4,
    ACTIONS(709), 1,
      anon_sym_for,
    ACTIONS(711), 1,
      anon_sym_if,
    ACTIONS(889), 1,
      sym_strip_marker,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22727] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(891), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [22739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(893), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(895), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22759] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(897), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22769] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(899), 1,
      sym_strip_marker,
    ACTIONS(901), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22783] = 4,
    ACTIONS(130), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [22807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(903), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(776), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(782), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22837] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(774), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(905), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22861] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(907), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [22871] = 4,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(909), 1,
      sym_strip_marker,
    ACTIONS(911), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22885] = 4,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(913), 1,
      sym_strip_marker,
    ACTIONS(915), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22899] = 4,
    ACTIONS(142), 1,
      sym_strip_marker,
    ACTIONS(144), 1,
      sym_template_interpolation_end,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22913] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(917), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22923] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(919), 1,
      sym_strip_marker,
    ACTIONS(921), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22937] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(923), 1,
      anon_sym_endfor,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [22951] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(925), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [22963] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(798), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22973] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(790), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22983] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(792), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [22993] = 4,
    ACTIONS(138), 1,
      sym_strip_marker,
    ACTIONS(140), 1,
      sym_template_interpolation_end,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23007] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(544), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23017] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(836), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23031] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(794), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23041] = 4,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(784), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(927), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 3,
      sym_template_directive_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [23075] = 4,
    ACTIONS(846), 1,
      anon_sym_QMARK,
    ACTIONS(929), 1,
      sym_strip_marker,
    ACTIONS(931), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23089] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(760), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23099] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(933), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23109] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(796), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_template_directive_start,
  [23119] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23130] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23141] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23152] = 3,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23163] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23174] = 3,
    ACTIONS(939), 1,
      sym_strip_marker,
    ACTIONS(941), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23185] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23196] = 3,
    ACTIONS(945), 1,
      sym_identifier,
    ACTIONS(947), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23207] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(949), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23218] = 3,
    ACTIONS(951), 1,
      sym_strip_marker,
    ACTIONS(953), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23229] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23240] = 3,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23251] = 3,
    ACTIONS(959), 1,
      sym_strip_marker,
    ACTIONS(961), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23262] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(963), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23273] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(965), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23284] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(967), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23295] = 3,
    ACTIONS(969), 1,
      sym_strip_marker,
    ACTIONS(971), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23306] = 3,
    ACTIONS(973), 1,
      sym_strip_marker,
    ACTIONS(975), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23317] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23328] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23339] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(977), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23350] = 3,
    ACTIONS(979), 1,
      sym_strip_marker,
    ACTIONS(981), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23361] = 3,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(522), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23372] = 3,
    ACTIONS(983), 1,
      sym_strip_marker,
    ACTIONS(985), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23383] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23394] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23405] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23416] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23427] = 3,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23438] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23449] = 3,
    ACTIONS(989), 1,
      sym_strip_marker,
    ACTIONS(991), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23460] = 3,
    ACTIONS(993), 1,
      sym_strip_marker,
    ACTIONS(995), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23471] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(309), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23482] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23493] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23504] = 3,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(1001), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23515] = 3,
    ACTIONS(1003), 1,
      sym_strip_marker,
    ACTIONS(1005), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23526] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1007), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23537] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1009), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23548] = 3,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23559] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(293), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23570] = 3,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23581] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23592] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23603] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23614] = 3,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23625] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23636] = 3,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(1025), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23647] = 3,
    ACTIONS(1027), 1,
      sym_strip_marker,
    ACTIONS(1029), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23658] = 3,
    ACTIONS(1031), 1,
      sym_strip_marker,
    ACTIONS(1033), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23669] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23680] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23691] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1035), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23702] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1037), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23713] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23724] = 3,
    ACTIONS(1041), 1,
      sym_strip_marker,
    ACTIONS(1043), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23735] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23746] = 3,
    ACTIONS(1045), 1,
      sym_strip_marker,
    ACTIONS(1047), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23757] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23768] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23779] = 3,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(1053), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23790] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23801] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23812] = 3,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23823] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23834] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1063), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23845] = 3,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23856] = 3,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23867] = 3,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(533), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23878] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23889] = 3,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(1071), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23900] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23911] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23922] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1073), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23933] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23944] = 3,
    ACTIONS(768), 1,
      anon_sym_for,
    ACTIONS(770), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23955] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23966] = 2,
    ACTIONS(1077), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23974] = 2,
    ACTIONS(1079), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23982] = 2,
    ACTIONS(1081), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23990] = 2,
    ACTIONS(1083), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [23998] = 2,
    ACTIONS(1085), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24006] = 2,
    ACTIONS(1087), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24014] = 2,
    ACTIONS(1089), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24022] = 2,
    ACTIONS(1091), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24030] = 2,
    ACTIONS(1047), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24038] = 2,
    ACTIONS(1043), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24046] = 2,
    ACTIONS(1093), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24054] = 2,
    ACTIONS(1095), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24062] = 2,
    ACTIONS(1097), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24070] = 2,
    ACTIONS(1099), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24078] = 2,
    ACTIONS(1101), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24086] = 2,
    ACTIONS(1103), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24094] = 2,
    ACTIONS(911), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24102] = 2,
    ACTIONS(915), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24110] = 2,
    ACTIONS(1105), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24118] = 2,
    ACTIONS(1107), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24126] = 2,
    ACTIONS(1109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24134] = 2,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24142] = 2,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24150] = 2,
    ACTIONS(1111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24158] = 2,
    ACTIONS(1113), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24166] = 2,
    ACTIONS(887), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24174] = 2,
    ACTIONS(1115), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24182] = 2,
    ACTIONS(985), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24190] = 2,
    ACTIONS(981), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24198] = 2,
    ACTIONS(1117), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24206] = 2,
    ACTIONS(872), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24214] = 2,
    ACTIONS(1119), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24222] = 2,
    ACTIONS(1121), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24230] = 2,
    ACTIONS(1123), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24238] = 2,
    ACTIONS(1125), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24246] = 2,
    ACTIONS(1127), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24254] = 2,
    ACTIONS(856), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24262] = 2,
    ACTIONS(1129), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24270] = 2,
    ACTIONS(1131), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24278] = 2,
    ACTIONS(850), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24286] = 2,
    ACTIONS(1133), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24294] = 2,
    ACTIONS(953), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24302] = 2,
    ACTIONS(961), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24310] = 2,
    ACTIONS(941), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24318] = 2,
    ACTIONS(901), 1,
      sym_template_directive_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [24326] = 2,
    ACTIONS(1135), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 214,
  [SMALL_STATE(5)] = 321,
  [SMALL_STATE(6)] = 428,
  [SMALL_STATE(7)] = 535,
  [SMALL_STATE(8)] = 639,
  [SMALL_STATE(9)] = 741,
  [SMALL_STATE(10)] = 843,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1049,
  [SMALL_STATE(13)] = 1153,
  [SMALL_STATE(14)] = 1257,
  [SMALL_STATE(15)] = 1361,
  [SMALL_STATE(16)] = 1459,
  [SMALL_STATE(17)] = 1557,
  [SMALL_STATE(18)] = 1655,
  [SMALL_STATE(19)] = 1753,
  [SMALL_STATE(20)] = 1851,
  [SMALL_STATE(21)] = 1946,
  [SMALL_STATE(22)] = 2041,
  [SMALL_STATE(23)] = 2136,
  [SMALL_STATE(24)] = 2231,
  [SMALL_STATE(25)] = 2326,
  [SMALL_STATE(26)] = 2421,
  [SMALL_STATE(27)] = 2516,
  [SMALL_STATE(28)] = 2611,
  [SMALL_STATE(29)] = 2671,
  [SMALL_STATE(30)] = 2763,
  [SMALL_STATE(31)] = 2831,
  [SMALL_STATE(32)] = 2923,
  [SMALL_STATE(33)] = 3015,
  [SMALL_STATE(34)] = 3073,
  [SMALL_STATE(35)] = 3127,
  [SMALL_STATE(36)] = 3205,
  [SMALL_STATE(37)] = 3297,
  [SMALL_STATE(38)] = 3361,
  [SMALL_STATE(39)] = 3453,
  [SMALL_STATE(40)] = 3519,
  [SMALL_STATE(41)] = 3573,
  [SMALL_STATE(42)] = 3662,
  [SMALL_STATE(43)] = 3751,
  [SMALL_STATE(44)] = 3840,
  [SMALL_STATE(45)] = 3929,
  [SMALL_STATE(46)] = 4018,
  [SMALL_STATE(47)] = 4107,
  [SMALL_STATE(48)] = 4196,
  [SMALL_STATE(49)] = 4285,
  [SMALL_STATE(50)] = 4374,
  [SMALL_STATE(51)] = 4463,
  [SMALL_STATE(52)] = 4552,
  [SMALL_STATE(53)] = 4641,
  [SMALL_STATE(54)] = 4730,
  [SMALL_STATE(55)] = 4819,
  [SMALL_STATE(56)] = 4908,
  [SMALL_STATE(57)] = 4997,
  [SMALL_STATE(58)] = 5086,
  [SMALL_STATE(59)] = 5175,
  [SMALL_STATE(60)] = 5264,
  [SMALL_STATE(61)] = 5353,
  [SMALL_STATE(62)] = 5442,
  [SMALL_STATE(63)] = 5531,
  [SMALL_STATE(64)] = 5620,
  [SMALL_STATE(65)] = 5709,
  [SMALL_STATE(66)] = 5798,
  [SMALL_STATE(67)] = 5887,
  [SMALL_STATE(68)] = 5976,
  [SMALL_STATE(69)] = 6065,
  [SMALL_STATE(70)] = 6154,
  [SMALL_STATE(71)] = 6243,
  [SMALL_STATE(72)] = 6332,
  [SMALL_STATE(73)] = 6421,
  [SMALL_STATE(74)] = 6510,
  [SMALL_STATE(75)] = 6599,
  [SMALL_STATE(76)] = 6688,
  [SMALL_STATE(77)] = 6777,
  [SMALL_STATE(78)] = 6866,
  [SMALL_STATE(79)] = 6955,
  [SMALL_STATE(80)] = 7044,
  [SMALL_STATE(81)] = 7133,
  [SMALL_STATE(82)] = 7222,
  [SMALL_STATE(83)] = 7311,
  [SMALL_STATE(84)] = 7400,
  [SMALL_STATE(85)] = 7489,
  [SMALL_STATE(86)] = 7578,
  [SMALL_STATE(87)] = 7667,
  [SMALL_STATE(88)] = 7756,
  [SMALL_STATE(89)] = 7810,
  [SMALL_STATE(90)] = 7864,
  [SMALL_STATE(91)] = 7918,
  [SMALL_STATE(92)] = 7972,
  [SMALL_STATE(93)] = 8026,
  [SMALL_STATE(94)] = 8109,
  [SMALL_STATE(95)] = 8192,
  [SMALL_STATE(96)] = 8275,
  [SMALL_STATE(97)] = 8358,
  [SMALL_STATE(98)] = 8441,
  [SMALL_STATE(99)] = 8524,
  [SMALL_STATE(100)] = 8607,
  [SMALL_STATE(101)] = 8690,
  [SMALL_STATE(102)] = 8773,
  [SMALL_STATE(103)] = 8856,
  [SMALL_STATE(104)] = 8939,
  [SMALL_STATE(105)] = 9022,
  [SMALL_STATE(106)] = 9105,
  [SMALL_STATE(107)] = 9188,
  [SMALL_STATE(108)] = 9271,
  [SMALL_STATE(109)] = 9354,
  [SMALL_STATE(110)] = 9437,
  [SMALL_STATE(111)] = 9520,
  [SMALL_STATE(112)] = 9603,
  [SMALL_STATE(113)] = 9686,
  [SMALL_STATE(114)] = 9769,
  [SMALL_STATE(115)] = 9852,
  [SMALL_STATE(116)] = 9935,
  [SMALL_STATE(117)] = 10018,
  [SMALL_STATE(118)] = 10101,
  [SMALL_STATE(119)] = 10184,
  [SMALL_STATE(120)] = 10267,
  [SMALL_STATE(121)] = 10350,
  [SMALL_STATE(122)] = 10433,
  [SMALL_STATE(123)] = 10516,
  [SMALL_STATE(124)] = 10599,
  [SMALL_STATE(125)] = 10682,
  [SMALL_STATE(126)] = 10765,
  [SMALL_STATE(127)] = 10848,
  [SMALL_STATE(128)] = 10931,
  [SMALL_STATE(129)] = 11005,
  [SMALL_STATE(130)] = 11055,
  [SMALL_STATE(131)] = 11119,
  [SMALL_STATE(132)] = 11181,
  [SMALL_STATE(133)] = 11241,
  [SMALL_STATE(134)] = 11297,
  [SMALL_STATE(135)] = 11347,
  [SMALL_STATE(136)] = 11401,
  [SMALL_STATE(137)] = 11451,
  [SMALL_STATE(138)] = 11501,
  [SMALL_STATE(139)] = 11551,
  [SMALL_STATE(140)] = 11601,
  [SMALL_STATE(141)] = 11651,
  [SMALL_STATE(142)] = 11697,
  [SMALL_STATE(143)] = 11738,
  [SMALL_STATE(144)] = 11779,
  [SMALL_STATE(145)] = 11820,
  [SMALL_STATE(146)] = 11861,
  [SMALL_STATE(147)] = 11902,
  [SMALL_STATE(148)] = 11943,
  [SMALL_STATE(149)] = 11984,
  [SMALL_STATE(150)] = 12025,
  [SMALL_STATE(151)] = 12066,
  [SMALL_STATE(152)] = 12107,
  [SMALL_STATE(153)] = 12148,
  [SMALL_STATE(154)] = 12189,
  [SMALL_STATE(155)] = 12230,
  [SMALL_STATE(156)] = 12271,
  [SMALL_STATE(157)] = 12312,
  [SMALL_STATE(158)] = 12353,
  [SMALL_STATE(159)] = 12394,
  [SMALL_STATE(160)] = 12435,
  [SMALL_STATE(161)] = 12476,
  [SMALL_STATE(162)] = 12517,
  [SMALL_STATE(163)] = 12558,
  [SMALL_STATE(164)] = 12599,
  [SMALL_STATE(165)] = 12640,
  [SMALL_STATE(166)] = 12681,
  [SMALL_STATE(167)] = 12722,
  [SMALL_STATE(168)] = 12763,
  [SMALL_STATE(169)] = 12804,
  [SMALL_STATE(170)] = 12845,
  [SMALL_STATE(171)] = 12886,
  [SMALL_STATE(172)] = 12927,
  [SMALL_STATE(173)] = 12968,
  [SMALL_STATE(174)] = 13009,
  [SMALL_STATE(175)] = 13052,
  [SMALL_STATE(176)] = 13108,
  [SMALL_STATE(177)] = 13166,
  [SMALL_STATE(178)] = 13220,
  [SMALL_STATE(179)] = 13270,
  [SMALL_STATE(180)] = 13314,
  [SMALL_STATE(181)] = 13362,
  [SMALL_STATE(182)] = 13406,
  [SMALL_STATE(183)] = 13472,
  [SMALL_STATE(184)] = 13509,
  [SMALL_STATE(185)] = 13546,
  [SMALL_STATE(186)] = 13583,
  [SMALL_STATE(187)] = 13620,
  [SMALL_STATE(188)] = 13657,
  [SMALL_STATE(189)] = 13694,
  [SMALL_STATE(190)] = 13731,
  [SMALL_STATE(191)] = 13768,
  [SMALL_STATE(192)] = 13805,
  [SMALL_STATE(193)] = 13842,
  [SMALL_STATE(194)] = 13879,
  [SMALL_STATE(195)] = 13916,
  [SMALL_STATE(196)] = 13953,
  [SMALL_STATE(197)] = 13990,
  [SMALL_STATE(198)] = 14027,
  [SMALL_STATE(199)] = 14064,
  [SMALL_STATE(200)] = 14101,
  [SMALL_STATE(201)] = 14138,
  [SMALL_STATE(202)] = 14175,
  [SMALL_STATE(203)] = 14212,
  [SMALL_STATE(204)] = 14249,
  [SMALL_STATE(205)] = 14286,
  [SMALL_STATE(206)] = 14323,
  [SMALL_STATE(207)] = 14360,
  [SMALL_STATE(208)] = 14397,
  [SMALL_STATE(209)] = 14434,
  [SMALL_STATE(210)] = 14471,
  [SMALL_STATE(211)] = 14508,
  [SMALL_STATE(212)] = 14545,
  [SMALL_STATE(213)] = 14582,
  [SMALL_STATE(214)] = 14619,
  [SMALL_STATE(215)] = 14656,
  [SMALL_STATE(216)] = 14720,
  [SMALL_STATE(217)] = 14762,
  [SMALL_STATE(218)] = 14806,
  [SMALL_STATE(219)] = 14850,
  [SMALL_STATE(220)] = 14894,
  [SMALL_STATE(221)] = 14950,
  [SMALL_STATE(222)] = 14994,
  [SMALL_STATE(223)] = 15050,
  [SMALL_STATE(224)] = 15102,
  [SMALL_STATE(225)] = 15156,
  [SMALL_STATE(226)] = 15208,
  [SMALL_STATE(227)] = 15256,
  [SMALL_STATE(228)] = 15298,
  [SMALL_STATE(229)] = 15344,
  [SMALL_STATE(230)] = 15386,
  [SMALL_STATE(231)] = 15430,
  [SMALL_STATE(232)] = 15472,
  [SMALL_STATE(233)] = 15520,
  [SMALL_STATE(234)] = 15584,
  [SMALL_STATE(235)] = 15638,
  [SMALL_STATE(236)] = 15684,
  [SMALL_STATE(237)] = 15726,
  [SMALL_STATE(238)] = 15768,
  [SMALL_STATE(239)] = 15810,
  [SMALL_STATE(240)] = 15852,
  [SMALL_STATE(241)] = 15894,
  [SMALL_STATE(242)] = 15936,
  [SMALL_STATE(243)] = 15978,
  [SMALL_STATE(244)] = 16020,
  [SMALL_STATE(245)] = 16062,
  [SMALL_STATE(246)] = 16104,
  [SMALL_STATE(247)] = 16141,
  [SMALL_STATE(248)] = 16172,
  [SMALL_STATE(249)] = 16203,
  [SMALL_STATE(250)] = 16234,
  [SMALL_STATE(251)] = 16265,
  [SMALL_STATE(252)] = 16296,
  [SMALL_STATE(253)] = 16327,
  [SMALL_STATE(254)] = 16358,
  [SMALL_STATE(255)] = 16389,
  [SMALL_STATE(256)] = 16420,
  [SMALL_STATE(257)] = 16451,
  [SMALL_STATE(258)] = 16482,
  [SMALL_STATE(259)] = 16513,
  [SMALL_STATE(260)] = 16548,
  [SMALL_STATE(261)] = 16579,
  [SMALL_STATE(262)] = 16610,
  [SMALL_STATE(263)] = 16641,
  [SMALL_STATE(264)] = 16672,
  [SMALL_STATE(265)] = 16703,
  [SMALL_STATE(266)] = 16734,
  [SMALL_STATE(267)] = 16765,
  [SMALL_STATE(268)] = 16800,
  [SMALL_STATE(269)] = 16831,
  [SMALL_STATE(270)] = 16862,
  [SMALL_STATE(271)] = 16893,
  [SMALL_STATE(272)] = 16924,
  [SMALL_STATE(273)] = 16955,
  [SMALL_STATE(274)] = 16986,
  [SMALL_STATE(275)] = 17017,
  [SMALL_STATE(276)] = 17048,
  [SMALL_STATE(277)] = 17079,
  [SMALL_STATE(278)] = 17110,
  [SMALL_STATE(279)] = 17141,
  [SMALL_STATE(280)] = 17172,
  [SMALL_STATE(281)] = 17203,
  [SMALL_STATE(282)] = 17232,
  [SMALL_STATE(283)] = 17261,
  [SMALL_STATE(284)] = 17290,
  [SMALL_STATE(285)] = 17319,
  [SMALL_STATE(286)] = 17348,
  [SMALL_STATE(287)] = 17377,
  [SMALL_STATE(288)] = 17406,
  [SMALL_STATE(289)] = 17435,
  [SMALL_STATE(290)] = 17464,
  [SMALL_STATE(291)] = 17493,
  [SMALL_STATE(292)] = 17522,
  [SMALL_STATE(293)] = 17551,
  [SMALL_STATE(294)] = 17580,
  [SMALL_STATE(295)] = 17609,
  [SMALL_STATE(296)] = 17638,
  [SMALL_STATE(297)] = 17667,
  [SMALL_STATE(298)] = 17696,
  [SMALL_STATE(299)] = 17725,
  [SMALL_STATE(300)] = 17754,
  [SMALL_STATE(301)] = 17783,
  [SMALL_STATE(302)] = 17812,
  [SMALL_STATE(303)] = 17841,
  [SMALL_STATE(304)] = 17870,
  [SMALL_STATE(305)] = 17899,
  [SMALL_STATE(306)] = 17928,
  [SMALL_STATE(307)] = 17957,
  [SMALL_STATE(308)] = 17986,
  [SMALL_STATE(309)] = 18015,
  [SMALL_STATE(310)] = 18044,
  [SMALL_STATE(311)] = 18073,
  [SMALL_STATE(312)] = 18102,
  [SMALL_STATE(313)] = 18131,
  [SMALL_STATE(314)] = 18160,
  [SMALL_STATE(315)] = 18189,
  [SMALL_STATE(316)] = 18218,
  [SMALL_STATE(317)] = 18247,
  [SMALL_STATE(318)] = 18276,
  [SMALL_STATE(319)] = 18305,
  [SMALL_STATE(320)] = 18334,
  [SMALL_STATE(321)] = 18363,
  [SMALL_STATE(322)] = 18392,
  [SMALL_STATE(323)] = 18421,
  [SMALL_STATE(324)] = 18450,
  [SMALL_STATE(325)] = 18479,
  [SMALL_STATE(326)] = 18508,
  [SMALL_STATE(327)] = 18537,
  [SMALL_STATE(328)] = 18566,
  [SMALL_STATE(329)] = 18595,
  [SMALL_STATE(330)] = 18624,
  [SMALL_STATE(331)] = 18653,
  [SMALL_STATE(332)] = 18682,
  [SMALL_STATE(333)] = 18711,
  [SMALL_STATE(334)] = 18740,
  [SMALL_STATE(335)] = 18769,
  [SMALL_STATE(336)] = 18798,
  [SMALL_STATE(337)] = 18827,
  [SMALL_STATE(338)] = 18856,
  [SMALL_STATE(339)] = 18885,
  [SMALL_STATE(340)] = 18914,
  [SMALL_STATE(341)] = 18943,
  [SMALL_STATE(342)] = 18972,
  [SMALL_STATE(343)] = 19001,
  [SMALL_STATE(344)] = 19030,
  [SMALL_STATE(345)] = 19059,
  [SMALL_STATE(346)] = 19087,
  [SMALL_STATE(347)] = 19113,
  [SMALL_STATE(348)] = 19139,
  [SMALL_STATE(349)] = 19164,
  [SMALL_STATE(350)] = 19189,
  [SMALL_STATE(351)] = 19214,
  [SMALL_STATE(352)] = 19253,
  [SMALL_STATE(353)] = 19292,
  [SMALL_STATE(354)] = 19331,
  [SMALL_STATE(355)] = 19354,
  [SMALL_STATE(356)] = 19377,
  [SMALL_STATE(357)] = 19416,
  [SMALL_STATE(358)] = 19455,
  [SMALL_STATE(359)] = 19494,
  [SMALL_STATE(360)] = 19530,
  [SMALL_STATE(361)] = 19566,
  [SMALL_STATE(362)] = 19604,
  [SMALL_STATE(363)] = 19640,
  [SMALL_STATE(364)] = 19676,
  [SMALL_STATE(365)] = 19712,
  [SMALL_STATE(366)] = 19748,
  [SMALL_STATE(367)] = 19784,
  [SMALL_STATE(368)] = 19820,
  [SMALL_STATE(369)] = 19856,
  [SMALL_STATE(370)] = 19894,
  [SMALL_STATE(371)] = 19930,
  [SMALL_STATE(372)] = 19968,
  [SMALL_STATE(373)] = 20004,
  [SMALL_STATE(374)] = 20040,
  [SMALL_STATE(375)] = 20076,
  [SMALL_STATE(376)] = 20112,
  [SMALL_STATE(377)] = 20148,
  [SMALL_STATE(378)] = 20186,
  [SMALL_STATE(379)] = 20222,
  [SMALL_STATE(380)] = 20258,
  [SMALL_STATE(381)] = 20294,
  [SMALL_STATE(382)] = 20330,
  [SMALL_STATE(383)] = 20366,
  [SMALL_STATE(384)] = 20402,
  [SMALL_STATE(385)] = 20440,
  [SMALL_STATE(386)] = 20476,
  [SMALL_STATE(387)] = 20512,
  [SMALL_STATE(388)] = 20548,
  [SMALL_STATE(389)] = 20584,
  [SMALL_STATE(390)] = 20620,
  [SMALL_STATE(391)] = 20656,
  [SMALL_STATE(392)] = 20692,
  [SMALL_STATE(393)] = 20728,
  [SMALL_STATE(394)] = 20764,
  [SMALL_STATE(395)] = 20800,
  [SMALL_STATE(396)] = 20836,
  [SMALL_STATE(397)] = 20872,
  [SMALL_STATE(398)] = 20908,
  [SMALL_STATE(399)] = 20944,
  [SMALL_STATE(400)] = 20977,
  [SMALL_STATE(401)] = 20997,
  [SMALL_STATE(402)] = 21017,
  [SMALL_STATE(403)] = 21042,
  [SMALL_STATE(404)] = 21067,
  [SMALL_STATE(405)] = 21091,
  [SMALL_STATE(406)] = 21110,
  [SMALL_STATE(407)] = 21127,
  [SMALL_STATE(408)] = 21150,
  [SMALL_STATE(409)] = 21167,
  [SMALL_STATE(410)] = 21184,
  [SMALL_STATE(411)] = 21207,
  [SMALL_STATE(412)] = 21230,
  [SMALL_STATE(413)] = 21253,
  [SMALL_STATE(414)] = 21276,
  [SMALL_STATE(415)] = 21297,
  [SMALL_STATE(416)] = 21320,
  [SMALL_STATE(417)] = 21337,
  [SMALL_STATE(418)] = 21357,
  [SMALL_STATE(419)] = 21371,
  [SMALL_STATE(420)] = 21391,
  [SMALL_STATE(421)] = 21411,
  [SMALL_STATE(422)] = 21431,
  [SMALL_STATE(423)] = 21447,
  [SMALL_STATE(424)] = 21465,
  [SMALL_STATE(425)] = 21485,
  [SMALL_STATE(426)] = 21501,
  [SMALL_STATE(427)] = 21521,
  [SMALL_STATE(428)] = 21541,
  [SMALL_STATE(429)] = 21561,
  [SMALL_STATE(430)] = 21573,
  [SMALL_STATE(431)] = 21589,
  [SMALL_STATE(432)] = 21601,
  [SMALL_STATE(433)] = 21617,
  [SMALL_STATE(434)] = 21637,
  [SMALL_STATE(435)] = 21657,
  [SMALL_STATE(436)] = 21672,
  [SMALL_STATE(437)] = 21683,
  [SMALL_STATE(438)] = 21700,
  [SMALL_STATE(439)] = 21713,
  [SMALL_STATE(440)] = 21730,
  [SMALL_STATE(441)] = 21741,
  [SMALL_STATE(442)] = 21758,
  [SMALL_STATE(443)] = 21769,
  [SMALL_STATE(444)] = 21786,
  [SMALL_STATE(445)] = 21803,
  [SMALL_STATE(446)] = 21820,
  [SMALL_STATE(447)] = 21831,
  [SMALL_STATE(448)] = 21842,
  [SMALL_STATE(449)] = 21853,
  [SMALL_STATE(450)] = 21864,
  [SMALL_STATE(451)] = 21875,
  [SMALL_STATE(452)] = 21886,
  [SMALL_STATE(453)] = 21897,
  [SMALL_STATE(454)] = 21908,
  [SMALL_STATE(455)] = 21921,
  [SMALL_STATE(456)] = 21932,
  [SMALL_STATE(457)] = 21943,
  [SMALL_STATE(458)] = 21954,
  [SMALL_STATE(459)] = 21965,
  [SMALL_STATE(460)] = 21976,
  [SMALL_STATE(461)] = 21987,
  [SMALL_STATE(462)] = 21998,
  [SMALL_STATE(463)] = 22011,
  [SMALL_STATE(464)] = 22022,
  [SMALL_STATE(465)] = 22033,
  [SMALL_STATE(466)] = 22050,
  [SMALL_STATE(467)] = 22065,
  [SMALL_STATE(468)] = 22076,
  [SMALL_STATE(469)] = 22087,
  [SMALL_STATE(470)] = 22100,
  [SMALL_STATE(471)] = 22117,
  [SMALL_STATE(472)] = 22134,
  [SMALL_STATE(473)] = 22151,
  [SMALL_STATE(474)] = 22162,
  [SMALL_STATE(475)] = 22173,
  [SMALL_STATE(476)] = 22190,
  [SMALL_STATE(477)] = 22207,
  [SMALL_STATE(478)] = 22220,
  [SMALL_STATE(479)] = 22231,
  [SMALL_STATE(480)] = 22248,
  [SMALL_STATE(481)] = 22259,
  [SMALL_STATE(482)] = 22276,
  [SMALL_STATE(483)] = 22287,
  [SMALL_STATE(484)] = 22304,
  [SMALL_STATE(485)] = 22321,
  [SMALL_STATE(486)] = 22332,
  [SMALL_STATE(487)] = 22345,
  [SMALL_STATE(488)] = 22356,
  [SMALL_STATE(489)] = 22367,
  [SMALL_STATE(490)] = 22378,
  [SMALL_STATE(491)] = 22389,
  [SMALL_STATE(492)] = 22400,
  [SMALL_STATE(493)] = 22411,
  [SMALL_STATE(494)] = 22425,
  [SMALL_STATE(495)] = 22439,
  [SMALL_STATE(496)] = 22449,
  [SMALL_STATE(497)] = 22459,
  [SMALL_STATE(498)] = 22469,
  [SMALL_STATE(499)] = 22479,
  [SMALL_STATE(500)] = 22489,
  [SMALL_STATE(501)] = 22499,
  [SMALL_STATE(502)] = 22509,
  [SMALL_STATE(503)] = 22519,
  [SMALL_STATE(504)] = 22529,
  [SMALL_STATE(505)] = 22539,
  [SMALL_STATE(506)] = 22553,
  [SMALL_STATE(507)] = 22563,
  [SMALL_STATE(508)] = 22573,
  [SMALL_STATE(509)] = 22583,
  [SMALL_STATE(510)] = 22593,
  [SMALL_STATE(511)] = 22607,
  [SMALL_STATE(512)] = 22617,
  [SMALL_STATE(513)] = 22631,
  [SMALL_STATE(514)] = 22641,
  [SMALL_STATE(515)] = 22651,
  [SMALL_STATE(516)] = 22661,
  [SMALL_STATE(517)] = 22675,
  [SMALL_STATE(518)] = 22685,
  [SMALL_STATE(519)] = 22699,
  [SMALL_STATE(520)] = 22713,
  [SMALL_STATE(521)] = 22727,
  [SMALL_STATE(522)] = 22739,
  [SMALL_STATE(523)] = 22749,
  [SMALL_STATE(524)] = 22759,
  [SMALL_STATE(525)] = 22769,
  [SMALL_STATE(526)] = 22783,
  [SMALL_STATE(527)] = 22797,
  [SMALL_STATE(528)] = 22807,
  [SMALL_STATE(529)] = 22817,
  [SMALL_STATE(530)] = 22827,
  [SMALL_STATE(531)] = 22837,
  [SMALL_STATE(532)] = 22851,
  [SMALL_STATE(533)] = 22861,
  [SMALL_STATE(534)] = 22871,
  [SMALL_STATE(535)] = 22885,
  [SMALL_STATE(536)] = 22899,
  [SMALL_STATE(537)] = 22913,
  [SMALL_STATE(538)] = 22923,
  [SMALL_STATE(539)] = 22937,
  [SMALL_STATE(540)] = 22951,
  [SMALL_STATE(541)] = 22963,
  [SMALL_STATE(542)] = 22973,
  [SMALL_STATE(543)] = 22983,
  [SMALL_STATE(544)] = 22993,
  [SMALL_STATE(545)] = 23007,
  [SMALL_STATE(546)] = 23017,
  [SMALL_STATE(547)] = 23031,
  [SMALL_STATE(548)] = 23041,
  [SMALL_STATE(549)] = 23055,
  [SMALL_STATE(550)] = 23065,
  [SMALL_STATE(551)] = 23075,
  [SMALL_STATE(552)] = 23089,
  [SMALL_STATE(553)] = 23099,
  [SMALL_STATE(554)] = 23109,
  [SMALL_STATE(555)] = 23119,
  [SMALL_STATE(556)] = 23130,
  [SMALL_STATE(557)] = 23141,
  [SMALL_STATE(558)] = 23152,
  [SMALL_STATE(559)] = 23163,
  [SMALL_STATE(560)] = 23174,
  [SMALL_STATE(561)] = 23185,
  [SMALL_STATE(562)] = 23196,
  [SMALL_STATE(563)] = 23207,
  [SMALL_STATE(564)] = 23218,
  [SMALL_STATE(565)] = 23229,
  [SMALL_STATE(566)] = 23240,
  [SMALL_STATE(567)] = 23251,
  [SMALL_STATE(568)] = 23262,
  [SMALL_STATE(569)] = 23273,
  [SMALL_STATE(570)] = 23284,
  [SMALL_STATE(571)] = 23295,
  [SMALL_STATE(572)] = 23306,
  [SMALL_STATE(573)] = 23317,
  [SMALL_STATE(574)] = 23328,
  [SMALL_STATE(575)] = 23339,
  [SMALL_STATE(576)] = 23350,
  [SMALL_STATE(577)] = 23361,
  [SMALL_STATE(578)] = 23372,
  [SMALL_STATE(579)] = 23383,
  [SMALL_STATE(580)] = 23394,
  [SMALL_STATE(581)] = 23405,
  [SMALL_STATE(582)] = 23416,
  [SMALL_STATE(583)] = 23427,
  [SMALL_STATE(584)] = 23438,
  [SMALL_STATE(585)] = 23449,
  [SMALL_STATE(586)] = 23460,
  [SMALL_STATE(587)] = 23471,
  [SMALL_STATE(588)] = 23482,
  [SMALL_STATE(589)] = 23493,
  [SMALL_STATE(590)] = 23504,
  [SMALL_STATE(591)] = 23515,
  [SMALL_STATE(592)] = 23526,
  [SMALL_STATE(593)] = 23537,
  [SMALL_STATE(594)] = 23548,
  [SMALL_STATE(595)] = 23559,
  [SMALL_STATE(596)] = 23570,
  [SMALL_STATE(597)] = 23581,
  [SMALL_STATE(598)] = 23592,
  [SMALL_STATE(599)] = 23603,
  [SMALL_STATE(600)] = 23614,
  [SMALL_STATE(601)] = 23625,
  [SMALL_STATE(602)] = 23636,
  [SMALL_STATE(603)] = 23647,
  [SMALL_STATE(604)] = 23658,
  [SMALL_STATE(605)] = 23669,
  [SMALL_STATE(606)] = 23680,
  [SMALL_STATE(607)] = 23691,
  [SMALL_STATE(608)] = 23702,
  [SMALL_STATE(609)] = 23713,
  [SMALL_STATE(610)] = 23724,
  [SMALL_STATE(611)] = 23735,
  [SMALL_STATE(612)] = 23746,
  [SMALL_STATE(613)] = 23757,
  [SMALL_STATE(614)] = 23768,
  [SMALL_STATE(615)] = 23779,
  [SMALL_STATE(616)] = 23790,
  [SMALL_STATE(617)] = 23801,
  [SMALL_STATE(618)] = 23812,
  [SMALL_STATE(619)] = 23823,
  [SMALL_STATE(620)] = 23834,
  [SMALL_STATE(621)] = 23845,
  [SMALL_STATE(622)] = 23856,
  [SMALL_STATE(623)] = 23867,
  [SMALL_STATE(624)] = 23878,
  [SMALL_STATE(625)] = 23889,
  [SMALL_STATE(626)] = 23900,
  [SMALL_STATE(627)] = 23911,
  [SMALL_STATE(628)] = 23922,
  [SMALL_STATE(629)] = 23933,
  [SMALL_STATE(630)] = 23944,
  [SMALL_STATE(631)] = 23955,
  [SMALL_STATE(632)] = 23966,
  [SMALL_STATE(633)] = 23974,
  [SMALL_STATE(634)] = 23982,
  [SMALL_STATE(635)] = 23990,
  [SMALL_STATE(636)] = 23998,
  [SMALL_STATE(637)] = 24006,
  [SMALL_STATE(638)] = 24014,
  [SMALL_STATE(639)] = 24022,
  [SMALL_STATE(640)] = 24030,
  [SMALL_STATE(641)] = 24038,
  [SMALL_STATE(642)] = 24046,
  [SMALL_STATE(643)] = 24054,
  [SMALL_STATE(644)] = 24062,
  [SMALL_STATE(645)] = 24070,
  [SMALL_STATE(646)] = 24078,
  [SMALL_STATE(647)] = 24086,
  [SMALL_STATE(648)] = 24094,
  [SMALL_STATE(649)] = 24102,
  [SMALL_STATE(650)] = 24110,
  [SMALL_STATE(651)] = 24118,
  [SMALL_STATE(652)] = 24126,
  [SMALL_STATE(653)] = 24134,
  [SMALL_STATE(654)] = 24142,
  [SMALL_STATE(655)] = 24150,
  [SMALL_STATE(656)] = 24158,
  [SMALL_STATE(657)] = 24166,
  [SMALL_STATE(658)] = 24174,
  [SMALL_STATE(659)] = 24182,
  [SMALL_STATE(660)] = 24190,
  [SMALL_STATE(661)] = 24198,
  [SMALL_STATE(662)] = 24206,
  [SMALL_STATE(663)] = 24214,
  [SMALL_STATE(664)] = 24222,
  [SMALL_STATE(665)] = 24230,
  [SMALL_STATE(666)] = 24238,
  [SMALL_STATE(667)] = 24246,
  [SMALL_STATE(668)] = 24254,
  [SMALL_STATE(669)] = 24262,
  [SMALL_STATE(670)] = 24270,
  [SMALL_STATE(671)] = 24278,
  [SMALL_STATE(672)] = 24286,
  [SMALL_STATE(673)] = 24294,
  [SMALL_STATE(674)] = 24302,
  [SMALL_STATE(675)] = 24310,
  [SMALL_STATE(676)] = 24318,
  [SMALL_STATE(677)] = 24326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(349),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(174),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(67),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(209),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(209),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(210),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(213),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(32),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(350),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(94),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(669),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(669),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(361),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(80),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(615),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(56),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(602),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(52),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(590),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(62),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(625),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(41),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(562),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(430),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(27),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(520),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(432),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(25),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(466),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__template, 2), SHIFT_REPEAT(26),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(42),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(404),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(422),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(423),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(437),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(425),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(435),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_end, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_end, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__template, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_directive, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 10),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 9),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 8),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(516),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 7),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 5),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 6),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_for_start, 6),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 5),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_else_intro, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_if_intro, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
