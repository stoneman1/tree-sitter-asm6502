module.exports = grammar({
  name: "asm6502",

  // Define comments and extras
  extras: ($) => [
    /\s+/, // Allow whitespace
    $.line_comment,
    $.block_comment,
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    // A statement is either a label, instruction or directive
    _statement: ($) => choice($.instruction, $.label), //, $.directive),

    // Labels are identifiers followed by a colon
    label: ($) => seq($.identifier, ":"),

    // Instructions are composed of a mnemonic and an optional operand
    instruction: ($) => prec.right(seq($.mnemonic, optional($.operand))),

    // Full list of 6502 mnemonics
    mnemonic: ($) =>
      choice(
        "adc",
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

    data_directive: ($) =>
      choice("byte", "word", "text", "dword", "by", "wo", "dw"),

    other_directive: ($) => choice("fill", "fillword", "lohifill", "encoding"),

    // Operand definitions for different addressing modes
    operand: ($) =>
      choice(
        $.immediate,
        $.absolute_x,
        $.absolute_y,
        $.absolute,
        $.zero_page_x,
        $.zero_page_y,
        $.zero_page,
        $.indirect,
        $.indirect_zeropage,
        $.indirect_zeropage_x,
        $.indirect_zeropage_y,
        $.relative,
        $.accumulator,
      ),

    absolute_x: ($) => seq(prec(1, $.two_byte_number), ",", "x"),

    absolute_y: ($) => seq(prec(1, $.two_byte_number), ",", "y"),

    immediate: ($) =>
      prec(2, seq("#", choice($.binary_number, $.one_byte_number))),

    absolute: ($) => $.two_byte_number,

    zero_page_x: ($) => seq($.one_byte_number, ",", "x"),

    zero_page_y: ($) => seq($.one_byte_number, ",", "y"),

    zero_page: ($) => $.one_byte_number,

    indirect: ($) => seq("(", $.two_byte_number, ")"),

    indirect_zeropage: ($) => seq("(", $.one_byte_number, ")"),

    indirect_zeropage_x: ($) => seq("(", $.one_byte_number, ",", "x", ")"),

    indirect_zeropage_y: ($) => seq("(", $.one_byte_number, ")", ",", "y"),

    relative: ($) => $.identifier,

    accumulator: ($) => "A",

    // Adjusted to allow wider memory ranges, including both decimal and hex addresses
    one_byte_number: ($) =>
      token(choice(seq("$", /[0-9a-fA-F]{2}/), /\d{1,3}/)), // One-byte numbers for zero-page
    two_byte_number: ($) =>
      token(choice(seq("$", /[0-9a-fA-F]{4}/), /\d{1,5}/)), // Two-byte numbers for full memory addresses
    binary_number: ($) => token(seq("%", /[01]{1,6}/)), // Binary numbers like %101010

    // Identifiers for labels and relative branches
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    current_program_counter: ($) => token("*"),

    // KickAssembler-style comments (using `//` and `/* */`)
    line_comment: ($) => token(seq("//", /[^\r\n\u2028\u2029]*/)),
    block_comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
