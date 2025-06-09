/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/** @param {string} dialect */
module.exports = function make_grammar(dialect) {
  const PREC = {
    get_attr: 9,
    index: 9,
    // unary negation should not pull expressions apart
    expr: 8,
    unary: 7,
    binary_mult: 6,
    binary_add: 5,
    binary_ord: 4,
    binary_comp: 3,
    binary_and: 2,
    binary_or: 1,

    // if possible prefer string_literals to quoted templates
    string_lit: 2,
    quoted_template: 1,
  };

  return grammar({
    name: dialect,

    // conflicts: ($) => [[$.template_interpolation], [$.template]],
    // precedences: ($) => [
    //   [$.template_for_start, $.template_if_end, $.template_for_end],
    // ],

    externals: ($) => [
      $.quoted_template_start,
      $.quoted_template_end,
      $._template_literal_chunk,
      $.template_interpolation_start,
      $.template_interpolation_end,
      $.template_directive_start,
      $.template_directive_end,
      $.heredoc_identifier,
    ],

    extras: ($) => [$.comment, $._whitespace],

    supertypes: ($) => [$.expression, $.expr_term],

    rules: {
      // also allow objects to handle .tfvars in json format
      config_file: ($) => optional(choice($.body, $.object)),

      body: ($) => choice(repeat1(choice($.attribute, $.block))),

      attribute: ($) =>
        seq(field("left", $.identifier), "=", field("right", $.expression)),

      block: ($) =>
        seq(
          $.identifier,
          repeat(choice($.string_lit, $.identifier)),
          $.block_start,
          optional($.body),
          $.block_end,
        ),

      block_start: ($) => "{",
      block_end: ($) => "}",

      identifier: ($) =>
        token(
          seq(
            choice(/\p{ID_Start}/u, "_"),
            repeat(choice(/\p{ID_Continue}/u, "-", "::")),
          ),
        ),

      expression: ($) => prec.right(choice($.expr_term, $.conditional)),

      // operations are documented as expressions, but our real world samples
      // contain instances of operations without parentheses. think for example:
      // x = a == "" && b != ""
      expr_term: ($) =>
        choice(
          $.literal_value,
          $._template_expr,
          $.collection_value,
          $._variable_expr,
          $.function_call,
          $.for_expr,
          $._operation,
          prec.right(PREC.expr, seq($.index)),
          prec.right(PREC.expr, seq($.get_attr)),
          prec.right(PREC.expr, seq($.splat)),
          $.parenthesized_expression,
        ),

      parenthesized_expression: ($) => seq("(", $.expression, ")"),

      literal_value: ($) =>
        choice($.numeric_lit, $.bool_lit, $.null_lit, $.string_lit),

      numeric_lit: ($) =>
        choice(/[0-9]+(\.[0-9]+([eE][-+]?[0-9]+)?)?/, /0x[0-9a-zA-Z]+/),

      bool_lit: ($) => choice("true", "false"),

      null_lit: ($) => "null",

      string_lit: ($) =>
        prec(
          PREC.string_lit,
          seq(
            $.quoted_template_start,
            field("body", optional($.template_literal)),
            $.quoted_template_end,
          ),
        ),

      collection_value: ($) => choice($.tuple, $.object),

      _comma: ($) => ",",

      tuple: ($) => seq($.tuple_start, optional($._tuple_elems), $.tuple_end),

      tuple_start: ($) => "[",
      tuple_end: ($) => "]",

      _tuple_elems: ($) =>
        seq(
          $.expression,
          repeat(seq($._comma, $.expression)),
          optional($._comma),
        ),

      object: ($) =>
        seq($.object_start, optional($._object_elems), $.object_end),

      object_start: ($) => "{",
      object_end: ($) => "}",

      _object_elems: ($) =>
        seq(
          $.object_elem,
          repeat(seq(optional($._comma), $.object_elem)),
          optional($._comma),
        ),

      object_elem: ($) =>
        seq(
          field("key", $.expression),
          choice("=", ":"),
          field("val", $.expression),
        ),

      index: ($) =>
        prec(
          PREC.index,
          seq(
            field("object", $.expr_term),
            field("index", choice($.new_index, $.legacy_index)),
          ),
        ),

      new_index: ($) => seq("[", $.expression, "]"),
      legacy_index: ($) => seq(".", /[0-9]+/),

      get_attr: ($) =>
        prec(
          PREC.get_attr,
          seq(
            field("object", $.expr_term),
            ".",
            field("attribute", $.identifier),
          ),
        ),

      splat: ($) => choice($.attr_splat, $.full_splat),

      attr_splat: ($) =>
        prec.right(seq(field("expression", $.expression), ".*")),

      full_splat: ($) =>
        prec.right(seq(field("expression", $.expression), "[*]")),

      for_expr: ($) => choice($.for_tuple_expr, $.for_object_expr),

      for_tuple_expr: ($) =>
        seq(
          $.tuple_start,
          field("intro", $.for_intro),
          field("body", $.expression),
          field("condition", optional($.for_cond)),
          $.tuple_end,
        ),

      for_object_expr: ($) =>
        seq(
          $.object_start,
          field("intro", $.for_intro),
          field("key", $.expression),
          "=>",
          field("value", $.expression),
          field("expansion", optional($.ellipsis)),
          field("condition", optional($.for_cond)),
          $.object_end,
        ),

      for_intro: ($) =>
        seq(
          "for",
          field(
            "left",
            choice(
              alias($.identifier, $.for_initializer_single),
              $.for_initializer_pair,
            ),
          ),
          "in",
          field("right", $.expression),
          ":",
        ),

      // for_initializer_single: ($) => $.identifier,

      for_initializer_pair: ($) =>
        seq(field("left", $.identifier), ",", field("right", $.identifier)),

      for_cond: ($) => seq("if", $.expression),

      _variable_expr: ($) => prec.right($.identifier),

      function_call: ($) =>
        seq(
          field("function", $.identifier),
          $._function_call_start,
          field("arguments", optional($.function_arguments)),
          $._function_call_end,
        ),

      _function_call_start: ($) => "(",
      _function_call_end: ($) => ")",

      function_arguments: ($) =>
        prec.right(
          seq(
            $.expression,
            repeat(seq($._comma, $.expression)),
            optional(choice($._comma, $.ellipsis)),
          ),
        ),

      ellipsis: ($) => token("..."),

      conditional: ($) =>
        prec.left(
          seq(
            field("condition", $.expression),
            "?",
            field("consequence", $.expression),
            ":",
            field("alternative", $.expression),
          ),
        ),

      _operation: ($) => choice($.unary_operation, $.binary_operation),

      unary_operation: ($) =>
        prec.left(
          PREC.unary,
          seq(
            field("operator", choice("-", "!")),
            field("operand", $.expr_term),
          ),
        ),

      binary_operation: ($) => {
        const table = [
          [PREC.binary_mult, choice("*", "/", "%")],
          [PREC.binary_add, choice("+", "-")],
          [PREC.binary_ord, choice(">", ">=", "<", "<=")],
          [PREC.binary_comp, choice("==", "!=")],
          [PREC.binary_and, "&&"],
          [PREC.binary_or, "||"],
        ];

        return choice(
          ...table.map(([precedence, operator]) =>
            prec.left(
              precedence,
              seq(
                field("left", $.expr_term),
                field("operator", operator),
                field("right", $.expr_term),
              ),
            ),
          ),
        );
      },

      _template_expr: ($) => choice($.quoted_template, $.heredoc_template),

      quoted_template: ($) =>
        prec(
          PREC.quoted_template,
          seq(
            $.quoted_template_start,
            field("body", optional($.template)),
            $.quoted_template_end,
          ),
        ),

      heredoc_template: ($) =>
        seq(
          field("heredoc_marker", $.heredoc_start),
          $.heredoc_identifier,
          field("body", optional($.template)),
          $.heredoc_identifier,
        ),

      heredoc_start: ($) => choice("<<", "<<-"),

      strip_marker: ($) => "~",

      template: ($) =>
        prec.left(
          repeat1(
            choice(
              $.template_interpolation,
              $.template_directive,
              $.template_literal,
            ),
          ),
        ),

      template_literal: ($) => prec.right(repeat1($._template_literal_chunk)),

      template_interpolation: ($) =>
        seq(
          $.template_interpolation_start,
          field("strip_marker_start", optional($.strip_marker)),
          field("body", $.expression),
          field("strip_marker_end", optional($.strip_marker)),
          $.template_interpolation_end,
        ),

      template_directive: ($) => choice($.template_for, $.template_if),

      template_for: ($) =>
        seq($.template_for_start, optional($.template), $.template_for_end),

      template_for_start: ($) =>
        seq(
          $.template_directive_start,
          field("strip_marker_start", optional($.strip_marker)),
          "for",
          field("left", $.identifier),
          optional(seq(",", field("left", $.identifier))),
          "in",
          field("right", $.expression),
          field("strip_marker_end", optional($.strip_marker)),
          $.template_directive_end,
        ),

      template_for_end: ($) =>
        seq(
          $.template_directive_start,
          field("strip_marker_start", optional($.strip_marker)),
          "endfor",
          field("strip_marker_end", optional($.strip_marker)),
          $.template_directive_end,
        ),

      template_if: ($) =>
        seq(
          field("if_intro", $.template_if_intro),
          field("if_body", optional($.template)),
          optional(
            seq(
              field("else_intro", $.template_else_intro),
              field("else_body", optional($.template)),
            ),
          ),
          $.template_if_end,
        ),

      template_if_intro: ($) =>
        seq(
          $.template_directive_start,
          field("strip_marker_start", optional($.strip_marker)),
          "if",
          field("condition", $.expression),
          field("strip_marker_end", optional($.strip_marker)),
          $.template_directive_end,
        ),

      template_else_intro: ($) =>
        seq(
          $.template_directive_start,
          field("strip_marker_start", optional($.strip_marker)),
          "else",
          field("strip_marker_end", optional($.strip_marker)),
          $.template_directive_end,
        ),

      template_if_end: ($) =>
        seq(
          $.template_directive_start,
          field("strip_marker_start", optional($.strip_marker)),
          "endif",
          field("strip_marker_end", optional($.strip_marker)),
          $.template_directive_end,
        ),

      // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      comment: ($) =>
        token(
          choice(
            seq("#", /.*/),
            seq("//", /.*/),
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
          ),
        ),

      _whitespace: ($) => token(/\s/),
    },
  });
};
