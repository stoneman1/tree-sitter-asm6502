#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_adc = 2,
  anon_sym_and = 3,
  anon_sym_asl = 4,
  anon_sym_bcc = 5,
  anon_sym_bcs = 6,
  anon_sym_beq = 7,
  anon_sym_bit = 8,
  anon_sym_bmi = 9,
  anon_sym_bne = 10,
  anon_sym_bpl = 11,
  anon_sym_brk = 12,
  anon_sym_bvc = 13,
  anon_sym_bvs = 14,
  anon_sym_clc = 15,
  anon_sym_cld = 16,
  anon_sym_cli = 17,
  anon_sym_clv = 18,
  anon_sym_cmp = 19,
  anon_sym_cpx = 20,
  anon_sym_cpy = 21,
  anon_sym_dec = 22,
  anon_sym_dex = 23,
  anon_sym_dey = 24,
  anon_sym_eor = 25,
  anon_sym_inc = 26,
  anon_sym_inx = 27,
  anon_sym_iny = 28,
  anon_sym_jmp = 29,
  anon_sym_jsr = 30,
  anon_sym_lda = 31,
  anon_sym_ldx = 32,
  anon_sym_ldy = 33,
  anon_sym_lsr = 34,
  anon_sym_nop = 35,
  anon_sym_ora = 36,
  anon_sym_pha = 37,
  anon_sym_php = 38,
  anon_sym_pla = 39,
  anon_sym_plp = 40,
  anon_sym_rol = 41,
  anon_sym_ror = 42,
  anon_sym_rti = 43,
  anon_sym_rts = 44,
  anon_sym_sbc = 45,
  anon_sym_sec = 46,
  anon_sym_sed = 47,
  anon_sym_sei = 48,
  anon_sym_sta = 49,
  anon_sym_stx = 50,
  anon_sym_sty = 51,
  anon_sym_tax = 52,
  anon_sym_tay = 53,
  anon_sym_tsx = 54,
  anon_sym_txa = 55,
  anon_sym_txs = 56,
  anon_sym_tya = 57,
  anon_sym_COMMA = 58,
  anon_sym_x = 59,
  anon_sym_y = 60,
  anon_sym_POUND = 61,
  anon_sym_LPAREN = 62,
  anon_sym_RPAREN = 63,
  sym_accumulator = 64,
  sym_one_byte_number = 65,
  sym_two_byte_number = 66,
  sym_binary_number = 67,
  sym_identifier = 68,
  sym_line_comment = 69,
  sym_block_comment = 70,
  sym_source_file = 71,
  sym__statement = 72,
  sym_label = 73,
  sym_instruction = 74,
  sym_mnemonic = 75,
  sym_operand = 76,
  sym_absolute_x = 77,
  sym_absolute_y = 78,
  sym_immediate = 79,
  sym_absolute = 80,
  sym_zero_page_x = 81,
  sym_zero_page_y = 82,
  sym_zero_page = 83,
  sym_indirect = 84,
  sym_indirect_zeropage = 85,
  sym_indirect_zeropage_x = 86,
  sym_indirect_zeropage_y = 87,
  sym_relative = 88,
  aux_sym_source_file_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_adc] = "adc",
  [anon_sym_and] = "and",
  [anon_sym_asl] = "asl",
  [anon_sym_bcc] = "bcc",
  [anon_sym_bcs] = "bcs",
  [anon_sym_beq] = "beq",
  [anon_sym_bit] = "bit",
  [anon_sym_bmi] = "bmi",
  [anon_sym_bne] = "bne",
  [anon_sym_bpl] = "bpl",
  [anon_sym_brk] = "brk",
  [anon_sym_bvc] = "bvc",
  [anon_sym_bvs] = "bvs",
  [anon_sym_clc] = "clc",
  [anon_sym_cld] = "cld",
  [anon_sym_cli] = "cli",
  [anon_sym_clv] = "clv",
  [anon_sym_cmp] = "cmp",
  [anon_sym_cpx] = "cpx",
  [anon_sym_cpy] = "cpy",
  [anon_sym_dec] = "dec",
  [anon_sym_dex] = "dex",
  [anon_sym_dey] = "dey",
  [anon_sym_eor] = "eor",
  [anon_sym_inc] = "inc",
  [anon_sym_inx] = "inx",
  [anon_sym_iny] = "iny",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jsr] = "jsr",
  [anon_sym_lda] = "lda",
  [anon_sym_ldx] = "ldx",
  [anon_sym_ldy] = "ldy",
  [anon_sym_lsr] = "lsr",
  [anon_sym_nop] = "nop",
  [anon_sym_ora] = "ora",
  [anon_sym_pha] = "pha",
  [anon_sym_php] = "php",
  [anon_sym_pla] = "pla",
  [anon_sym_plp] = "plp",
  [anon_sym_rol] = "rol",
  [anon_sym_ror] = "ror",
  [anon_sym_rti] = "rti",
  [anon_sym_rts] = "rts",
  [anon_sym_sbc] = "sbc",
  [anon_sym_sec] = "sec",
  [anon_sym_sed] = "sed",
  [anon_sym_sei] = "sei",
  [anon_sym_sta] = "sta",
  [anon_sym_stx] = "stx",
  [anon_sym_sty] = "sty",
  [anon_sym_tax] = "tax",
  [anon_sym_tay] = "tay",
  [anon_sym_tsx] = "tsx",
  [anon_sym_txa] = "txa",
  [anon_sym_txs] = "txs",
  [anon_sym_tya] = "tya",
  [anon_sym_COMMA] = ",",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_accumulator] = "accumulator",
  [sym_one_byte_number] = "one_byte_number",
  [sym_two_byte_number] = "two_byte_number",
  [sym_binary_number] = "binary_number",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_mnemonic] = "mnemonic",
  [sym_operand] = "operand",
  [sym_absolute_x] = "absolute_x",
  [sym_absolute_y] = "absolute_y",
  [sym_immediate] = "immediate",
  [sym_absolute] = "absolute",
  [sym_zero_page_x] = "zero_page_x",
  [sym_zero_page_y] = "zero_page_y",
  [sym_zero_page] = "zero_page",
  [sym_indirect] = "indirect",
  [sym_indirect_zeropage] = "indirect_zeropage",
  [sym_indirect_zeropage_x] = "indirect_zeropage_x",
  [sym_indirect_zeropage_y] = "indirect_zeropage_y",
  [sym_relative] = "relative",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_adc] = anon_sym_adc,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_asl] = anon_sym_asl,
  [anon_sym_bcc] = anon_sym_bcc,
  [anon_sym_bcs] = anon_sym_bcs,
  [anon_sym_beq] = anon_sym_beq,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_bmi] = anon_sym_bmi,
  [anon_sym_bne] = anon_sym_bne,
  [anon_sym_bpl] = anon_sym_bpl,
  [anon_sym_brk] = anon_sym_brk,
  [anon_sym_bvc] = anon_sym_bvc,
  [anon_sym_bvs] = anon_sym_bvs,
  [anon_sym_clc] = anon_sym_clc,
  [anon_sym_cld] = anon_sym_cld,
  [anon_sym_cli] = anon_sym_cli,
  [anon_sym_clv] = anon_sym_clv,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_cpx] = anon_sym_cpx,
  [anon_sym_cpy] = anon_sym_cpy,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_dex] = anon_sym_dex,
  [anon_sym_dey] = anon_sym_dey,
  [anon_sym_eor] = anon_sym_eor,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_inx] = anon_sym_inx,
  [anon_sym_iny] = anon_sym_iny,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jsr] = anon_sym_jsr,
  [anon_sym_lda] = anon_sym_lda,
  [anon_sym_ldx] = anon_sym_ldx,
  [anon_sym_ldy] = anon_sym_ldy,
  [anon_sym_lsr] = anon_sym_lsr,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_ora] = anon_sym_ora,
  [anon_sym_pha] = anon_sym_pha,
  [anon_sym_php] = anon_sym_php,
  [anon_sym_pla] = anon_sym_pla,
  [anon_sym_plp] = anon_sym_plp,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_rti] = anon_sym_rti,
  [anon_sym_rts] = anon_sym_rts,
  [anon_sym_sbc] = anon_sym_sbc,
  [anon_sym_sec] = anon_sym_sec,
  [anon_sym_sed] = anon_sym_sed,
  [anon_sym_sei] = anon_sym_sei,
  [anon_sym_sta] = anon_sym_sta,
  [anon_sym_stx] = anon_sym_stx,
  [anon_sym_sty] = anon_sym_sty,
  [anon_sym_tax] = anon_sym_tax,
  [anon_sym_tay] = anon_sym_tay,
  [anon_sym_tsx] = anon_sym_tsx,
  [anon_sym_txa] = anon_sym_txa,
  [anon_sym_txs] = anon_sym_txs,
  [anon_sym_tya] = anon_sym_tya,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_accumulator] = sym_accumulator,
  [sym_one_byte_number] = sym_one_byte_number,
  [sym_two_byte_number] = sym_two_byte_number,
  [sym_binary_number] = sym_binary_number,
  [sym_identifier] = sym_identifier,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_mnemonic] = sym_mnemonic,
  [sym_operand] = sym_operand,
  [sym_absolute_x] = sym_absolute_x,
  [sym_absolute_y] = sym_absolute_y,
  [sym_immediate] = sym_immediate,
  [sym_absolute] = sym_absolute,
  [sym_zero_page_x] = sym_zero_page_x,
  [sym_zero_page_y] = sym_zero_page_y,
  [sym_zero_page] = sym_zero_page,
  [sym_indirect] = sym_indirect,
  [sym_indirect_zeropage] = sym_indirect_zeropage,
  [sym_indirect_zeropage_x] = sym_indirect_zeropage_x,
  [sym_indirect_zeropage_y] = sym_indirect_zeropage_y,
  [sym_relative] = sym_relative,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bmi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bvs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ldy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ora] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pha] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_php] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tsx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tya] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute_x] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute_y] = {
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
  [sym_zero_page_x] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_page_y] = {
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
  [sym_indirect_zeropage] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '#', 177,
        '$', 56,
        '%', 52,
        '(', 178,
        ')', 179,
        ',', 174,
        '/', 1,
        ':', 61,
        'A', 180,
        'a', 22,
        'b', 13,
        'c', 31,
        'd', 25,
        'e', 38,
        'i', 36,
        'j', 35,
        'l', 23,
        'n', 39,
        'o', 44,
        'p', 27,
        'r', 37,
        's', 12,
        't', 11,
        'x', 175,
        'y', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'c', 15,
        'e', 43,
        'i', 48,
        'm', 28,
        'n', 26,
        'p', 33,
        'r', 30,
        'v', 16,
      );
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'q') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(166);
      END_STATE();
    case 52:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '#', 177,
        '$', 56,
        '(', 178,
        '/', 1,
        'A', 181,
        'a', 215,
        'b', 206,
        'c', 224,
        'd', 218,
        'e', 231,
        'i', 229,
        'j', 228,
        'l', 216,
        'n', 232,
        'o', 237,
        'p', 220,
        'r', 230,
        's', 205,
        't', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '$', 57,
        '%', 52,
        ',', 174,
        '/', 1,
        'a', 215,
        'b', 206,
        'c', 224,
        'd', 218,
        'e', 231,
        'i', 229,
        'j', 228,
        'l', 216,
        'n', 232,
        'o', 237,
        'p', 220,
        'r', 230,
        's', 205,
        't', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_adc);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_adc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_asl);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_asl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bcc);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bcs);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_beq);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_beq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bmi);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bne);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_bpl);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_brk);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_brk);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_bvc);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_bvs);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_clc);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_clc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_cld);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_cld);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_cli);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_cli);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_clv);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_clv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_cpx);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_cpx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_cpy);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_cpy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_dec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_dex);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_dex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_dey);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_dey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_eor);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_eor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_inx);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_inx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_iny);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_iny);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_jsr);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_lda);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_lda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ldx);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ldy);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_lsr);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ora);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ora);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_pha);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_pha);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_php);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_php);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_pla);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_plp);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_plp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_rol);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_rol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ror);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_rti);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_rti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_rts);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_rts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_sbc);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_sbc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_sec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_sed);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_sed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_sei);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_sei);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_sta);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_sta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_stx);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_stx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_sty);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_sty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_tax);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_tax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tay);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_tay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_tsx);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_tsx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_txa);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_txa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_txs);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_txs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_tya);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_tya);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_accumulator);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_accumulator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_one_byte_number);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_one_byte_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_two_byte_number);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_two_byte_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_binary_number);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_binary_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead == 'y') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'c', 208,
        'e', 236,
        'i', 241,
        'm', 221,
        'n', 219,
        'p', 226,
        'r', 223,
        'v', 209,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 59},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 59},
  [19] = {.lex_state = 59},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_adc] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_asl] = ACTIONS(1),
    [anon_sym_bcc] = ACTIONS(1),
    [anon_sym_bcs] = ACTIONS(1),
    [anon_sym_beq] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_bmi] = ACTIONS(1),
    [anon_sym_bne] = ACTIONS(1),
    [anon_sym_bpl] = ACTIONS(1),
    [anon_sym_brk] = ACTIONS(1),
    [anon_sym_bvc] = ACTIONS(1),
    [anon_sym_bvs] = ACTIONS(1),
    [anon_sym_clc] = ACTIONS(1),
    [anon_sym_cld] = ACTIONS(1),
    [anon_sym_cli] = ACTIONS(1),
    [anon_sym_clv] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_cpx] = ACTIONS(1),
    [anon_sym_cpy] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [anon_sym_dex] = ACTIONS(1),
    [anon_sym_dey] = ACTIONS(1),
    [anon_sym_eor] = ACTIONS(1),
    [anon_sym_inc] = ACTIONS(1),
    [anon_sym_inx] = ACTIONS(1),
    [anon_sym_iny] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jsr] = ACTIONS(1),
    [anon_sym_lda] = ACTIONS(1),
    [anon_sym_ldx] = ACTIONS(1),
    [anon_sym_ldy] = ACTIONS(1),
    [anon_sym_lsr] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_ora] = ACTIONS(1),
    [anon_sym_pha] = ACTIONS(1),
    [anon_sym_php] = ACTIONS(1),
    [anon_sym_pla] = ACTIONS(1),
    [anon_sym_plp] = ACTIONS(1),
    [anon_sym_rol] = ACTIONS(1),
    [anon_sym_ror] = ACTIONS(1),
    [anon_sym_rti] = ACTIONS(1),
    [anon_sym_rts] = ACTIONS(1),
    [anon_sym_sbc] = ACTIONS(1),
    [anon_sym_sec] = ACTIONS(1),
    [anon_sym_sed] = ACTIONS(1),
    [anon_sym_sei] = ACTIONS(1),
    [anon_sym_sta] = ACTIONS(1),
    [anon_sym_stx] = ACTIONS(1),
    [anon_sym_sty] = ACTIONS(1),
    [anon_sym_tax] = ACTIONS(1),
    [anon_sym_tay] = ACTIONS(1),
    [anon_sym_tsx] = ACTIONS(1),
    [anon_sym_txa] = ACTIONS(1),
    [anon_sym_txs] = ACTIONS(1),
    [anon_sym_tya] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_accumulator] = ACTIONS(1),
    [sym_one_byte_number] = ACTIONS(1),
    [sym_two_byte_number] = ACTIONS(1),
    [sym_binary_number] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__statement] = STATE(3),
    [sym_label] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_adc] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_asl] = ACTIONS(7),
    [anon_sym_bcc] = ACTIONS(7),
    [anon_sym_bcs] = ACTIONS(7),
    [anon_sym_beq] = ACTIONS(7),
    [anon_sym_bit] = ACTIONS(7),
    [anon_sym_bmi] = ACTIONS(7),
    [anon_sym_bne] = ACTIONS(7),
    [anon_sym_bpl] = ACTIONS(7),
    [anon_sym_brk] = ACTIONS(7),
    [anon_sym_bvc] = ACTIONS(7),
    [anon_sym_bvs] = ACTIONS(7),
    [anon_sym_clc] = ACTIONS(7),
    [anon_sym_cld] = ACTIONS(7),
    [anon_sym_cli] = ACTIONS(7),
    [anon_sym_clv] = ACTIONS(7),
    [anon_sym_cmp] = ACTIONS(7),
    [anon_sym_cpx] = ACTIONS(7),
    [anon_sym_cpy] = ACTIONS(7),
    [anon_sym_dec] = ACTIONS(7),
    [anon_sym_dex] = ACTIONS(7),
    [anon_sym_dey] = ACTIONS(7),
    [anon_sym_eor] = ACTIONS(7),
    [anon_sym_inc] = ACTIONS(7),
    [anon_sym_inx] = ACTIONS(7),
    [anon_sym_iny] = ACTIONS(7),
    [anon_sym_jmp] = ACTIONS(7),
    [anon_sym_jsr] = ACTIONS(7),
    [anon_sym_lda] = ACTIONS(7),
    [anon_sym_ldx] = ACTIONS(7),
    [anon_sym_ldy] = ACTIONS(7),
    [anon_sym_lsr] = ACTIONS(7),
    [anon_sym_nop] = ACTIONS(7),
    [anon_sym_ora] = ACTIONS(7),
    [anon_sym_pha] = ACTIONS(7),
    [anon_sym_php] = ACTIONS(7),
    [anon_sym_pla] = ACTIONS(7),
    [anon_sym_plp] = ACTIONS(7),
    [anon_sym_rol] = ACTIONS(7),
    [anon_sym_ror] = ACTIONS(7),
    [anon_sym_rti] = ACTIONS(7),
    [anon_sym_rts] = ACTIONS(7),
    [anon_sym_sbc] = ACTIONS(7),
    [anon_sym_sec] = ACTIONS(7),
    [anon_sym_sed] = ACTIONS(7),
    [anon_sym_sei] = ACTIONS(7),
    [anon_sym_sta] = ACTIONS(7),
    [anon_sym_stx] = ACTIONS(7),
    [anon_sym_sty] = ACTIONS(7),
    [anon_sym_tax] = ACTIONS(7),
    [anon_sym_tay] = ACTIONS(7),
    [anon_sym_tsx] = ACTIONS(7),
    [anon_sym_txa] = ACTIONS(7),
    [anon_sym_txs] = ACTIONS(7),
    [anon_sym_tya] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_operand] = STATE(12),
    [sym_absolute_x] = STATE(10),
    [sym_absolute_y] = STATE(10),
    [sym_immediate] = STATE(10),
    [sym_absolute] = STATE(10),
    [sym_zero_page_x] = STATE(10),
    [sym_zero_page_y] = STATE(10),
    [sym_zero_page] = STATE(10),
    [sym_indirect] = STATE(10),
    [sym_indirect_zeropage] = STATE(10),
    [sym_indirect_zeropage_x] = STATE(10),
    [sym_indirect_zeropage_y] = STATE(10),
    [sym_relative] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_adc] = ACTIONS(13),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_asl] = ACTIONS(13),
    [anon_sym_bcc] = ACTIONS(13),
    [anon_sym_bcs] = ACTIONS(13),
    [anon_sym_beq] = ACTIONS(13),
    [anon_sym_bit] = ACTIONS(13),
    [anon_sym_bmi] = ACTIONS(13),
    [anon_sym_bne] = ACTIONS(13),
    [anon_sym_bpl] = ACTIONS(13),
    [anon_sym_brk] = ACTIONS(13),
    [anon_sym_bvc] = ACTIONS(13),
    [anon_sym_bvs] = ACTIONS(13),
    [anon_sym_clc] = ACTIONS(13),
    [anon_sym_cld] = ACTIONS(13),
    [anon_sym_cli] = ACTIONS(13),
    [anon_sym_clv] = ACTIONS(13),
    [anon_sym_cmp] = ACTIONS(13),
    [anon_sym_cpx] = ACTIONS(13),
    [anon_sym_cpy] = ACTIONS(13),
    [anon_sym_dec] = ACTIONS(13),
    [anon_sym_dex] = ACTIONS(13),
    [anon_sym_dey] = ACTIONS(13),
    [anon_sym_eor] = ACTIONS(13),
    [anon_sym_inc] = ACTIONS(13),
    [anon_sym_inx] = ACTIONS(13),
    [anon_sym_iny] = ACTIONS(13),
    [anon_sym_jmp] = ACTIONS(13),
    [anon_sym_jsr] = ACTIONS(13),
    [anon_sym_lda] = ACTIONS(13),
    [anon_sym_ldx] = ACTIONS(13),
    [anon_sym_ldy] = ACTIONS(13),
    [anon_sym_lsr] = ACTIONS(13),
    [anon_sym_nop] = ACTIONS(13),
    [anon_sym_ora] = ACTIONS(13),
    [anon_sym_pha] = ACTIONS(13),
    [anon_sym_php] = ACTIONS(13),
    [anon_sym_pla] = ACTIONS(13),
    [anon_sym_plp] = ACTIONS(13),
    [anon_sym_rol] = ACTIONS(13),
    [anon_sym_ror] = ACTIONS(13),
    [anon_sym_rti] = ACTIONS(13),
    [anon_sym_rts] = ACTIONS(13),
    [anon_sym_sbc] = ACTIONS(13),
    [anon_sym_sec] = ACTIONS(13),
    [anon_sym_sed] = ACTIONS(13),
    [anon_sym_sei] = ACTIONS(13),
    [anon_sym_sta] = ACTIONS(13),
    [anon_sym_stx] = ACTIONS(13),
    [anon_sym_sty] = ACTIONS(13),
    [anon_sym_tax] = ACTIONS(13),
    [anon_sym_tay] = ACTIONS(13),
    [anon_sym_tsx] = ACTIONS(13),
    [anon_sym_txa] = ACTIONS(13),
    [anon_sym_txs] = ACTIONS(13),
    [anon_sym_tya] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym_accumulator] = ACTIONS(19),
    [sym_one_byte_number] = ACTIONS(21),
    [sym_two_byte_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(5),
    [sym_label] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_adc] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_asl] = ACTIONS(7),
    [anon_sym_bcc] = ACTIONS(7),
    [anon_sym_bcs] = ACTIONS(7),
    [anon_sym_beq] = ACTIONS(7),
    [anon_sym_bit] = ACTIONS(7),
    [anon_sym_bmi] = ACTIONS(7),
    [anon_sym_bne] = ACTIONS(7),
    [anon_sym_bpl] = ACTIONS(7),
    [anon_sym_brk] = ACTIONS(7),
    [anon_sym_bvc] = ACTIONS(7),
    [anon_sym_bvs] = ACTIONS(7),
    [anon_sym_clc] = ACTIONS(7),
    [anon_sym_cld] = ACTIONS(7),
    [anon_sym_cli] = ACTIONS(7),
    [anon_sym_clv] = ACTIONS(7),
    [anon_sym_cmp] = ACTIONS(7),
    [anon_sym_cpx] = ACTIONS(7),
    [anon_sym_cpy] = ACTIONS(7),
    [anon_sym_dec] = ACTIONS(7),
    [anon_sym_dex] = ACTIONS(7),
    [anon_sym_dey] = ACTIONS(7),
    [anon_sym_eor] = ACTIONS(7),
    [anon_sym_inc] = ACTIONS(7),
    [anon_sym_inx] = ACTIONS(7),
    [anon_sym_iny] = ACTIONS(7),
    [anon_sym_jmp] = ACTIONS(7),
    [anon_sym_jsr] = ACTIONS(7),
    [anon_sym_lda] = ACTIONS(7),
    [anon_sym_ldx] = ACTIONS(7),
    [anon_sym_ldy] = ACTIONS(7),
    [anon_sym_lsr] = ACTIONS(7),
    [anon_sym_nop] = ACTIONS(7),
    [anon_sym_ora] = ACTIONS(7),
    [anon_sym_pha] = ACTIONS(7),
    [anon_sym_php] = ACTIONS(7),
    [anon_sym_pla] = ACTIONS(7),
    [anon_sym_plp] = ACTIONS(7),
    [anon_sym_rol] = ACTIONS(7),
    [anon_sym_ror] = ACTIONS(7),
    [anon_sym_rti] = ACTIONS(7),
    [anon_sym_rts] = ACTIONS(7),
    [anon_sym_sbc] = ACTIONS(7),
    [anon_sym_sec] = ACTIONS(7),
    [anon_sym_sed] = ACTIONS(7),
    [anon_sym_sei] = ACTIONS(7),
    [anon_sym_sta] = ACTIONS(7),
    [anon_sym_stx] = ACTIONS(7),
    [anon_sym_sty] = ACTIONS(7),
    [anon_sym_tax] = ACTIONS(7),
    [anon_sym_tay] = ACTIONS(7),
    [anon_sym_tsx] = ACTIONS(7),
    [anon_sym_txa] = ACTIONS(7),
    [anon_sym_txs] = ACTIONS(7),
    [anon_sym_tya] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_adc] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_asl] = ACTIONS(31),
    [anon_sym_bcc] = ACTIONS(31),
    [anon_sym_bcs] = ACTIONS(31),
    [anon_sym_beq] = ACTIONS(31),
    [anon_sym_bit] = ACTIONS(31),
    [anon_sym_bmi] = ACTIONS(31),
    [anon_sym_bne] = ACTIONS(31),
    [anon_sym_bpl] = ACTIONS(31),
    [anon_sym_brk] = ACTIONS(31),
    [anon_sym_bvc] = ACTIONS(31),
    [anon_sym_bvs] = ACTIONS(31),
    [anon_sym_clc] = ACTIONS(31),
    [anon_sym_cld] = ACTIONS(31),
    [anon_sym_cli] = ACTIONS(31),
    [anon_sym_clv] = ACTIONS(31),
    [anon_sym_cmp] = ACTIONS(31),
    [anon_sym_cpx] = ACTIONS(31),
    [anon_sym_cpy] = ACTIONS(31),
    [anon_sym_dec] = ACTIONS(31),
    [anon_sym_dex] = ACTIONS(31),
    [anon_sym_dey] = ACTIONS(31),
    [anon_sym_eor] = ACTIONS(31),
    [anon_sym_inc] = ACTIONS(31),
    [anon_sym_inx] = ACTIONS(31),
    [anon_sym_iny] = ACTIONS(31),
    [anon_sym_jmp] = ACTIONS(31),
    [anon_sym_jsr] = ACTIONS(31),
    [anon_sym_lda] = ACTIONS(31),
    [anon_sym_ldx] = ACTIONS(31),
    [anon_sym_ldy] = ACTIONS(31),
    [anon_sym_lsr] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_ora] = ACTIONS(31),
    [anon_sym_pha] = ACTIONS(31),
    [anon_sym_php] = ACTIONS(31),
    [anon_sym_pla] = ACTIONS(31),
    [anon_sym_plp] = ACTIONS(31),
    [anon_sym_rol] = ACTIONS(31),
    [anon_sym_ror] = ACTIONS(31),
    [anon_sym_rti] = ACTIONS(31),
    [anon_sym_rts] = ACTIONS(31),
    [anon_sym_sbc] = ACTIONS(31),
    [anon_sym_sec] = ACTIONS(31),
    [anon_sym_sed] = ACTIONS(31),
    [anon_sym_sei] = ACTIONS(31),
    [anon_sym_sta] = ACTIONS(31),
    [anon_sym_stx] = ACTIONS(31),
    [anon_sym_sty] = ACTIONS(31),
    [anon_sym_tax] = ACTIONS(31),
    [anon_sym_tay] = ACTIONS(31),
    [anon_sym_tsx] = ACTIONS(31),
    [anon_sym_txa] = ACTIONS(31),
    [anon_sym_txs] = ACTIONS(31),
    [anon_sym_tya] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_accumulator] = ACTIONS(31),
    [sym_one_byte_number] = ACTIONS(31),
    [sym_two_byte_number] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym_label] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_adc] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_asl] = ACTIONS(35),
    [anon_sym_bcc] = ACTIONS(35),
    [anon_sym_bcs] = ACTIONS(35),
    [anon_sym_beq] = ACTIONS(35),
    [anon_sym_bit] = ACTIONS(35),
    [anon_sym_bmi] = ACTIONS(35),
    [anon_sym_bne] = ACTIONS(35),
    [anon_sym_bpl] = ACTIONS(35),
    [anon_sym_brk] = ACTIONS(35),
    [anon_sym_bvc] = ACTIONS(35),
    [anon_sym_bvs] = ACTIONS(35),
    [anon_sym_clc] = ACTIONS(35),
    [anon_sym_cld] = ACTIONS(35),
    [anon_sym_cli] = ACTIONS(35),
    [anon_sym_clv] = ACTIONS(35),
    [anon_sym_cmp] = ACTIONS(35),
    [anon_sym_cpx] = ACTIONS(35),
    [anon_sym_cpy] = ACTIONS(35),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_dex] = ACTIONS(35),
    [anon_sym_dey] = ACTIONS(35),
    [anon_sym_eor] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_inx] = ACTIONS(35),
    [anon_sym_iny] = ACTIONS(35),
    [anon_sym_jmp] = ACTIONS(35),
    [anon_sym_jsr] = ACTIONS(35),
    [anon_sym_lda] = ACTIONS(35),
    [anon_sym_ldx] = ACTIONS(35),
    [anon_sym_ldy] = ACTIONS(35),
    [anon_sym_lsr] = ACTIONS(35),
    [anon_sym_nop] = ACTIONS(35),
    [anon_sym_ora] = ACTIONS(35),
    [anon_sym_pha] = ACTIONS(35),
    [anon_sym_php] = ACTIONS(35),
    [anon_sym_pla] = ACTIONS(35),
    [anon_sym_plp] = ACTIONS(35),
    [anon_sym_rol] = ACTIONS(35),
    [anon_sym_ror] = ACTIONS(35),
    [anon_sym_rti] = ACTIONS(35),
    [anon_sym_rts] = ACTIONS(35),
    [anon_sym_sbc] = ACTIONS(35),
    [anon_sym_sec] = ACTIONS(35),
    [anon_sym_sed] = ACTIONS(35),
    [anon_sym_sei] = ACTIONS(35),
    [anon_sym_sta] = ACTIONS(35),
    [anon_sym_stx] = ACTIONS(35),
    [anon_sym_sty] = ACTIONS(35),
    [anon_sym_tax] = ACTIONS(35),
    [anon_sym_tay] = ACTIONS(35),
    [anon_sym_tsx] = ACTIONS(35),
    [anon_sym_txa] = ACTIONS(35),
    [anon_sym_txs] = ACTIONS(35),
    [anon_sym_tya] = ACTIONS(35),
    [sym_identifier] = ACTIONS(38),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_adc] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_asl] = ACTIONS(43),
    [anon_sym_bcc] = ACTIONS(43),
    [anon_sym_bcs] = ACTIONS(43),
    [anon_sym_beq] = ACTIONS(43),
    [anon_sym_bit] = ACTIONS(43),
    [anon_sym_bmi] = ACTIONS(43),
    [anon_sym_bne] = ACTIONS(43),
    [anon_sym_bpl] = ACTIONS(43),
    [anon_sym_brk] = ACTIONS(43),
    [anon_sym_bvc] = ACTIONS(43),
    [anon_sym_bvs] = ACTIONS(43),
    [anon_sym_clc] = ACTIONS(43),
    [anon_sym_cld] = ACTIONS(43),
    [anon_sym_cli] = ACTIONS(43),
    [anon_sym_clv] = ACTIONS(43),
    [anon_sym_cmp] = ACTIONS(43),
    [anon_sym_cpx] = ACTIONS(43),
    [anon_sym_cpy] = ACTIONS(43),
    [anon_sym_dec] = ACTIONS(43),
    [anon_sym_dex] = ACTIONS(43),
    [anon_sym_dey] = ACTIONS(43),
    [anon_sym_eor] = ACTIONS(43),
    [anon_sym_inc] = ACTIONS(43),
    [anon_sym_inx] = ACTIONS(43),
    [anon_sym_iny] = ACTIONS(43),
    [anon_sym_jmp] = ACTIONS(43),
    [anon_sym_jsr] = ACTIONS(43),
    [anon_sym_lda] = ACTIONS(43),
    [anon_sym_ldx] = ACTIONS(43),
    [anon_sym_ldy] = ACTIONS(43),
    [anon_sym_lsr] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(43),
    [anon_sym_ora] = ACTIONS(43),
    [anon_sym_pha] = ACTIONS(43),
    [anon_sym_php] = ACTIONS(43),
    [anon_sym_pla] = ACTIONS(43),
    [anon_sym_plp] = ACTIONS(43),
    [anon_sym_rol] = ACTIONS(43),
    [anon_sym_ror] = ACTIONS(43),
    [anon_sym_rti] = ACTIONS(43),
    [anon_sym_rts] = ACTIONS(43),
    [anon_sym_sbc] = ACTIONS(43),
    [anon_sym_sec] = ACTIONS(43),
    [anon_sym_sed] = ACTIONS(43),
    [anon_sym_sei] = ACTIONS(43),
    [anon_sym_sta] = ACTIONS(43),
    [anon_sym_stx] = ACTIONS(43),
    [anon_sym_sty] = ACTIONS(43),
    [anon_sym_tax] = ACTIONS(43),
    [anon_sym_tay] = ACTIONS(43),
    [anon_sym_tsx] = ACTIONS(43),
    [anon_sym_txa] = ACTIONS(43),
    [anon_sym_txs] = ACTIONS(43),
    [anon_sym_tya] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(45),
    [sym_identifier] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_adc] = ACTIONS(49),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_asl] = ACTIONS(49),
    [anon_sym_bcc] = ACTIONS(49),
    [anon_sym_bcs] = ACTIONS(49),
    [anon_sym_beq] = ACTIONS(49),
    [anon_sym_bit] = ACTIONS(49),
    [anon_sym_bmi] = ACTIONS(49),
    [anon_sym_bne] = ACTIONS(49),
    [anon_sym_bpl] = ACTIONS(49),
    [anon_sym_brk] = ACTIONS(49),
    [anon_sym_bvc] = ACTIONS(49),
    [anon_sym_bvs] = ACTIONS(49),
    [anon_sym_clc] = ACTIONS(49),
    [anon_sym_cld] = ACTIONS(49),
    [anon_sym_cli] = ACTIONS(49),
    [anon_sym_clv] = ACTIONS(49),
    [anon_sym_cmp] = ACTIONS(49),
    [anon_sym_cpx] = ACTIONS(49),
    [anon_sym_cpy] = ACTIONS(49),
    [anon_sym_dec] = ACTIONS(49),
    [anon_sym_dex] = ACTIONS(49),
    [anon_sym_dey] = ACTIONS(49),
    [anon_sym_eor] = ACTIONS(49),
    [anon_sym_inc] = ACTIONS(49),
    [anon_sym_inx] = ACTIONS(49),
    [anon_sym_iny] = ACTIONS(49),
    [anon_sym_jmp] = ACTIONS(49),
    [anon_sym_jsr] = ACTIONS(49),
    [anon_sym_lda] = ACTIONS(49),
    [anon_sym_ldx] = ACTIONS(49),
    [anon_sym_ldy] = ACTIONS(49),
    [anon_sym_lsr] = ACTIONS(49),
    [anon_sym_nop] = ACTIONS(49),
    [anon_sym_ora] = ACTIONS(49),
    [anon_sym_pha] = ACTIONS(49),
    [anon_sym_php] = ACTIONS(49),
    [anon_sym_pla] = ACTIONS(49),
    [anon_sym_plp] = ACTIONS(49),
    [anon_sym_rol] = ACTIONS(49),
    [anon_sym_ror] = ACTIONS(49),
    [anon_sym_rti] = ACTIONS(49),
    [anon_sym_rts] = ACTIONS(49),
    [anon_sym_sbc] = ACTIONS(49),
    [anon_sym_sec] = ACTIONS(49),
    [anon_sym_sed] = ACTIONS(49),
    [anon_sym_sei] = ACTIONS(49),
    [anon_sym_sta] = ACTIONS(49),
    [anon_sym_stx] = ACTIONS(49),
    [anon_sym_sty] = ACTIONS(49),
    [anon_sym_tax] = ACTIONS(49),
    [anon_sym_tay] = ACTIONS(49),
    [anon_sym_tsx] = ACTIONS(49),
    [anon_sym_txa] = ACTIONS(49),
    [anon_sym_txs] = ACTIONS(49),
    [anon_sym_tya] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_identifier] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_adc] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_asl] = ACTIONS(55),
    [anon_sym_bcc] = ACTIONS(55),
    [anon_sym_bcs] = ACTIONS(55),
    [anon_sym_beq] = ACTIONS(55),
    [anon_sym_bit] = ACTIONS(55),
    [anon_sym_bmi] = ACTIONS(55),
    [anon_sym_bne] = ACTIONS(55),
    [anon_sym_bpl] = ACTIONS(55),
    [anon_sym_brk] = ACTIONS(55),
    [anon_sym_bvc] = ACTIONS(55),
    [anon_sym_bvs] = ACTIONS(55),
    [anon_sym_clc] = ACTIONS(55),
    [anon_sym_cld] = ACTIONS(55),
    [anon_sym_cli] = ACTIONS(55),
    [anon_sym_clv] = ACTIONS(55),
    [anon_sym_cmp] = ACTIONS(55),
    [anon_sym_cpx] = ACTIONS(55),
    [anon_sym_cpy] = ACTIONS(55),
    [anon_sym_dec] = ACTIONS(55),
    [anon_sym_dex] = ACTIONS(55),
    [anon_sym_dey] = ACTIONS(55),
    [anon_sym_eor] = ACTIONS(55),
    [anon_sym_inc] = ACTIONS(55),
    [anon_sym_inx] = ACTIONS(55),
    [anon_sym_iny] = ACTIONS(55),
    [anon_sym_jmp] = ACTIONS(55),
    [anon_sym_jsr] = ACTIONS(55),
    [anon_sym_lda] = ACTIONS(55),
    [anon_sym_ldx] = ACTIONS(55),
    [anon_sym_ldy] = ACTIONS(55),
    [anon_sym_lsr] = ACTIONS(55),
    [anon_sym_nop] = ACTIONS(55),
    [anon_sym_ora] = ACTIONS(55),
    [anon_sym_pha] = ACTIONS(55),
    [anon_sym_php] = ACTIONS(55),
    [anon_sym_pla] = ACTIONS(55),
    [anon_sym_plp] = ACTIONS(55),
    [anon_sym_rol] = ACTIONS(55),
    [anon_sym_ror] = ACTIONS(55),
    [anon_sym_rti] = ACTIONS(55),
    [anon_sym_rts] = ACTIONS(55),
    [anon_sym_sbc] = ACTIONS(55),
    [anon_sym_sec] = ACTIONS(55),
    [anon_sym_sed] = ACTIONS(55),
    [anon_sym_sei] = ACTIONS(55),
    [anon_sym_sta] = ACTIONS(55),
    [anon_sym_stx] = ACTIONS(55),
    [anon_sym_sty] = ACTIONS(55),
    [anon_sym_tax] = ACTIONS(55),
    [anon_sym_tay] = ACTIONS(55),
    [anon_sym_tsx] = ACTIONS(55),
    [anon_sym_txa] = ACTIONS(55),
    [anon_sym_txs] = ACTIONS(55),
    [anon_sym_tya] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_identifier] = ACTIONS(55),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_adc] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_asl] = ACTIONS(61),
    [anon_sym_bcc] = ACTIONS(61),
    [anon_sym_bcs] = ACTIONS(61),
    [anon_sym_beq] = ACTIONS(61),
    [anon_sym_bit] = ACTIONS(61),
    [anon_sym_bmi] = ACTIONS(61),
    [anon_sym_bne] = ACTIONS(61),
    [anon_sym_bpl] = ACTIONS(61),
    [anon_sym_brk] = ACTIONS(61),
    [anon_sym_bvc] = ACTIONS(61),
    [anon_sym_bvs] = ACTIONS(61),
    [anon_sym_clc] = ACTIONS(61),
    [anon_sym_cld] = ACTIONS(61),
    [anon_sym_cli] = ACTIONS(61),
    [anon_sym_clv] = ACTIONS(61),
    [anon_sym_cmp] = ACTIONS(61),
    [anon_sym_cpx] = ACTIONS(61),
    [anon_sym_cpy] = ACTIONS(61),
    [anon_sym_dec] = ACTIONS(61),
    [anon_sym_dex] = ACTIONS(61),
    [anon_sym_dey] = ACTIONS(61),
    [anon_sym_eor] = ACTIONS(61),
    [anon_sym_inc] = ACTIONS(61),
    [anon_sym_inx] = ACTIONS(61),
    [anon_sym_iny] = ACTIONS(61),
    [anon_sym_jmp] = ACTIONS(61),
    [anon_sym_jsr] = ACTIONS(61),
    [anon_sym_lda] = ACTIONS(61),
    [anon_sym_ldx] = ACTIONS(61),
    [anon_sym_ldy] = ACTIONS(61),
    [anon_sym_lsr] = ACTIONS(61),
    [anon_sym_nop] = ACTIONS(61),
    [anon_sym_ora] = ACTIONS(61),
    [anon_sym_pha] = ACTIONS(61),
    [anon_sym_php] = ACTIONS(61),
    [anon_sym_pla] = ACTIONS(61),
    [anon_sym_plp] = ACTIONS(61),
    [anon_sym_rol] = ACTIONS(61),
    [anon_sym_ror] = ACTIONS(61),
    [anon_sym_rti] = ACTIONS(61),
    [anon_sym_rts] = ACTIONS(61),
    [anon_sym_sbc] = ACTIONS(61),
    [anon_sym_sec] = ACTIONS(61),
    [anon_sym_sed] = ACTIONS(61),
    [anon_sym_sei] = ACTIONS(61),
    [anon_sym_sta] = ACTIONS(61),
    [anon_sym_stx] = ACTIONS(61),
    [anon_sym_sty] = ACTIONS(61),
    [anon_sym_tax] = ACTIONS(61),
    [anon_sym_tay] = ACTIONS(61),
    [anon_sym_tsx] = ACTIONS(61),
    [anon_sym_txa] = ACTIONS(61),
    [anon_sym_txs] = ACTIONS(61),
    [anon_sym_tya] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_adc] = ACTIONS(65),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_asl] = ACTIONS(65),
    [anon_sym_bcc] = ACTIONS(65),
    [anon_sym_bcs] = ACTIONS(65),
    [anon_sym_beq] = ACTIONS(65),
    [anon_sym_bit] = ACTIONS(65),
    [anon_sym_bmi] = ACTIONS(65),
    [anon_sym_bne] = ACTIONS(65),
    [anon_sym_bpl] = ACTIONS(65),
    [anon_sym_brk] = ACTIONS(65),
    [anon_sym_bvc] = ACTIONS(65),
    [anon_sym_bvs] = ACTIONS(65),
    [anon_sym_clc] = ACTIONS(65),
    [anon_sym_cld] = ACTIONS(65),
    [anon_sym_cli] = ACTIONS(65),
    [anon_sym_clv] = ACTIONS(65),
    [anon_sym_cmp] = ACTIONS(65),
    [anon_sym_cpx] = ACTIONS(65),
    [anon_sym_cpy] = ACTIONS(65),
    [anon_sym_dec] = ACTIONS(65),
    [anon_sym_dex] = ACTIONS(65),
    [anon_sym_dey] = ACTIONS(65),
    [anon_sym_eor] = ACTIONS(65),
    [anon_sym_inc] = ACTIONS(65),
    [anon_sym_inx] = ACTIONS(65),
    [anon_sym_iny] = ACTIONS(65),
    [anon_sym_jmp] = ACTIONS(65),
    [anon_sym_jsr] = ACTIONS(65),
    [anon_sym_lda] = ACTIONS(65),
    [anon_sym_ldx] = ACTIONS(65),
    [anon_sym_ldy] = ACTIONS(65),
    [anon_sym_lsr] = ACTIONS(65),
    [anon_sym_nop] = ACTIONS(65),
    [anon_sym_ora] = ACTIONS(65),
    [anon_sym_pha] = ACTIONS(65),
    [anon_sym_php] = ACTIONS(65),
    [anon_sym_pla] = ACTIONS(65),
    [anon_sym_plp] = ACTIONS(65),
    [anon_sym_rol] = ACTIONS(65),
    [anon_sym_ror] = ACTIONS(65),
    [anon_sym_rti] = ACTIONS(65),
    [anon_sym_rts] = ACTIONS(65),
    [anon_sym_sbc] = ACTIONS(65),
    [anon_sym_sec] = ACTIONS(65),
    [anon_sym_sed] = ACTIONS(65),
    [anon_sym_sei] = ACTIONS(65),
    [anon_sym_sta] = ACTIONS(65),
    [anon_sym_stx] = ACTIONS(65),
    [anon_sym_sty] = ACTIONS(65),
    [anon_sym_tax] = ACTIONS(65),
    [anon_sym_tay] = ACTIONS(65),
    [anon_sym_tsx] = ACTIONS(65),
    [anon_sym_txa] = ACTIONS(65),
    [anon_sym_txs] = ACTIONS(65),
    [anon_sym_tya] = ACTIONS(65),
    [sym_identifier] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_adc] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(69),
    [anon_sym_asl] = ACTIONS(69),
    [anon_sym_bcc] = ACTIONS(69),
    [anon_sym_bcs] = ACTIONS(69),
    [anon_sym_beq] = ACTIONS(69),
    [anon_sym_bit] = ACTIONS(69),
    [anon_sym_bmi] = ACTIONS(69),
    [anon_sym_bne] = ACTIONS(69),
    [anon_sym_bpl] = ACTIONS(69),
    [anon_sym_brk] = ACTIONS(69),
    [anon_sym_bvc] = ACTIONS(69),
    [anon_sym_bvs] = ACTIONS(69),
    [anon_sym_clc] = ACTIONS(69),
    [anon_sym_cld] = ACTIONS(69),
    [anon_sym_cli] = ACTIONS(69),
    [anon_sym_clv] = ACTIONS(69),
    [anon_sym_cmp] = ACTIONS(69),
    [anon_sym_cpx] = ACTIONS(69),
    [anon_sym_cpy] = ACTIONS(69),
    [anon_sym_dec] = ACTIONS(69),
    [anon_sym_dex] = ACTIONS(69),
    [anon_sym_dey] = ACTIONS(69),
    [anon_sym_eor] = ACTIONS(69),
    [anon_sym_inc] = ACTIONS(69),
    [anon_sym_inx] = ACTIONS(69),
    [anon_sym_iny] = ACTIONS(69),
    [anon_sym_jmp] = ACTIONS(69),
    [anon_sym_jsr] = ACTIONS(69),
    [anon_sym_lda] = ACTIONS(69),
    [anon_sym_ldx] = ACTIONS(69),
    [anon_sym_ldy] = ACTIONS(69),
    [anon_sym_lsr] = ACTIONS(69),
    [anon_sym_nop] = ACTIONS(69),
    [anon_sym_ora] = ACTIONS(69),
    [anon_sym_pha] = ACTIONS(69),
    [anon_sym_php] = ACTIONS(69),
    [anon_sym_pla] = ACTIONS(69),
    [anon_sym_plp] = ACTIONS(69),
    [anon_sym_rol] = ACTIONS(69),
    [anon_sym_ror] = ACTIONS(69),
    [anon_sym_rti] = ACTIONS(69),
    [anon_sym_rts] = ACTIONS(69),
    [anon_sym_sbc] = ACTIONS(69),
    [anon_sym_sec] = ACTIONS(69),
    [anon_sym_sed] = ACTIONS(69),
    [anon_sym_sei] = ACTIONS(69),
    [anon_sym_sta] = ACTIONS(69),
    [anon_sym_stx] = ACTIONS(69),
    [anon_sym_sty] = ACTIONS(69),
    [anon_sym_tax] = ACTIONS(69),
    [anon_sym_tay] = ACTIONS(69),
    [anon_sym_tsx] = ACTIONS(69),
    [anon_sym_txa] = ACTIONS(69),
    [anon_sym_txs] = ACTIONS(69),
    [anon_sym_tya] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_adc] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_asl] = ACTIONS(73),
    [anon_sym_bcc] = ACTIONS(73),
    [anon_sym_bcs] = ACTIONS(73),
    [anon_sym_beq] = ACTIONS(73),
    [anon_sym_bit] = ACTIONS(73),
    [anon_sym_bmi] = ACTIONS(73),
    [anon_sym_bne] = ACTIONS(73),
    [anon_sym_bpl] = ACTIONS(73),
    [anon_sym_brk] = ACTIONS(73),
    [anon_sym_bvc] = ACTIONS(73),
    [anon_sym_bvs] = ACTIONS(73),
    [anon_sym_clc] = ACTIONS(73),
    [anon_sym_cld] = ACTIONS(73),
    [anon_sym_cli] = ACTIONS(73),
    [anon_sym_clv] = ACTIONS(73),
    [anon_sym_cmp] = ACTIONS(73),
    [anon_sym_cpx] = ACTIONS(73),
    [anon_sym_cpy] = ACTIONS(73),
    [anon_sym_dec] = ACTIONS(73),
    [anon_sym_dex] = ACTIONS(73),
    [anon_sym_dey] = ACTIONS(73),
    [anon_sym_eor] = ACTIONS(73),
    [anon_sym_inc] = ACTIONS(73),
    [anon_sym_inx] = ACTIONS(73),
    [anon_sym_iny] = ACTIONS(73),
    [anon_sym_jmp] = ACTIONS(73),
    [anon_sym_jsr] = ACTIONS(73),
    [anon_sym_lda] = ACTIONS(73),
    [anon_sym_ldx] = ACTIONS(73),
    [anon_sym_ldy] = ACTIONS(73),
    [anon_sym_lsr] = ACTIONS(73),
    [anon_sym_nop] = ACTIONS(73),
    [anon_sym_ora] = ACTIONS(73),
    [anon_sym_pha] = ACTIONS(73),
    [anon_sym_php] = ACTIONS(73),
    [anon_sym_pla] = ACTIONS(73),
    [anon_sym_plp] = ACTIONS(73),
    [anon_sym_rol] = ACTIONS(73),
    [anon_sym_ror] = ACTIONS(73),
    [anon_sym_rti] = ACTIONS(73),
    [anon_sym_rts] = ACTIONS(73),
    [anon_sym_sbc] = ACTIONS(73),
    [anon_sym_sec] = ACTIONS(73),
    [anon_sym_sed] = ACTIONS(73),
    [anon_sym_sei] = ACTIONS(73),
    [anon_sym_sta] = ACTIONS(73),
    [anon_sym_stx] = ACTIONS(73),
    [anon_sym_sty] = ACTIONS(73),
    [anon_sym_tax] = ACTIONS(73),
    [anon_sym_tay] = ACTIONS(73),
    [anon_sym_tsx] = ACTIONS(73),
    [anon_sym_txa] = ACTIONS(73),
    [anon_sym_txs] = ACTIONS(73),
    [anon_sym_tya] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_adc] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_asl] = ACTIONS(77),
    [anon_sym_bcc] = ACTIONS(77),
    [anon_sym_bcs] = ACTIONS(77),
    [anon_sym_beq] = ACTIONS(77),
    [anon_sym_bit] = ACTIONS(77),
    [anon_sym_bmi] = ACTIONS(77),
    [anon_sym_bne] = ACTIONS(77),
    [anon_sym_bpl] = ACTIONS(77),
    [anon_sym_brk] = ACTIONS(77),
    [anon_sym_bvc] = ACTIONS(77),
    [anon_sym_bvs] = ACTIONS(77),
    [anon_sym_clc] = ACTIONS(77),
    [anon_sym_cld] = ACTIONS(77),
    [anon_sym_cli] = ACTIONS(77),
    [anon_sym_clv] = ACTIONS(77),
    [anon_sym_cmp] = ACTIONS(77),
    [anon_sym_cpx] = ACTIONS(77),
    [anon_sym_cpy] = ACTIONS(77),
    [anon_sym_dec] = ACTIONS(77),
    [anon_sym_dex] = ACTIONS(77),
    [anon_sym_dey] = ACTIONS(77),
    [anon_sym_eor] = ACTIONS(77),
    [anon_sym_inc] = ACTIONS(77),
    [anon_sym_inx] = ACTIONS(77),
    [anon_sym_iny] = ACTIONS(77),
    [anon_sym_jmp] = ACTIONS(77),
    [anon_sym_jsr] = ACTIONS(77),
    [anon_sym_lda] = ACTIONS(77),
    [anon_sym_ldx] = ACTIONS(77),
    [anon_sym_ldy] = ACTIONS(77),
    [anon_sym_lsr] = ACTIONS(77),
    [anon_sym_nop] = ACTIONS(77),
    [anon_sym_ora] = ACTIONS(77),
    [anon_sym_pha] = ACTIONS(77),
    [anon_sym_php] = ACTIONS(77),
    [anon_sym_pla] = ACTIONS(77),
    [anon_sym_plp] = ACTIONS(77),
    [anon_sym_rol] = ACTIONS(77),
    [anon_sym_ror] = ACTIONS(77),
    [anon_sym_rti] = ACTIONS(77),
    [anon_sym_rts] = ACTIONS(77),
    [anon_sym_sbc] = ACTIONS(77),
    [anon_sym_sec] = ACTIONS(77),
    [anon_sym_sed] = ACTIONS(77),
    [anon_sym_sei] = ACTIONS(77),
    [anon_sym_sta] = ACTIONS(77),
    [anon_sym_stx] = ACTIONS(77),
    [anon_sym_sty] = ACTIONS(77),
    [anon_sym_tax] = ACTIONS(77),
    [anon_sym_tay] = ACTIONS(77),
    [anon_sym_tsx] = ACTIONS(77),
    [anon_sym_txa] = ACTIONS(77),
    [anon_sym_txs] = ACTIONS(77),
    [anon_sym_tya] = ACTIONS(77),
    [sym_identifier] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_adc] = ACTIONS(81),
    [anon_sym_and] = ACTIONS(81),
    [anon_sym_asl] = ACTIONS(81),
    [anon_sym_bcc] = ACTIONS(81),
    [anon_sym_bcs] = ACTIONS(81),
    [anon_sym_beq] = ACTIONS(81),
    [anon_sym_bit] = ACTIONS(81),
    [anon_sym_bmi] = ACTIONS(81),
    [anon_sym_bne] = ACTIONS(81),
    [anon_sym_bpl] = ACTIONS(81),
    [anon_sym_brk] = ACTIONS(81),
    [anon_sym_bvc] = ACTIONS(81),
    [anon_sym_bvs] = ACTIONS(81),
    [anon_sym_clc] = ACTIONS(81),
    [anon_sym_cld] = ACTIONS(81),
    [anon_sym_cli] = ACTIONS(81),
    [anon_sym_clv] = ACTIONS(81),
    [anon_sym_cmp] = ACTIONS(81),
    [anon_sym_cpx] = ACTIONS(81),
    [anon_sym_cpy] = ACTIONS(81),
    [anon_sym_dec] = ACTIONS(81),
    [anon_sym_dex] = ACTIONS(81),
    [anon_sym_dey] = ACTIONS(81),
    [anon_sym_eor] = ACTIONS(81),
    [anon_sym_inc] = ACTIONS(81),
    [anon_sym_inx] = ACTIONS(81),
    [anon_sym_iny] = ACTIONS(81),
    [anon_sym_jmp] = ACTIONS(81),
    [anon_sym_jsr] = ACTIONS(81),
    [anon_sym_lda] = ACTIONS(81),
    [anon_sym_ldx] = ACTIONS(81),
    [anon_sym_ldy] = ACTIONS(81),
    [anon_sym_lsr] = ACTIONS(81),
    [anon_sym_nop] = ACTIONS(81),
    [anon_sym_ora] = ACTIONS(81),
    [anon_sym_pha] = ACTIONS(81),
    [anon_sym_php] = ACTIONS(81),
    [anon_sym_pla] = ACTIONS(81),
    [anon_sym_plp] = ACTIONS(81),
    [anon_sym_rol] = ACTIONS(81),
    [anon_sym_ror] = ACTIONS(81),
    [anon_sym_rti] = ACTIONS(81),
    [anon_sym_rts] = ACTIONS(81),
    [anon_sym_sbc] = ACTIONS(81),
    [anon_sym_sec] = ACTIONS(81),
    [anon_sym_sed] = ACTIONS(81),
    [anon_sym_sei] = ACTIONS(81),
    [anon_sym_sta] = ACTIONS(81),
    [anon_sym_stx] = ACTIONS(81),
    [anon_sym_sty] = ACTIONS(81),
    [anon_sym_tax] = ACTIONS(81),
    [anon_sym_tay] = ACTIONS(81),
    [anon_sym_tsx] = ACTIONS(81),
    [anon_sym_txa] = ACTIONS(81),
    [anon_sym_txs] = ACTIONS(81),
    [anon_sym_tya] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_adc] = ACTIONS(85),
    [anon_sym_and] = ACTIONS(85),
    [anon_sym_asl] = ACTIONS(85),
    [anon_sym_bcc] = ACTIONS(85),
    [anon_sym_bcs] = ACTIONS(85),
    [anon_sym_beq] = ACTIONS(85),
    [anon_sym_bit] = ACTIONS(85),
    [anon_sym_bmi] = ACTIONS(85),
    [anon_sym_bne] = ACTIONS(85),
    [anon_sym_bpl] = ACTIONS(85),
    [anon_sym_brk] = ACTIONS(85),
    [anon_sym_bvc] = ACTIONS(85),
    [anon_sym_bvs] = ACTIONS(85),
    [anon_sym_clc] = ACTIONS(85),
    [anon_sym_cld] = ACTIONS(85),
    [anon_sym_cli] = ACTIONS(85),
    [anon_sym_clv] = ACTIONS(85),
    [anon_sym_cmp] = ACTIONS(85),
    [anon_sym_cpx] = ACTIONS(85),
    [anon_sym_cpy] = ACTIONS(85),
    [anon_sym_dec] = ACTIONS(85),
    [anon_sym_dex] = ACTIONS(85),
    [anon_sym_dey] = ACTIONS(85),
    [anon_sym_eor] = ACTIONS(85),
    [anon_sym_inc] = ACTIONS(85),
    [anon_sym_inx] = ACTIONS(85),
    [anon_sym_iny] = ACTIONS(85),
    [anon_sym_jmp] = ACTIONS(85),
    [anon_sym_jsr] = ACTIONS(85),
    [anon_sym_lda] = ACTIONS(85),
    [anon_sym_ldx] = ACTIONS(85),
    [anon_sym_ldy] = ACTIONS(85),
    [anon_sym_lsr] = ACTIONS(85),
    [anon_sym_nop] = ACTIONS(85),
    [anon_sym_ora] = ACTIONS(85),
    [anon_sym_pha] = ACTIONS(85),
    [anon_sym_php] = ACTIONS(85),
    [anon_sym_pla] = ACTIONS(85),
    [anon_sym_plp] = ACTIONS(85),
    [anon_sym_rol] = ACTIONS(85),
    [anon_sym_ror] = ACTIONS(85),
    [anon_sym_rti] = ACTIONS(85),
    [anon_sym_rts] = ACTIONS(85),
    [anon_sym_sbc] = ACTIONS(85),
    [anon_sym_sec] = ACTIONS(85),
    [anon_sym_sed] = ACTIONS(85),
    [anon_sym_sei] = ACTIONS(85),
    [anon_sym_sta] = ACTIONS(85),
    [anon_sym_stx] = ACTIONS(85),
    [anon_sym_sty] = ACTIONS(85),
    [anon_sym_tax] = ACTIONS(85),
    [anon_sym_tay] = ACTIONS(85),
    [anon_sym_tsx] = ACTIONS(85),
    [anon_sym_txa] = ACTIONS(85),
    [anon_sym_txs] = ACTIONS(85),
    [anon_sym_tya] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_adc] = ACTIONS(89),
    [anon_sym_and] = ACTIONS(89),
    [anon_sym_asl] = ACTIONS(89),
    [anon_sym_bcc] = ACTIONS(89),
    [anon_sym_bcs] = ACTIONS(89),
    [anon_sym_beq] = ACTIONS(89),
    [anon_sym_bit] = ACTIONS(89),
    [anon_sym_bmi] = ACTIONS(89),
    [anon_sym_bne] = ACTIONS(89),
    [anon_sym_bpl] = ACTIONS(89),
    [anon_sym_brk] = ACTIONS(89),
    [anon_sym_bvc] = ACTIONS(89),
    [anon_sym_bvs] = ACTIONS(89),
    [anon_sym_clc] = ACTIONS(89),
    [anon_sym_cld] = ACTIONS(89),
    [anon_sym_cli] = ACTIONS(89),
    [anon_sym_clv] = ACTIONS(89),
    [anon_sym_cmp] = ACTIONS(89),
    [anon_sym_cpx] = ACTIONS(89),
    [anon_sym_cpy] = ACTIONS(89),
    [anon_sym_dec] = ACTIONS(89),
    [anon_sym_dex] = ACTIONS(89),
    [anon_sym_dey] = ACTIONS(89),
    [anon_sym_eor] = ACTIONS(89),
    [anon_sym_inc] = ACTIONS(89),
    [anon_sym_inx] = ACTIONS(89),
    [anon_sym_iny] = ACTIONS(89),
    [anon_sym_jmp] = ACTIONS(89),
    [anon_sym_jsr] = ACTIONS(89),
    [anon_sym_lda] = ACTIONS(89),
    [anon_sym_ldx] = ACTIONS(89),
    [anon_sym_ldy] = ACTIONS(89),
    [anon_sym_lsr] = ACTIONS(89),
    [anon_sym_nop] = ACTIONS(89),
    [anon_sym_ora] = ACTIONS(89),
    [anon_sym_pha] = ACTIONS(89),
    [anon_sym_php] = ACTIONS(89),
    [anon_sym_pla] = ACTIONS(89),
    [anon_sym_plp] = ACTIONS(89),
    [anon_sym_rol] = ACTIONS(89),
    [anon_sym_ror] = ACTIONS(89),
    [anon_sym_rti] = ACTIONS(89),
    [anon_sym_rts] = ACTIONS(89),
    [anon_sym_sbc] = ACTIONS(89),
    [anon_sym_sec] = ACTIONS(89),
    [anon_sym_sed] = ACTIONS(89),
    [anon_sym_sei] = ACTIONS(89),
    [anon_sym_sta] = ACTIONS(89),
    [anon_sym_stx] = ACTIONS(89),
    [anon_sym_sty] = ACTIONS(89),
    [anon_sym_tax] = ACTIONS(89),
    [anon_sym_tay] = ACTIONS(89),
    [anon_sym_tsx] = ACTIONS(89),
    [anon_sym_txa] = ACTIONS(89),
    [anon_sym_txs] = ACTIONS(89),
    [anon_sym_tya] = ACTIONS(89),
    [sym_identifier] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_adc] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(93),
    [anon_sym_asl] = ACTIONS(93),
    [anon_sym_bcc] = ACTIONS(93),
    [anon_sym_bcs] = ACTIONS(93),
    [anon_sym_beq] = ACTIONS(93),
    [anon_sym_bit] = ACTIONS(93),
    [anon_sym_bmi] = ACTIONS(93),
    [anon_sym_bne] = ACTIONS(93),
    [anon_sym_bpl] = ACTIONS(93),
    [anon_sym_brk] = ACTIONS(93),
    [anon_sym_bvc] = ACTIONS(93),
    [anon_sym_bvs] = ACTIONS(93),
    [anon_sym_clc] = ACTIONS(93),
    [anon_sym_cld] = ACTIONS(93),
    [anon_sym_cli] = ACTIONS(93),
    [anon_sym_clv] = ACTIONS(93),
    [anon_sym_cmp] = ACTIONS(93),
    [anon_sym_cpx] = ACTIONS(93),
    [anon_sym_cpy] = ACTIONS(93),
    [anon_sym_dec] = ACTIONS(93),
    [anon_sym_dex] = ACTIONS(93),
    [anon_sym_dey] = ACTIONS(93),
    [anon_sym_eor] = ACTIONS(93),
    [anon_sym_inc] = ACTIONS(93),
    [anon_sym_inx] = ACTIONS(93),
    [anon_sym_iny] = ACTIONS(93),
    [anon_sym_jmp] = ACTIONS(93),
    [anon_sym_jsr] = ACTIONS(93),
    [anon_sym_lda] = ACTIONS(93),
    [anon_sym_ldx] = ACTIONS(93),
    [anon_sym_ldy] = ACTIONS(93),
    [anon_sym_lsr] = ACTIONS(93),
    [anon_sym_nop] = ACTIONS(93),
    [anon_sym_ora] = ACTIONS(93),
    [anon_sym_pha] = ACTIONS(93),
    [anon_sym_php] = ACTIONS(93),
    [anon_sym_pla] = ACTIONS(93),
    [anon_sym_plp] = ACTIONS(93),
    [anon_sym_rol] = ACTIONS(93),
    [anon_sym_ror] = ACTIONS(93),
    [anon_sym_rti] = ACTIONS(93),
    [anon_sym_rts] = ACTIONS(93),
    [anon_sym_sbc] = ACTIONS(93),
    [anon_sym_sec] = ACTIONS(93),
    [anon_sym_sed] = ACTIONS(93),
    [anon_sym_sei] = ACTIONS(93),
    [anon_sym_sta] = ACTIONS(93),
    [anon_sym_stx] = ACTIONS(93),
    [anon_sym_sty] = ACTIONS(93),
    [anon_sym_tax] = ACTIONS(93),
    [anon_sym_tay] = ACTIONS(93),
    [anon_sym_tsx] = ACTIONS(93),
    [anon_sym_txa] = ACTIONS(93),
    [anon_sym_txs] = ACTIONS(93),
    [anon_sym_tya] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_adc] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_asl] = ACTIONS(97),
    [anon_sym_bcc] = ACTIONS(97),
    [anon_sym_bcs] = ACTIONS(97),
    [anon_sym_beq] = ACTIONS(97),
    [anon_sym_bit] = ACTIONS(97),
    [anon_sym_bmi] = ACTIONS(97),
    [anon_sym_bne] = ACTIONS(97),
    [anon_sym_bpl] = ACTIONS(97),
    [anon_sym_brk] = ACTIONS(97),
    [anon_sym_bvc] = ACTIONS(97),
    [anon_sym_bvs] = ACTIONS(97),
    [anon_sym_clc] = ACTIONS(97),
    [anon_sym_cld] = ACTIONS(97),
    [anon_sym_cli] = ACTIONS(97),
    [anon_sym_clv] = ACTIONS(97),
    [anon_sym_cmp] = ACTIONS(97),
    [anon_sym_cpx] = ACTIONS(97),
    [anon_sym_cpy] = ACTIONS(97),
    [anon_sym_dec] = ACTIONS(97),
    [anon_sym_dex] = ACTIONS(97),
    [anon_sym_dey] = ACTIONS(97),
    [anon_sym_eor] = ACTIONS(97),
    [anon_sym_inc] = ACTIONS(97),
    [anon_sym_inx] = ACTIONS(97),
    [anon_sym_iny] = ACTIONS(97),
    [anon_sym_jmp] = ACTIONS(97),
    [anon_sym_jsr] = ACTIONS(97),
    [anon_sym_lda] = ACTIONS(97),
    [anon_sym_ldx] = ACTIONS(97),
    [anon_sym_ldy] = ACTIONS(97),
    [anon_sym_lsr] = ACTIONS(97),
    [anon_sym_nop] = ACTIONS(97),
    [anon_sym_ora] = ACTIONS(97),
    [anon_sym_pha] = ACTIONS(97),
    [anon_sym_php] = ACTIONS(97),
    [anon_sym_pla] = ACTIONS(97),
    [anon_sym_plp] = ACTIONS(97),
    [anon_sym_rol] = ACTIONS(97),
    [anon_sym_ror] = ACTIONS(97),
    [anon_sym_rti] = ACTIONS(97),
    [anon_sym_rts] = ACTIONS(97),
    [anon_sym_sbc] = ACTIONS(97),
    [anon_sym_sec] = ACTIONS(97),
    [anon_sym_sed] = ACTIONS(97),
    [anon_sym_sei] = ACTIONS(97),
    [anon_sym_sta] = ACTIONS(97),
    [anon_sym_stx] = ACTIONS(97),
    [anon_sym_sty] = ACTIONS(97),
    [anon_sym_tax] = ACTIONS(97),
    [anon_sym_tay] = ACTIONS(97),
    [anon_sym_tsx] = ACTIONS(97),
    [anon_sym_txa] = ACTIONS(97),
    [anon_sym_txs] = ACTIONS(97),
    [anon_sym_tya] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_adc] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_asl] = ACTIONS(101),
    [anon_sym_bcc] = ACTIONS(101),
    [anon_sym_bcs] = ACTIONS(101),
    [anon_sym_beq] = ACTIONS(101),
    [anon_sym_bit] = ACTIONS(101),
    [anon_sym_bmi] = ACTIONS(101),
    [anon_sym_bne] = ACTIONS(101),
    [anon_sym_bpl] = ACTIONS(101),
    [anon_sym_brk] = ACTIONS(101),
    [anon_sym_bvc] = ACTIONS(101),
    [anon_sym_bvs] = ACTIONS(101),
    [anon_sym_clc] = ACTIONS(101),
    [anon_sym_cld] = ACTIONS(101),
    [anon_sym_cli] = ACTIONS(101),
    [anon_sym_clv] = ACTIONS(101),
    [anon_sym_cmp] = ACTIONS(101),
    [anon_sym_cpx] = ACTIONS(101),
    [anon_sym_cpy] = ACTIONS(101),
    [anon_sym_dec] = ACTIONS(101),
    [anon_sym_dex] = ACTIONS(101),
    [anon_sym_dey] = ACTIONS(101),
    [anon_sym_eor] = ACTIONS(101),
    [anon_sym_inc] = ACTIONS(101),
    [anon_sym_inx] = ACTIONS(101),
    [anon_sym_iny] = ACTIONS(101),
    [anon_sym_jmp] = ACTIONS(101),
    [anon_sym_jsr] = ACTIONS(101),
    [anon_sym_lda] = ACTIONS(101),
    [anon_sym_ldx] = ACTIONS(101),
    [anon_sym_ldy] = ACTIONS(101),
    [anon_sym_lsr] = ACTIONS(101),
    [anon_sym_nop] = ACTIONS(101),
    [anon_sym_ora] = ACTIONS(101),
    [anon_sym_pha] = ACTIONS(101),
    [anon_sym_php] = ACTIONS(101),
    [anon_sym_pla] = ACTIONS(101),
    [anon_sym_plp] = ACTIONS(101),
    [anon_sym_rol] = ACTIONS(101),
    [anon_sym_ror] = ACTIONS(101),
    [anon_sym_rti] = ACTIONS(101),
    [anon_sym_rts] = ACTIONS(101),
    [anon_sym_sbc] = ACTIONS(101),
    [anon_sym_sec] = ACTIONS(101),
    [anon_sym_sed] = ACTIONS(101),
    [anon_sym_sei] = ACTIONS(101),
    [anon_sym_sta] = ACTIONS(101),
    [anon_sym_stx] = ACTIONS(101),
    [anon_sym_sty] = ACTIONS(101),
    [anon_sym_tax] = ACTIONS(101),
    [anon_sym_tay] = ACTIONS(101),
    [anon_sym_tsx] = ACTIONS(101),
    [anon_sym_txa] = ACTIONS(101),
    [anon_sym_txs] = ACTIONS(101),
    [anon_sym_tya] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_adc] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_asl] = ACTIONS(105),
    [anon_sym_bcc] = ACTIONS(105),
    [anon_sym_bcs] = ACTIONS(105),
    [anon_sym_beq] = ACTIONS(105),
    [anon_sym_bit] = ACTIONS(105),
    [anon_sym_bmi] = ACTIONS(105),
    [anon_sym_bne] = ACTIONS(105),
    [anon_sym_bpl] = ACTIONS(105),
    [anon_sym_brk] = ACTIONS(105),
    [anon_sym_bvc] = ACTIONS(105),
    [anon_sym_bvs] = ACTIONS(105),
    [anon_sym_clc] = ACTIONS(105),
    [anon_sym_cld] = ACTIONS(105),
    [anon_sym_cli] = ACTIONS(105),
    [anon_sym_clv] = ACTIONS(105),
    [anon_sym_cmp] = ACTIONS(105),
    [anon_sym_cpx] = ACTIONS(105),
    [anon_sym_cpy] = ACTIONS(105),
    [anon_sym_dec] = ACTIONS(105),
    [anon_sym_dex] = ACTIONS(105),
    [anon_sym_dey] = ACTIONS(105),
    [anon_sym_eor] = ACTIONS(105),
    [anon_sym_inc] = ACTIONS(105),
    [anon_sym_inx] = ACTIONS(105),
    [anon_sym_iny] = ACTIONS(105),
    [anon_sym_jmp] = ACTIONS(105),
    [anon_sym_jsr] = ACTIONS(105),
    [anon_sym_lda] = ACTIONS(105),
    [anon_sym_ldx] = ACTIONS(105),
    [anon_sym_ldy] = ACTIONS(105),
    [anon_sym_lsr] = ACTIONS(105),
    [anon_sym_nop] = ACTIONS(105),
    [anon_sym_ora] = ACTIONS(105),
    [anon_sym_pha] = ACTIONS(105),
    [anon_sym_php] = ACTIONS(105),
    [anon_sym_pla] = ACTIONS(105),
    [anon_sym_plp] = ACTIONS(105),
    [anon_sym_rol] = ACTIONS(105),
    [anon_sym_ror] = ACTIONS(105),
    [anon_sym_rti] = ACTIONS(105),
    [anon_sym_rts] = ACTIONS(105),
    [anon_sym_sbc] = ACTIONS(105),
    [anon_sym_sec] = ACTIONS(105),
    [anon_sym_sed] = ACTIONS(105),
    [anon_sym_sei] = ACTIONS(105),
    [anon_sym_sta] = ACTIONS(105),
    [anon_sym_stx] = ACTIONS(105),
    [anon_sym_sty] = ACTIONS(105),
    [anon_sym_tax] = ACTIONS(105),
    [anon_sym_tay] = ACTIONS(105),
    [anon_sym_tsx] = ACTIONS(105),
    [anon_sym_txa] = ACTIONS(105),
    [anon_sym_txs] = ACTIONS(105),
    [anon_sym_tya] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 2,
      sym_one_byte_number,
      sym_binary_number,
  [9] = 3,
    ACTIONS(109), 1,
      sym_one_byte_number,
    ACTIONS(111), 1,
      sym_two_byte_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [20] = 3,
    ACTIONS(113), 1,
      anon_sym_x,
    ACTIONS(115), 1,
      anon_sym_y,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [31] = 3,
    ACTIONS(117), 1,
      anon_sym_x,
    ACTIONS(119), 1,
      anon_sym_y,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [42] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [53] = 2,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [61] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [69] = 2,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [77] = 2,
    ACTIONS(131), 1,
      anon_sym_x,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [85] = 2,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [93] = 2,
    ACTIONS(135), 1,
      anon_sym_y,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 9,
  [SMALL_STATE(23)] = 20,
  [SMALL_STATE(24)] = 31,
  [SMALL_STATE(25)] = 42,
  [SMALL_STATE(26)] = 53,
  [SMALL_STATE(27)] = 61,
  [SMALL_STATE(28)] = 69,
  [SMALL_STATE(29)] = 77,
  [SMALL_STATE(30)] = 85,
  [SMALL_STATE(31)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_page, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_page, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_zeropage, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_zeropage, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_page_y, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_page_y, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_x, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_x, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_y, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_y, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zero_page_x, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zero_page_x, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_zeropage_x, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_zeropage_x, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_zeropage_y, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_zeropage_y, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
