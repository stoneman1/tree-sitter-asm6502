#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_BANG = 2,
  anon_sym_COLON = 3,
  anon_sym_POUND = 4,
  sym_mnemonic = 5,
  anon_sym_STAR = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  anon_sym_COMMA = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_directives = 14,
  anon_sym_x = 15,
  anon_sym_y = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  sym_accumulator = 19,
  sym_one_byte_number = 20,
  sym_two_byte_number = 21,
  sym_binary_number = 22,
  sym_decimal_number = 23,
  anon_sym_lo = 24,
  anon_sym_hi = 25,
  anon_sym_SLASH = 26,
  anon_sym_GT = 27,
  anon_sym_LT = 28,
  anon_sym_LT_LT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_AMP = 31,
  anon_sym_PIPE = 32,
  anon_sym_CARET = 33,
  anon_sym_TILDE = 34,
  sym_string = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym__statement = 38,
  sym_label = 39,
  sym_preprocessor_directive = 40,
  sym_instruction = 41,
  sym_identOrNumber = 42,
  sym_all_choices = 43,
  sym_directive = 44,
  sym_parameters = 45,
  sym_parameter_block = 46,
  sym_operand = 47,
  sym_indexed = 48,
  sym_immediate = 49,
  sym_absolute = 50,
  sym_zero_page = 51,
  sym_indirect = 52,
  sym_indirect_zeropage_x = 53,
  sym_indirect_zeropage_y = 54,
  sym_relative = 55,
  sym_labelOp = 56,
  sym_any_number = 57,
  sym_lohi = 58,
  sym_identifierWithLoHi = 59,
  sym_operator = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_directive_repeat1 = 62,
  aux_sym_directive_repeat2 = 63,
  aux_sym_parameters_repeat1 = 64,
  aux_sym_labelOp_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [sym_mnemonic] = "mnemonic",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_directives] = "directives",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_accumulator] = "accumulator",
  [sym_one_byte_number] = "one_byte_number",
  [sym_two_byte_number] = "two_byte_number",
  [sym_binary_number] = "binary_number",
  [sym_decimal_number] = "decimal_number",
  [anon_sym_lo] = "lo",
  [anon_sym_hi] = "hi",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_preprocessor_directive] = "preprocessor_directive",
  [sym_instruction] = "instruction",
  [sym_identOrNumber] = "identOrNumber",
  [sym_all_choices] = "all_choices",
  [sym_directive] = "directive",
  [sym_parameters] = "parameters",
  [sym_parameter_block] = "parameter_block",
  [sym_operand] = "operand",
  [sym_indexed] = "indexed",
  [sym_immediate] = "immediate",
  [sym_absolute] = "absolute",
  [sym_zero_page] = "zero_page",
  [sym_indirect] = "indirect",
  [sym_indirect_zeropage_x] = "indirect_zeropage_x",
  [sym_indirect_zeropage_y] = "indirect_zeropage_y",
  [sym_relative] = "relative",
  [sym_labelOp] = "labelOp",
  [sym_any_number] = "any_number",
  [sym_lohi] = "lohi",
  [sym_identifierWithLoHi] = "identifierWithLoHi",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_labelOp_repeat1] = "labelOp_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_mnemonic] = sym_mnemonic,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_directives] = sym_directives,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_accumulator] = sym_accumulator,
  [sym_one_byte_number] = sym_one_byte_number,
  [sym_two_byte_number] = sym_two_byte_number,
  [sym_binary_number] = sym_binary_number,
  [sym_decimal_number] = sym_decimal_number,
  [anon_sym_lo] = anon_sym_lo,
  [anon_sym_hi] = anon_sym_hi,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_preprocessor_directive] = sym_preprocessor_directive,
  [sym_instruction] = sym_instruction,
  [sym_identOrNumber] = sym_identOrNumber,
  [sym_all_choices] = sym_all_choices,
  [sym_directive] = sym_directive,
  [sym_parameters] = sym_parameters,
  [sym_parameter_block] = sym_parameter_block,
  [sym_operand] = sym_operand,
  [sym_indexed] = sym_indexed,
  [sym_immediate] = sym_immediate,
  [sym_absolute] = sym_absolute,
  [sym_zero_page] = sym_zero_page,
  [sym_indirect] = sym_indirect,
  [sym_indirect_zeropage_x] = sym_indirect_zeropage_x,
  [sym_indirect_zeropage_y] = sym_indirect_zeropage_y,
  [sym_relative] = sym_relative,
  [sym_labelOp] = sym_labelOp,
  [sym_any_number] = sym_any_number,
  [sym_lohi] = sym_lohi,
  [sym_identifierWithLoHi] = sym_identifierWithLoHi,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_labelOp_repeat1] = aux_sym_labelOp_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_directives] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_accumulator] = {
    .visible = true,
    .named = true,
  },
  [sym_one_byte_number] = {
    .visible = true,
    .named = true,
  },
  [sym_two_byte_number] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_number] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_identOrNumber] = {
    .visible = true,
    .named = true,
  },
  [sym_all_choices] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_block] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_indexed] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_page] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect_zeropage_x] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect_zeropage_y] = {
    .visible = true,
    .named = true,
  },
  [sym_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_labelOp] = {
    .visible = true,
    .named = true,
  },
  [sym_any_number] = {
    .visible = true,
    .named = true,
  },
  [sym_lohi] = {
    .visible = true,
    .named = true,
  },
  [sym_identifierWithLoHi] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labelOp_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '!', 144,
        '"', 1,
        '#', 146,
        '$', 138,
        '%', 135,
        '&', 333,
        '(', 151,
        ')', 152,
        '*', 147,
        '+', 180,
        ',', 150,
        '-', 179,
        '.', 149,
        '/', 328,
        ':', 145,
        '<', 330,
        '=', 148,
        '>', 329,
        '^', 335,
        'a', 258,
        'b', 300,
        'c', 280,
        'd', 222,
        'e', 270,
        'f', 246,
        'i', 235,
        'l', 199,
        'm', 200,
        'n', 204,
        'p', 209,
        'r', 224,
        's', 225,
        't', 226,
        'v', 202,
        'w', 244,
        'z', 293,
        '{', 153,
        '|', 334,
        '}', 154,
        '~', 336,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(337);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 155,
        '/', 3,
        'a', 67,
        'b', 108,
        'c', 89,
        'd', 31,
        'e', 79,
        'f', 54,
        'i', 44,
        'l', 7,
        'm', 8,
        'n', 12,
        'p', 18,
        'r', 32,
        's', 33,
        't', 34,
        'v', 10,
        'w', 52,
        'z', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '!', 144,
        '"', 1,
        '#', 146,
        '$', 138,
        '%', 135,
        '&', 333,
        '(', 151,
        ')', 152,
        '*', 147,
        '+', 180,
        ',', 150,
        '-', 179,
        '.', 149,
        '/', 328,
        ':', 145,
        '<', 330,
        '=', 148,
        '>', 329,
        '^', 335,
        '{', 153,
        '|', 334,
        '}', 154,
        '~', 336,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_directives);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'w') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'x') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_directives);
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_directives);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_two_byte_number);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_binary_number);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_decimal_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'w') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 's') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(339);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'a', 2,
        'b', 3,
        'c', 4,
        'd', 5,
        'e', 6,
        'h', 7,
        'i', 8,
        'j', 9,
        'l', 10,
        'n', 11,
        'o', 12,
        'p', 13,
        'r', 14,
        's', 15,
        't', 16,
        'w', 17,
        'x', 18,
        'y', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_accumulator);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'c', 25,
        'e', 26,
        'i', 27,
        'm', 28,
        'n', 29,
        'p', 30,
        'r', 31,
        'v', 32,
      );
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'a', 57,
        'b', 58,
        'e', 59,
        'h', 60,
        'i', 61,
        'l', 62,
        'r', 63,
        't', 64,
      );
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'q') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'c' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_hi);
      END_STATE();
    case 40:
      if (lookahead == 'c' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 's' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_lo);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'a' ||
          lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'a' ||
          lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'i' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'c' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'c' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'a' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'a' ||
          ('x' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 's' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'b' ||
          lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'a' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_mnemonic);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 142},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 142},
  [6] = {.lex_state = 142},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 142},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 142},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 142},
  [26] = {.lex_state = 142},
  [27] = {.lex_state = 142},
  [28] = {.lex_state = 142},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 142},
  [31] = {.lex_state = 142},
  [32] = {.lex_state = 142},
  [33] = {.lex_state = 142},
  [34] = {.lex_state = 142},
  [35] = {.lex_state = 142},
  [36] = {.lex_state = 142},
  [37] = {.lex_state = 142},
  [38] = {.lex_state = 142},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 142},
  [42] = {.lex_state = 142},
  [43] = {.lex_state = 142},
  [44] = {.lex_state = 142},
  [45] = {.lex_state = 142},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 142},
  [48] = {.lex_state = 142},
  [49] = {.lex_state = 142},
  [50] = {.lex_state = 142},
  [51] = {.lex_state = 142},
  [52] = {.lex_state = 142},
  [53] = {.lex_state = 142},
  [54] = {.lex_state = 142},
  [55] = {.lex_state = 142},
  [56] = {.lex_state = 142},
  [57] = {.lex_state = 142},
  [58] = {.lex_state = 142},
  [59] = {.lex_state = 142},
  [60] = {.lex_state = 142},
  [61] = {.lex_state = 142},
  [62] = {.lex_state = 142},
  [63] = {.lex_state = 142},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 142},
  [72] = {.lex_state = 142},
  [73] = {.lex_state = 142},
  [74] = {.lex_state = 142},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 142},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 142},
  [82] = {.lex_state = 142},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 142},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 142},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_mnemonic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_directives] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_accumulator] = ACTIONS(1),
    [sym_one_byte_number] = ACTIONS(1),
    [sym_two_byte_number] = ACTIONS(1),
    [sym_binary_number] = ACTIONS(1),
    [sym_decimal_number] = ACTIONS(1),
    [anon_sym_lo] = ACTIONS(1),
    [anon_sym_hi] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym__statement] = STATE(17),
    [sym_label] = STATE(17),
    [sym_preprocessor_directive] = STATE(17),
    [sym_instruction] = STATE(17),
    [sym_directive] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_mnemonic] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_mnemonic,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_accumulator,
    ACTIONS(37), 1,
      sym_one_byte_number,
    ACTIONS(39), 1,
      sym_two_byte_number,
    STATE(46), 1,
      sym_operand,
    STATE(90), 1,
      sym_identifierWithLoHi,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_RBRACE,
    STATE(42), 9,
      sym_indexed,
      sym_immediate,
      sym_absolute,
      sym_zero_page,
      sym_indirect,
      sym_indirect_zeropage_x,
      sym_indirect_zeropage_y,
      sym_relative,
      sym_labelOp,
  [54] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_directive_repeat1,
    STATE(65), 1,
      sym_operator,
    ACTIONS(43), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(45), 9,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
  [92] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_directive_repeat1,
    STATE(65), 1,
      sym_operator,
    ACTIONS(51), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(56), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(53), 9,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
  [130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_directive_repeat1,
    STATE(65), 1,
      sym_operator,
    ACTIONS(61), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(47), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(45), 9,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      sym_mnemonic,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 15,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      sym_mnemonic,
      sym_identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 15,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_TILDE,
  [224] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_mnemonic,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_binary_number,
    ACTIONS(83), 1,
      sym_string,
    STATE(10), 1,
      sym_any_number,
    STATE(14), 2,
      sym_parameters,
      sym_parameter_block,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_accumulator,
    ACTIONS(37), 1,
      sym_one_byte_number,
    ACTIONS(39), 1,
      sym_two_byte_number,
    STATE(45), 1,
      sym_operand,
    STATE(90), 1,
      sym_identifierWithLoHi,
    STATE(42), 9,
      sym_indexed,
      sym_immediate,
      sym_absolute,
      sym_zero_page,
      sym_indirect,
      sym_indirect_zeropage_x,
      sym_indirect_zeropage_y,
      sym_relative,
      sym_labelOp,
  [315] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_directive_repeat2,
    STATE(31), 1,
      sym_parameters,
    STATE(47), 1,
      sym_parameter_block,
    ACTIONS(61), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [353] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_EQ,
    STATE(13), 1,
      aux_sym_directive_repeat2,
    STATE(33), 1,
      sym_parameters,
    STATE(51), 1,
      sym_parameter_block,
    ACTIONS(43), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [391] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_mnemonic,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(12), 6,
      sym__statement,
      sym_label,
      sym_preprocessor_directive,
      sym_instruction,
      sym_directive,
      aux_sym_source_file_repeat1,
  [428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_directive_repeat2,
    ACTIONS(116), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [454] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_parameters,
    STATE(47), 1,
      sym_parameter_block,
    ACTIONS(61), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [486] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(12), 6,
      sym__statement,
      sym_label,
      sym_preprocessor_directive,
      sym_instruction,
      sym_directive,
      aux_sym_source_file_repeat1,
  [522] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(15), 6,
      sym__statement,
      sym_label,
      sym_preprocessor_directive,
      sym_instruction,
      sym_directive,
      aux_sym_source_file_repeat1,
  [558] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(12), 6,
      sym__statement,
      sym_label,
      sym_preprocessor_directive,
      sym_instruction,
      sym_directive,
      aux_sym_source_file_repeat1,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_parameters,
    STATE(51), 1,
      sym_parameter_block,
    ACTIONS(43), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_parameters,
    STATE(56), 1,
      sym_parameter_block,
    ACTIONS(133), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [694] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_parameters,
    STATE(54), 1,
      sym_parameter_block,
    ACTIONS(137), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_labelOp_repeat1,
    ACTIONS(141), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(143), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_labelOp_repeat1,
    ACTIONS(151), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(155), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_labelOp_repeat1,
    ACTIONS(161), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_parameter_block,
    ACTIONS(43), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_parameter_block,
    ACTIONS(137), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_parameter_block,
    ACTIONS(133), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      sym_lohi,
    ACTIONS(184), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_parameter_block,
    ACTIONS(192), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(196), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(202), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(208), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(242), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(246), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(250), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym_mnemonic,
      sym_identifier,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [1397] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_binary_number,
    STATE(22), 1,
      sym_all_choices,
    STATE(32), 1,
      sym_any_number,
    ACTIONS(262), 2,
      sym_identifier,
      sym_string,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
  [1419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_binary_number,
    STATE(20), 1,
      sym_all_choices,
    STATE(32), 1,
      sym_any_number,
    ACTIONS(262), 2,
      sym_identifier,
      sym_string,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
  [1441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_binary_number,
    STATE(19), 1,
      sym_all_choices,
    STATE(32), 1,
      sym_any_number,
    ACTIONS(262), 2,
      sym_identifier,
      sym_string,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
  [1463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_binary_number,
    STATE(21), 1,
      sym_any_number,
    ACTIONS(264), 2,
      sym_identifier,
      sym_string,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
  [1482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_binary_number,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(50), 1,
      sym_any_number,
    ACTIONS(79), 3,
      sym_one_byte_number,
      sym_two_byte_number,
      sym_decimal_number,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_identifier,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameters_repeat1,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(7), 1,
      sym_identOrNumber,
    ACTIONS(274), 2,
      sym_two_byte_number,
      sym_identifier,
  [1533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_identOrNumber,
    ACTIONS(274), 2,
      sym_two_byte_number,
      sym_identifier,
  [1544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameters_repeat1,
  [1557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameters_repeat1,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_two_byte_number,
      sym_identifier,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_x,
      anon_sym_y,
  [1606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [1616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_BANG,
  [1626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_one_byte_number,
    ACTIONS(305), 1,
      sym_two_byte_number,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [1658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_y,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_EQ,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_identifier,
  [1686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_directives,
  [1707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COLON,
  [1714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [1721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_COMMA,
  [1728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
  [1735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [1742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_x,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 270,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 391,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 558,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 673,
  [SMALL_STATE(22)] = 694,
  [SMALL_STATE(23)] = 723,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 791,
  [SMALL_STATE(27)] = 811,
  [SMALL_STATE(28)] = 835,
  [SMALL_STATE(29)] = 855,
  [SMALL_STATE(30)] = 875,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 937,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 1008,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1051,
  [SMALL_STATE(39)] = 1071,
  [SMALL_STATE(40)] = 1091,
  [SMALL_STATE(41)] = 1108,
  [SMALL_STATE(42)] = 1125,
  [SMALL_STATE(43)] = 1142,
  [SMALL_STATE(44)] = 1159,
  [SMALL_STATE(45)] = 1176,
  [SMALL_STATE(46)] = 1193,
  [SMALL_STATE(47)] = 1210,
  [SMALL_STATE(48)] = 1227,
  [SMALL_STATE(49)] = 1244,
  [SMALL_STATE(50)] = 1261,
  [SMALL_STATE(51)] = 1278,
  [SMALL_STATE(52)] = 1295,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1329,
  [SMALL_STATE(55)] = 1346,
  [SMALL_STATE(56)] = 1363,
  [SMALL_STATE(57)] = 1380,
  [SMALL_STATE(58)] = 1397,
  [SMALL_STATE(59)] = 1419,
  [SMALL_STATE(60)] = 1441,
  [SMALL_STATE(61)] = 1463,
  [SMALL_STATE(62)] = 1482,
  [SMALL_STATE(63)] = 1500,
  [SMALL_STATE(64)] = 1509,
  [SMALL_STATE(65)] = 1522,
  [SMALL_STATE(66)] = 1533,
  [SMALL_STATE(67)] = 1544,
  [SMALL_STATE(68)] = 1557,
  [SMALL_STATE(69)] = 1570,
  [SMALL_STATE(70)] = 1578,
  [SMALL_STATE(71)] = 1588,
  [SMALL_STATE(72)] = 1598,
  [SMALL_STATE(73)] = 1606,
  [SMALL_STATE(74)] = 1616,
  [SMALL_STATE(75)] = 1626,
  [SMALL_STATE(76)] = 1636,
  [SMALL_STATE(77)] = 1644,
  [SMALL_STATE(78)] = 1651,
  [SMALL_STATE(79)] = 1658,
  [SMALL_STATE(80)] = 1665,
  [SMALL_STATE(81)] = 1672,
  [SMALL_STATE(82)] = 1679,
  [SMALL_STATE(83)] = 1686,
  [SMALL_STATE(84)] = 1693,
  [SMALL_STATE(85)] = 1700,
  [SMALL_STATE(86)] = 1707,
  [SMALL_STATE(87)] = 1714,
  [SMALL_STATE(88)] = 1721,
  [SMALL_STATE(89)] = 1728,
  [SMALL_STATE(90)] = 1735,
  [SMALL_STATE(91)] = 1742,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identOrNumber, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identOrNumber, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat2, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, 0, 0), SHIFT_REPEAT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_number, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_number, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labelOp, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labelOp, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_block, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labelOp, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labelOp, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_labelOp_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_labelOp_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_labelOp_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all_choices, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_all_choices, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierWithLoHi, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_page, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_page, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor_directive, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor_directive, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_zeropage_x, 5, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_zeropage_x, 5, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_zeropage_y, 5, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_zeropage_y, 5, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 8, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lohi, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifierWithLoHi, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asm6502(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
