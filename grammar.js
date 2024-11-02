const {
  KickAssemblerDirectives,
  KickPreprocessorDirectives,
  AssemblerOpcodes,
  KickAssemblerMathConstants,
  KickAssemblerMathFunctions,
  KickAssemblerValueTypes,
  KickAssemblerDataHandlingFunctions,
} = require("./OpcodesAndDirectives");

const kickasmCodes = AssemblerOpcodes.map((item) => item.toLowerCase());

module.exports = grammar({
  name: "asm6502",

  // Define comments and extras
  extras: ($) => [
    /\s+/, // Allow whitespace
    $.comment, // Allow comments
  ],
  word: ($) => $.identifier,
  conflicts: ($) => [],

  rules: {
    source_file: ($) => repeat($._statement),
    /*
    A statement is either a
      - label
      - function
      - instruction
      - directive
      - preprocessor directive
    For example:
    - `lda #$FF`
    - `jmp ($1000)`
    - `jmp [$1000]`
    - `loop:`
    - `!loop:`
    - `!:`
    - `!loop-`
    - `#define`
    - `*`
    - `.if ($d012 < 100)`
    - `.byte $FF`
    */
    _statement: ($) =>
      choice($.directive, $.label, $.instruction, $.preprocessor_directive),

    // Labels are identifiers followed by a colon (e.g., `loop:` or `!loop:`)
    label: ($) => seq(optional("!"), optional($.identifier), ":"),

    // Preprocessor directives start with a hash
    // ie. `#define`
    preprocessor_directive: ($) =>
      seq("#", $.identifier, optional("!"), $.identifier),

    // Instructions are composed of a mnemonic and an optional operand
    instruction: ($) => prec.right(seq($.mnemonic, optional($.operand))),

    // Full list of 6502 opcodes
    mnemonic: ($) => token(choice(...kickasmCodes)),

    // Handle
    identOrNumber: ($) => choice($.identifier, $.two_byte_number),

    /*
    function commaSep(rule) {
      return optional(seq(rule, repeat(seq(",", rule))));
    }
    */
    // Many params for directives
    // e.g. `.byte $FF, $00, $FF, $00`
    /*directive_params: ($) =>
      seq(
        choice($.identifier, $.any_number, $.string),
        commaSep(choice($.identifier, $.any_number, $.string)),
      ),
*/
    all_choices: ($) => choice($.identifier, $.any_number, $.string),
    // Handle directives
    directive: ($) =>
      prec.right(
        choice(
          seq(
            "*",
            "=",
            $.identOrNumber,
            optional(repeat(seq($.operator, $.identOrNumber))),
          ),
          seq(
            ".", // All directives start with a dot
            $.directives,
            seq(
              choice(
                $.identifier,
                $.string,
                $.parameters,
                $.parameter_block,
                commaSep(choice($.identifier, $.any_number, $.string)),
              ),
              optional(seq("=", $.all_choices)),
              optional($.parameters),
              optional($.parameter_block),
            ),
          ),
        ),
      ),
    /*

      (source_file
        (directive
          (directives)
          (identifier))
        (ERROR
          (one_byte_number)))
          (directives))
          */

    parameters: ($) =>
      seq(
        "(",
        choice(
          commaSep($.identifier), // Simple identifiers
        ),
        ")",
      ),

    // Allow expressions inside parameters for complex directives like `.if`
    expression: ($) =>
      choice(
        $.binary_expression, // Comparison operators, like in `.if ($d012 < 100)`
        $.identifier, // Simple identifiers
        $.operand, // Operands like numbers, addresses, etc.
      ),

    // Binary expressions for conditions (e.g., `$d012 < 100`)
    binary_expression: ($) =>
      prec.left(seq($.identifier, $.binary_operator, $.operand)),

    // Binary operators like <, >, ==, etc.
    binary_operator: () =>
      token(choice("<", ">", "<=", ">=", "==", "!=", "&", "|", "^")),

    // Define the block of parameters for a directive
    parameter_block: ($) => seq("{", repeat($._statement), "}"),

    // KickAssembler-specific directives
    directives: ($) => token(choice(...KickAssemblerDirectives)),

    // Math constants (PI, E, etc.)
    math_constants: ($) => token(choice(...KickAssemblerMathConstants)),

    // Math functions (abs, sqrt, etc.)
    math_functions: ($) => token(choice(...KickAssemblerMathFunctions)),

    // Data handling functions (LoadBinary, LoadPicture, etc.)
    data_handling_functions: ($) =>
      token(seq(choice(...KickAssemblerDataHandlingFunctions))),

    // Operand definitions for different addressing modes
    operand: ($) =>
      choice(
        "*", // jmp *
        $.immediate, // Immediate values ie. lda #$FF
        $.indexed, // Indexed addressing ie. lda $1000,x
        $.absolute, // Absolute addressing ie. lda $1000
        $.zero_page, // Zero-page addressing ie. lda $FF
        $.indirect, // Indirect addressing ie. jmp ($1000)
        $.indirect_zeropage_x, // Indirect zero-page addressing with X register ie. jmp ($FF,x)
        $.indirect_zeropage_y, // Indirect zero-page addressing with Y register ie. jmp ($FF),y
        $.labelOp, // Label with optional increment or decrement ie. !loop+
        $.relative, // Relative addressing ie. bne loop or bne loop:#$00
        $.accumulator, // Accumulator addressing ie. asl a
      ),

    indexed: ($) =>
      seq(
        choice($.identifierWithLoHi, $.one_byte_number, $.two_byte_number),
        ",",
        choice("x", "y"),
      ),

    immediate: ($) => prec(2, seq("#", choice($.any_number, $.identifier))),

    absolute: ($) => $.two_byte_number,

    zero_page: ($) => $.one_byte_number,

    indirect: ($) =>
      seq("(", choice($.one_byte_number, $.two_byte_number), ")"),

    indirect_zeropage_x: ($) => seq("(", $.one_byte_number, ",", "x", ")"),

    indirect_zeropage_y: ($) => seq("(", $.one_byte_number, ")", ",", "y"),

    relative: ($) =>
      prec(1, prec.right(seq($.identifier, optional(seq(":", $.operand))))),

    labelOp: ($) =>
      seq(
        "!",
        choice("-", "+", $.identifier),
        optional(repeat(choice("+", "-"))),
      ),

    accumulator: ($) => "A",

    one_byte_number: ($) =>
      token(choice(seq("$", /[0-9a-fA-F]{2}/), /\d{1,3}/)), // One-byte numbers for zero-page
    two_byte_number: ($) =>
      token(choice(seq("$", /[0-9a-fA-F]{4}/), /\d{1,5}/)), // Two-byte numbers for full memory addresses
    binary_number: ($) => token(seq("%", /[01]{1,6}/)), // Binary numbers like %101010
    decimal_number: ($) => token(/\d+/), // Decimal numbers like 12345

    any_number: ($) =>
      choice(
        $.one_byte_number,
        $.two_byte_number,
        $.binary_number,
        $.decimal_number,
      ),

    // Identifiers for labels and relative branches etc
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Lo/hi table access
    lohi: ($) => seq(".", choice("lo", "hi")),

    identifierWithLoHi: ($) => seq($.identifier, optional($.lohi)),

    operator: ($) =>
      choice("+", "-", "*", "/", ">", "<", "<<", ">>", "&", "|", "^", "~"),

    // Strings in double quotes
    string: () => token(seq('"', /[^"]*/, '"')),

    vector_value: ($) =>
      seq($.decimal_number, $.decimal_number, $.decimal_number),
    vector: ($) => seq("Vector", "(", $.vector_value, ")"),

    // semicolon for lines
    semicolon: () => ";",

    variable_declarator: ($) =>
      seq(
        field("kind", choice("var")),
        field("name", $.identifier),
        "=",
        field("value", choice($.string, $.any_number, $.identifier)),
      ),

    // KickAssembler-style comments (using `//` and `/* */`)
    comment: ($) =>
      token(
        choice(
          seq("//", /[^\r\n\u2028\u2029]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});
// Utility function for comma-separated items
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}
