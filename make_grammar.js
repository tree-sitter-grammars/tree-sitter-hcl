/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/** @param {string} dialect */
module.exports = function make_grammar(dialect) {
  const PREC = {
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

    rules: {
      // also allow objects to handle .tfvars in json format
      config_file: ($) => optional(choice($.body, $.object)),

      body: ($) => choice(repeat1(choice($.attribute, $.block))),

      attribute: ($) => seq($.identifier, "=", $.expression),

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

      expression: ($) => prec.right(choice($._expr_term, $.conditional)),

      // operations are documented as expressions, but our real world samples
      // contain instances of operations without parentheses. think for example:
      // x = a == "" && b != ""
      _expr_term: ($) =>
        choice(
          $.literal_value,
          $.template_expr,
          $.collection_value,
          $.variable_expr,
          $.function_call,
          $.for_expr,
          $.operation,
          prec.right(PREC.expr, seq($._expr_term, $.index)),
          prec.right(PREC.expr, seq($._expr_term, $.get_attr)),
          prec.right(PREC.expr, seq($._expr_term, $.splat)),
          seq("(", $.expression, ")"),
        ),

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
            optional($.template_literal),
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

      index: ($) => choice($.new_index, $.legacy_index),

      new_index: ($) => seq("[", $.expression, "]"),
      legacy_index: ($) => seq(".", /[0-9]+/),

      get_attr: ($) => seq(".", $.identifier),

      splat: ($) => choice($.attr_splat, $.full_splat),

      attr_splat: ($) =>
        prec.right(seq(".*", repeat(choice($.get_attr, $.index)))),

      full_splat: ($) =>
        prec.right(seq("[*]", repeat(choice($.get_attr, $.index)))),

      for_expr: ($) => choice($.for_tuple_expr, $.for_object_expr),

      for_tuple_expr: ($) =>
        seq(
          $.tuple_start,
          $.for_intro,
          $.expression,
          optional($.for_cond),
          $.tuple_end,
        ),

      for_object_expr: ($) =>
        seq(
          $.object_start,
          $.for_intro,
          $.expression,
          "=>",
          $.expression,
          optional($.ellipsis),
          optional($.for_cond),
          $.object_end,
        ),

      for_intro: ($) =>
        seq(
          "for",
          $.identifier,
          optional(seq(",", $.identifier)),
          "in",
          $.expression,
          ":",
        ),

      for_cond: ($) => seq("if", $.expression),

      variable_expr: ($) => prec.right($.identifier),

      function_call: ($) =>
        seq(
          $.identifier,
          $._function_call_start,
          optional($.function_arguments),
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
        prec.left(seq($.expression, "?", $.expression, ":", $.expression)),

      operation: ($) => choice($.unary_operation, $.binary_operation),

      unary_operation: ($) =>
        prec.left(PREC.unary, seq(choice("-", "!"), $._expr_term)),

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
            prec.left(precedence, seq($._expr_term, operator, $._expr_term)),
          ),
        );
      },

      template_expr: ($) => choice($.quoted_template, $.heredoc_template),

      quoted_template: ($) =>
        prec(
          PREC.quoted_template,
          seq(
            $.quoted_template_start,
            optional($._template),
            $.quoted_template_end,
          ),
        ),

      heredoc_template: ($) =>
        seq(
          $.heredoc_start,
          $.heredoc_identifier,
          optional($._template),
          $.heredoc_identifier,
        ),

      heredoc_start: ($) => choice("<<", "<<-"),

      strip_marker: ($) => "~",

      _template: ($) =>
        repeat1(
          choice(
            $.template_interpolation,
            $.template_directive,
            $.template_literal,
          ),
        ),

      template_literal: ($) => prec.right(repeat1($._template_literal_chunk)),

      template_interpolation: ($) =>
        seq(
          $.template_interpolation_start,
          optional($.strip_marker),
          optional($.expression),
          optional($.strip_marker),
          $.template_interpolation_end,
        ),

      template_directive: ($) => choice($.template_for, $.template_if),

      template_for: ($) =>
        seq($.template_for_start, optional($._template), $.template_for_end),

      template_for_start: ($) =>
        seq(
          $.template_directive_start,
          optional($.strip_marker),
          "for",
          $.identifier,
          optional(seq(",", $.identifier)),
          "in",
          $.expression,
          optional($.strip_marker),
          $.template_directive_end,
        ),

      template_for_end: ($) =>
        seq(
          $.template_directive_start,
          optional($.strip_marker),
          "endfor",
          optional($.strip_marker),
          $.template_directive_end,
        ),

      template_if: ($) =>
        seq(
          $.template_if_intro,
          optional($._template),
          optional(seq($.template_else_intro, optional($._template))),
          $.template_if_end,
        ),

      template_if_intro: ($) =>
        seq(
          $.template_directive_start,
          optional($.strip_marker),
          "if",
          $.expression,
          optional($.strip_marker),
          $.template_directive_end,
        ),

      template_else_intro: ($) =>
        seq(
          $.template_directive_start,
          optional($.strip_marker),
          "else",
          optional($.strip_marker),
          $.template_directive_end,
        ),

      template_if_end: ($) =>
        seq(
          $.template_directive_start,
          optional($.strip_marker),
          "endif",
          optional($.strip_marker),
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
