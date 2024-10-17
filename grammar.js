module.exports = grammar({
  name: "asm6502",

  extras: ($) => [
    /\s/, // Allow whitespace
    $.line_comment,
    $.block_comment,
  ],

  // Declare conflicts between the mnemonic followed by an operand or a label
  conflicts: ($) => [
    [$.absolute_x, $.zero_page_x],
    [$.absolute_y, $.zero_page_y],
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    // A statement is either a label or an instruction
    _statement: ($) => choice($.instruction, $.label),

    // Labels are identifiers followed by a colon
    label: ($) => seq($.identifier, ":"),

    // Instructions are composed of a mnemonic and an optional operand
    instruction: ($) => prec.right(seq($.mnemonic, optional($.operand))),

    // Full list of 6502 mnemonics
    mnemonic: ($) =>
      choice(
        "adc",
        "adb",
        "and",
        "asl",
        "bcc",
        "bcs",
        "beq",
        "bit",
        "bmi",
        "bne",
        "bpl",
        "brk",
        "bvc",
        "bvs",
        "clc",
        "cld",
        "cli",
        "clv",
        "cmp",
        "cpx",
        "cpy",
        "dec",
        "dex",
        "dey",
        "eor",
        "inc",
        "inx",
        "iny",
        "jmp",
        "jsr",
        "lda",
        "ldx",
        "ldy",
        "lsr",
        "nop",
        "ora",
        "pha",
        "php",
        "pla",
        "plp",
        "rol",
        "ror",
        "rti",
        "rts",
        "sbc",
        "sec",
        "sed",
        "sei",
        "sta",
        "stx",
        "sty",
        "tax",
        "tay",
        "tsx",
        "txa",
        "txs",
        "tya",
      ),

    // Operand definitions for different addressing modes
    operand: ($) =>
      choice(
        $.immediate,
        $.absolute,
        $.absolute_x,
        $.absolute_y,
        $.zero_page,
        $.zero_page_x,
        $.zero_page_y,
        $.indirect,
        $.indirect_x,
        $.indirect_y,
        $.relative,
        $.accumulator,
      ),

    immediate: ($) => seq("#", $.number),

    absolute: ($) => prec(1, $.number), // Higher precedence for absolute addressing

    absolute_x: ($) => seq(prec(1, $.number), ",", "X"), // Higher precedence for absolute,X

    absolute_y: ($) => seq(prec(1, $.number), ",", "Y"), // Higher precedence for absolute,Y

    zero_page: ($) => prec(0, $.number), // Lower precedence for zero-page addressing

    zero_page_x: ($) => seq(prec(0, $.number), ",", "X"), // Lower precedence for zero-page,X

    zero_page_y: ($) => seq(prec(0, $.number), ",", "Y"), // Lower precedence for zero-page,Y

    indirect: ($) => seq("(", $.number, ")"),

    indirect_x: ($) => seq("(", $.number, ",", "X", ")"),

    indirect_y: ($) => seq("(", $.number, ")", ",", "Y"),

    relative: ($) => $.identifier,

    accumulator: ($) => "A",

    number: ($) =>
      token(
        choice(
          /0[xX][0-9a-fA-F]+/, // Hexadecimal (e.g., $0xFF)
          /\d+/, // Decimal (e.g., 255)
        ),
      ),
    // Identifiers for labels and relative branches
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // KickAssembler-style comments (using `//`)
    line_comment: ($) => token(seq("//", /.*/)),
    block_comment: ($) => token(seq("/*", /.*/, "*/")),
  },
});
