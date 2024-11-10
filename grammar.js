const {
  KickAssemblerDirectives,
  AssemblerOpcodes,
} = require('./OpcodesAndDirectives');

const kickasmCodes = AssemblerOpcodes.map((item) => item.toLowerCase());
const ACCUMULATOR_MNEMONICS = ['asl', 'lsr', 'rol', 'ror', 'inc', 'dec'];

module.exports = grammar({
  name: 'asm6502',

  extras: ($) => [/\s+/, $.comment],
  word: ($) => $.keyword_identifier,
  conflicts: ($) => [[$.label]],

  rules: {
    // === Top Level Structure ===
    source_file: ($) => repeat($._statement),
    _statement: ($) =>
      choice($.directive, $.label, $.instruction, $.preprocessor_directive),

    // === Instructions and Addressing Modes ===
    mnemonic: ($) => prec(3, token(choice(...kickasmCodes))),

    accumulator_instruction: ($) =>
      seq(
        field('opcode', token(choice(...ACCUMULATOR_MNEMONICS))),
        field('operand', $.accumulator),
      ),

    instruction: ($) =>
      prec(
        2,
        choice(
          $.accumulator_instruction,
          prec.right(
            seq(
              field('opcode', $.mnemonic),
              optional(
                seq(
                  field('operand', $.operand),
                  repeat(
                    seq(
                      field('operator', $.operator),
                      field(
                        'value',
                        choice($.operand, $.identifier, $.number, $.value_type),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
        ),
      ),

    operand: ($) =>
      choice(
        field('accumulator', $.accumulator),
        '*',
        field('immediate', $.immediate),
        field('indexed', $.indexed),
        field('absolute', $.absolute),
        field('zero_page', $.zero_page),
        field('indirect', $.indirect),
        field('indirect_x', $.indirect_zeropage_x),
        field('indirect_y', $.indirect_zeropage_y),
        field('label', $.labelOp),
        field('relative', $.relative),
      ),

    accumulator: () => prec(4, token(choice('A', 'a'))),

    register_x: () => token(choice('x', 'X')),
    register_y: () => token(choice('y', 'Y')),

    indexed: ($) =>
      seq(
        choice($.identifierWithLoHi, $.one_byte_number, $.two_byte_number),
        ',',
        choice($.register_x, $.register_y),
      ),

    immediate: ($) => prec(2, seq('#', choice($.number, $.identifier))),
    absolute: ($) => prec(3, $.two_byte_number),
    zero_page: ($) => prec(2, $.one_byte_number),

    indirect: ($) =>
      seq('(', choice($.one_byte_number, $.two_byte_number), ')'),

    indirect_zeropage_x: ($) => seq('(', $.one_byte_number, ',', 'x', ')'),

    indirect_zeropage_y: ($) => seq('(', $.one_byte_number, ')', ',', 'y'),

    relative: ($) =>
      prec(
        1,
        prec.right(
          seq(
            field('label', $.identifier),
            optional(seq(':', field('offset', $.operand))),
          ),
        ),
      ),

    labelOp: ($) =>
      prec.left(
        1,
        choice(
          seq('!', '-', repeat('-')),
          seq('!', '+', repeat('+')),
          seq('!', $.identifier, optional(repeat1(choice('+', '-')))),
        ),
      ),

    // === Identifiers and Labels ===
    identifier: ($) =>
      token(choice(/[a-zA-Z_][a-zA-Z0-9_]+/, /[B-Zb-z_][a-zA-Z0-9_]*/)),

    keyword_identifier: ($) => /[a-z_]+/,

    label: ($) =>
      choice(
        seq(
          '.',
          'label',
          field('name', $.identifier),
          '=',
          field('value', choice($.identifier, $.number, $.address_value)),
          optional(
            repeat(
              seq(
                field('operator', $.operator),
                field('value', choice($.identifier, $.number, $.address_value)),
              ),
            ),
          ),
        ),
        seq(optional('!'), field('name', optional($.identifier)), ':'),
      ),

    // === Numbers ===
    number: ($) =>
      prec(
        1,
        choice(
          field('byte', $.one_byte_number),
          field('two_byte', $.two_byte_number),
          field('binary', $.binary_number),
          field('decimal', $.decimal_number),
          field('float', $.float),
        ),
      ),

    one_byte_number: ($) =>
      token(choice(seq('$', /[0-9a-fA-F]{2}/), /\d{1,3}/)),

    two_byte_number: ($) =>
      token(choice(seq('$', /[0-9a-fA-F]{4}/), /\d{1,5}/)),

    binary_number: ($) => token(seq('%', /[01]{1,6}/)),
    decimal_number: ($) => token(/\d+/),
    float: ($) => token(/-?\d+\.\d*/),

    // === Value Types ===
    value_type: ($) =>
      choice(
        field('address', $.address_value),
        field('binary', $.binary_file),
        field('boolean', $.boolean_value),
        field('char', $.char_value),
        field('hashtable', $.hashtable_value),
        field('list', $.list_value),
        field('matrix', $.matrix_value),
        field('null', $.null_value),
        field('number', $.number_value),
        field('file', $.output_file),
        field('picture', $.picture_value),
        field('sid', $.sid_file),
        field('string', $.string),
        field('struct', $.struct_value),
        field('vector', $.vector),
      ),

    address_value: ($) =>
      prec.right(
        2,
        choice(
          seq(
            '$',
            /[0-9a-fA-F]+/,
            optional(prec.left(1, seq(',', choice('x', 'y')))),
          ),
          seq(
            '(',
            '$',
            /[0-9a-fA-F]+/,
            ')',
            optional(prec.left(1, seq(',', choice('x', 'y')))),
          ),
        ),
      ),

    binary_file: ($) =>
      seq(
        'LoadBinary(',
        field('path', $.string),
        optional(seq(',', field('options', choice($.identifier, $.string)))),
        ')',
      ),

    boolean_value: () => choice('true', 'false'),
    char_value: () => seq('\'', /[^']/, '\''),
    null_value: () => 'null',

    hashtable_value: ($) =>
      seq('Hashtable(', optional(field('params', $.parameters)), ')'),

    list_value: ($) =>
      seq('List(', optional(field('items', commaSep($.value_type))), ')'),

    matrix_value: ($) =>
      seq('Matrix(', optional(field('values', commaSep($.number_value))), ')'),

    vector_value: ($) =>
      seq(
        field('x', $.decimal_number),
        field('y', $.decimal_number),
        field('z', $.decimal_number),
      ),

    vector: ($) => seq('Vector(', $.vector_value, ')'),

    number_value: ($) => choice($.decimal_number, $.float),

    output_file: ($) => seq('createFile(', field('filename', $.string), ')'),

    picture_value: ($) => seq('LoadPicture(', field('path', $.string), ')'),

    sid_file: ($) => seq('LoadSid(', field('path', $.string), ')'),

    struct_value: ($) =>
      seq(
        field('type', $.identifier),
        '(',
        optional(field('fields', commaSep($.value_type))),
        ')',
      ),

    // === Directives ===
    directives: () => token(choice(...KickAssemblerDirectives)),

    directive: ($) =>
      prec.right(
        choice(
          seq(
            '*',
            '=',
            field('value', choice($.identifier, $.number, $.string)),
            optional(
              repeat(
                seq(field('operator', $.operator), field('operand', $.number)),
              ),
            ),
            optional(field('segment', $.string)),
          ),
          seq(
            '.',
            field('directive', $.directives),
            seq(
              choice(
                $.identifier,
                $.parameters,
                $.parameter_block,
                commaSep(choice($.identifier, $.number, $.string)),
              ),
              optional(
                seq(
                  '=',
                  field(
                    'value',
                    choice($.binary_file, $.identifier, $.number, $.string),
                  ),
                ),
              ),
              optional($.parameters),
              optional($.parameter_block),
            ),
          ),
        ),
      ),

    // === Preprocessor ===
    preprocessor_directive: ($) =>
      seq(
        '#',
        field('directive', $.identifier),
        optional('!'),
        field('value', $.identifier),
      ),

    // === Parameters and Blocks ===
    parameters: ($) => seq('(', commaSep(field('param', $.identifier)), ')'),

    parameter_block: ($) => seq('{', repeat($._statement), '}'),

    // === Operators ===
    operator: ($) =>
      choice(
        choice('+', '-', '*', '/'),
        choice('<<', '>>', '&', '|', '^', '~'),
        choice('<', '>'),
      ),

    binary_operator: () =>
      token(choice('<', '>', '<=', '>=', '==', '!=', '&', '|', '^')),

    // === Misc ===
    lohi: ($) => seq('.', choice('lo', 'hi')),

    identifierWithLoHi: ($) =>
      seq(field('base', $.identifier), optional(field('selector', $.lohi))),

    string: () =>
      choice(
        token(seq('"', /[^"]*/, '"')),
        token(
          seq(
            '@',
            '"',
            repeat(
              choice(
                /[^"\\]+/,
                seq(
                  '\\',
                  choice(
                    // Escape sequences
                    'b', // backspace
                    'f', // form feed
                    'n', // newline
                    'r', // carriage return
                    't', // tab
                    '"', // quote
                    '\\', // backslash
                    seq('$', /[0-9a-fA-F]{2}/), // hex value like \$ff
                  ),
                ),
              ),
            ),
            '"',
          ),
        ),
      ),

    comment: ($) =>
      token(
        choice(
          seq('//', /[^\r\n\u2028\u2029]*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
        ),
      ),
  },
});

/**
 *
 * @param rule
 */
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
