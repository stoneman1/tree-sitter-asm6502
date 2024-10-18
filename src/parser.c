#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_adc = 2,
  anon_sym_adb = 3,
  anon_sym_and = 4,
  anon_sym_asl = 5,
  anon_sym_bcc = 6,
  anon_sym_bcs = 7,
  anon_sym_beq = 8,
  anon_sym_bit = 9,
  anon_sym_bmi = 10,
  anon_sym_bne = 11,
  anon_sym_bpl = 12,
  anon_sym_brk = 13,
  anon_sym_bvc = 14,
  anon_sym_bvs = 15,
  anon_sym_clc = 16,
  anon_sym_cld = 17,
  anon_sym_cli = 18,
  anon_sym_clv = 19,
  anon_sym_cmp = 20,
  anon_sym_cpx = 21,
  anon_sym_cpy = 22,
  anon_sym_dec = 23,
  anon_sym_dex = 24,
  anon_sym_dey = 25,
  anon_sym_eor = 26,
  anon_sym_inc = 27,
  anon_sym_inx = 28,
  anon_sym_iny = 29,
  anon_sym_jmp = 30,
  anon_sym_jsr = 31,
  anon_sym_lda = 32,
  anon_sym_ldx = 33,
  anon_sym_ldy = 34,
  anon_sym_lsr = 35,
  anon_sym_nop = 36,
  anon_sym_ora = 37,
  anon_sym_pha = 38,
  anon_sym_php = 39,
  anon_sym_pla = 40,
  anon_sym_plp = 41,
  anon_sym_rol = 42,
  anon_sym_ror = 43,
  anon_sym_rti = 44,
  anon_sym_rts = 45,
  anon_sym_sbc = 46,
  anon_sym_sec = 47,
  anon_sym_sed = 48,
  anon_sym_sei = 49,
  anon_sym_sta = 50,
  anon_sym_stx = 51,
  anon_sym_sty = 52,
  anon_sym_tax = 53,
  anon_sym_tay = 54,
  anon_sym_tsx = 55,
  anon_sym_txa = 56,
  anon_sym_txs = 57,
  anon_sym_tya = 58,
  anon_sym_POUND = 59,
  anon_sym_COMMA = 60,
  anon_sym_X = 61,
  anon_sym_Y = 62,
  anon_sym_LPAREN = 63,
  anon_sym_RPAREN = 64,
  sym_accumulator = 65,
  sym_number = 66,
  sym_identifier = 67,
  sym_line_comment = 68,
  sym_block_comment = 69,
  sym_source_file = 70,
  sym_label = 71,
  sym_instruction = 72,
  sym_mnemonic = 73,
  sym_operand = 74,
  sym_immediate = 75,
  sym_absolute = 76,
  sym_absolute_x = 77,
  sym_absolute_y = 78,
  sym_zero_page = 79,
  sym_zero_page_x = 80,
  sym_zero_page_y = 81,
  sym_indirect = 82,
  sym_indirect_x = 83,
  sym_indirect_y = 84,
  sym_relative = 85,
  aux_sym_source_file_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_adc] = "adc",
  [anon_sym_adb] = "adb",
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
  [anon_sym_POUND] = "#",
  [anon_sym_COMMA] = ",",
  [anon_sym_X] = "X",
  [anon_sym_Y] = "Y",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_accumulator] = "accumulator",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_mnemonic] = "mnemonic",
  [sym_operand] = "operand",
  [sym_immediate] = "immediate",
  [sym_absolute] = "absolute",
  [sym_absolute_x] = "absolute_x",
  [sym_absolute_y] = "absolute_y",
  [sym_zero_page] = "zero_page",
  [sym_zero_page_x] = "zero_page_x",
  [sym_zero_page_y] = "zero_page_y",
  [sym_indirect] = "indirect",
  [sym_indirect_x] = "indirect_x",
  [sym_indirect_y] = "indirect_y",
  [sym_relative] = "relative",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_adc] = anon_sym_adc,
  [anon_sym_adb] = anon_sym_adb,
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_accumulator] = sym_accumulator,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_mnemonic] = sym_mnemonic,
  [sym_operand] = sym_operand,
  [sym_immediate] = sym_immediate,
  [sym_absolute] = sym_absolute,
  [sym_absolute_x] = sym_absolute_x,
  [sym_absolute_y] = sym_absolute_y,
  [sym_zero_page] = sym_zero_page,
  [sym_zero_page_x] = sym_zero_page_x,
  [sym_zero_page_y] = sym_zero_page_y,
  [sym_indirect] = sym_indirect,
  [sym_indirect_x] = sym_indirect_x,
  [sym_indirect_y] = sym_indirect_y,
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
  [anon_sym_adb] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
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
  [sym_number] = {
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
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute] = {
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
  [sym_zero_page] = {
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
  [sym_indirect] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect_x] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect_y] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '#', 171,
        '$', 52,
        '(', 175,
        ')', 176,
        ',', 172,
        '/', 1,
        ':', 56,
        'A', 177,
        'X', 173,
        'Y', 174,
        'a', 22,
        'b', 14,
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
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(169);
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
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 14:
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
    case 15:
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(109);
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(139);
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
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 43:
      if (lookahead == 'q') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(159);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '#', 171,
        '$', 52,
        '(', 175,
        '/', 1,
        'A', 178,
        'a', 199,
        'b', 191,
        'c', 208,
        'd', 202,
        'e', 215,
        'i', 213,
        'j', 212,
        'l', 200,
        'n', 216,
        'o', 221,
        'p', 204,
        'r', 214,
        's', 189,
        't', 188,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        ',', 172,
        '/', 1,
        'a', 199,
        'b', 191,
        'c', 208,
        'd', 202,
        'e', 215,
        'i', 213,
        'j', 212,
        'l', 200,
        'n', 216,
        'o', 221,
        'p', 204,
        'r', 214,
        's', 189,
        't', 188,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_adc);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_adc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_adb);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_adb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_asl);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_asl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bcc);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_bcc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bcs);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bcs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_beq);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_beq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bmi);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bmi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bne);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_bpl);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_brk);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_brk);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_bvc);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bvc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bvs);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_bvs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_clc);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_clc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_cld);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_cld);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_cli);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_cli);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_clv);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_clv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_cmp);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_cpx);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_cpx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_cpy);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_cpy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_dec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_dex);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_dex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_dey);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_dey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_eor);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_eor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_inc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_inx);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_inx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_iny);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_iny);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_jsr);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_jsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_lda);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_lda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ldx);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ldx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ldy);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ldy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_lsr);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ora);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ora);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_pha);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_pha);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_php);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_php);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_pla);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_pla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_plp);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_plp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_rol);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_rol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ror);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ror);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_rti);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_rti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_rts);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_rts);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_sbc);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_sbc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_sec);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_sec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_sed);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_sed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_sei);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_sei);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_sta);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_sta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_stx);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_stx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_sty);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_sty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_tax);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_tax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_tay);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_tay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_tsx);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tsx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_txa);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_txa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_txs);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_txs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_tya);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_tya);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_accumulator);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_accumulator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'c', 192,
        'e', 220,
        'i', 225,
        'm', 205,
        'n', 203,
        'p', 210,
        'r', 207,
        'v', 193,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 's') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_adc] = ACTIONS(1),
    [anon_sym_adb] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_accumulator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_label] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_adc] = ACTIONS(7),
    [anon_sym_adb] = ACTIONS(7),
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
    [sym_line_comment] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_operand] = STATE(12),
    [sym_immediate] = STATE(9),
    [sym_absolute] = STATE(9),
    [sym_absolute_x] = STATE(9),
    [sym_absolute_y] = STATE(9),
    [sym_zero_page] = STATE(9),
    [sym_zero_page_x] = STATE(9),
    [sym_zero_page_y] = STATE(9),
    [sym_indirect] = STATE(9),
    [sym_indirect_x] = STATE(9),
    [sym_indirect_y] = STATE(9),
    [sym_relative] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_adc] = ACTIONS(15),
    [anon_sym_adb] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_asl] = ACTIONS(15),
    [anon_sym_bcc] = ACTIONS(15),
    [anon_sym_bcs] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bit] = ACTIONS(15),
    [anon_sym_bmi] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bpl] = ACTIONS(15),
    [anon_sym_brk] = ACTIONS(15),
    [anon_sym_bvc] = ACTIONS(15),
    [anon_sym_bvs] = ACTIONS(15),
    [anon_sym_clc] = ACTIONS(15),
    [anon_sym_cld] = ACTIONS(15),
    [anon_sym_cli] = ACTIONS(15),
    [anon_sym_clv] = ACTIONS(15),
    [anon_sym_cmp] = ACTIONS(15),
    [anon_sym_cpx] = ACTIONS(15),
    [anon_sym_cpy] = ACTIONS(15),
    [anon_sym_dec] = ACTIONS(15),
    [anon_sym_dex] = ACTIONS(15),
    [anon_sym_dey] = ACTIONS(15),
    [anon_sym_eor] = ACTIONS(15),
    [anon_sym_inc] = ACTIONS(15),
    [anon_sym_inx] = ACTIONS(15),
    [anon_sym_iny] = ACTIONS(15),
    [anon_sym_jmp] = ACTIONS(15),
    [anon_sym_jsr] = ACTIONS(15),
    [anon_sym_lda] = ACTIONS(15),
    [anon_sym_ldx] = ACTIONS(15),
    [anon_sym_ldy] = ACTIONS(15),
    [anon_sym_lsr] = ACTIONS(15),
    [anon_sym_nop] = ACTIONS(15),
    [anon_sym_ora] = ACTIONS(15),
    [anon_sym_pha] = ACTIONS(15),
    [anon_sym_php] = ACTIONS(15),
    [anon_sym_pla] = ACTIONS(15),
    [anon_sym_plp] = ACTIONS(15),
    [anon_sym_rol] = ACTIONS(15),
    [anon_sym_ror] = ACTIONS(15),
    [anon_sym_rti] = ACTIONS(15),
    [anon_sym_rts] = ACTIONS(15),
    [anon_sym_sbc] = ACTIONS(15),
    [anon_sym_sec] = ACTIONS(15),
    [anon_sym_sed] = ACTIONS(15),
    [anon_sym_sei] = ACTIONS(15),
    [anon_sym_sta] = ACTIONS(15),
    [anon_sym_stx] = ACTIONS(15),
    [anon_sym_sty] = ACTIONS(15),
    [anon_sym_tax] = ACTIONS(15),
    [anon_sym_tay] = ACTIONS(15),
    [anon_sym_tsx] = ACTIONS(15),
    [anon_sym_txa] = ACTIONS(15),
    [anon_sym_txs] = ACTIONS(15),
    [anon_sym_tya] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_accumulator] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_label] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_adc] = ACTIONS(7),
    [anon_sym_adb] = ACTIONS(7),
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
    [sym_line_comment] = ACTIONS(29),
    [sym_block_comment] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_adc] = ACTIONS(33),
    [anon_sym_adb] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_asl] = ACTIONS(33),
    [anon_sym_bcc] = ACTIONS(33),
    [anon_sym_bcs] = ACTIONS(33),
    [anon_sym_beq] = ACTIONS(33),
    [anon_sym_bit] = ACTIONS(33),
    [anon_sym_bmi] = ACTIONS(33),
    [anon_sym_bne] = ACTIONS(33),
    [anon_sym_bpl] = ACTIONS(33),
    [anon_sym_brk] = ACTIONS(33),
    [anon_sym_bvc] = ACTIONS(33),
    [anon_sym_bvs] = ACTIONS(33),
    [anon_sym_clc] = ACTIONS(33),
    [anon_sym_cld] = ACTIONS(33),
    [anon_sym_cli] = ACTIONS(33),
    [anon_sym_clv] = ACTIONS(33),
    [anon_sym_cmp] = ACTIONS(33),
    [anon_sym_cpx] = ACTIONS(33),
    [anon_sym_cpy] = ACTIONS(33),
    [anon_sym_dec] = ACTIONS(33),
    [anon_sym_dex] = ACTIONS(33),
    [anon_sym_dey] = ACTIONS(33),
    [anon_sym_eor] = ACTIONS(33),
    [anon_sym_inc] = ACTIONS(33),
    [anon_sym_inx] = ACTIONS(33),
    [anon_sym_iny] = ACTIONS(33),
    [anon_sym_jmp] = ACTIONS(33),
    [anon_sym_jsr] = ACTIONS(33),
    [anon_sym_lda] = ACTIONS(33),
    [anon_sym_ldx] = ACTIONS(33),
    [anon_sym_ldy] = ACTIONS(33),
    [anon_sym_lsr] = ACTIONS(33),
    [anon_sym_nop] = ACTIONS(33),
    [anon_sym_ora] = ACTIONS(33),
    [anon_sym_pha] = ACTIONS(33),
    [anon_sym_php] = ACTIONS(33),
    [anon_sym_pla] = ACTIONS(33),
    [anon_sym_plp] = ACTIONS(33),
    [anon_sym_rol] = ACTIONS(33),
    [anon_sym_ror] = ACTIONS(33),
    [anon_sym_rti] = ACTIONS(33),
    [anon_sym_rts] = ACTIONS(33),
    [anon_sym_sbc] = ACTIONS(33),
    [anon_sym_sec] = ACTIONS(33),
    [anon_sym_sed] = ACTIONS(33),
    [anon_sym_sei] = ACTIONS(33),
    [anon_sym_sta] = ACTIONS(33),
    [anon_sym_stx] = ACTIONS(33),
    [anon_sym_sty] = ACTIONS(33),
    [anon_sym_tax] = ACTIONS(33),
    [anon_sym_tay] = ACTIONS(33),
    [anon_sym_tsx] = ACTIONS(33),
    [anon_sym_txa] = ACTIONS(33),
    [anon_sym_txs] = ACTIONS(33),
    [anon_sym_tya] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_accumulator] = ACTIONS(33),
    [sym_number] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(31),
    [sym_block_comment] = ACTIONS(31),
  },
  [5] = {
    [sym_label] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_mnemonic] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_adc] = ACTIONS(37),
    [anon_sym_adb] = ACTIONS(37),
    [anon_sym_and] = ACTIONS(37),
    [anon_sym_asl] = ACTIONS(37),
    [anon_sym_bcc] = ACTIONS(37),
    [anon_sym_bcs] = ACTIONS(37),
    [anon_sym_beq] = ACTIONS(37),
    [anon_sym_bit] = ACTIONS(37),
    [anon_sym_bmi] = ACTIONS(37),
    [anon_sym_bne] = ACTIONS(37),
    [anon_sym_bpl] = ACTIONS(37),
    [anon_sym_brk] = ACTIONS(37),
    [anon_sym_bvc] = ACTIONS(37),
    [anon_sym_bvs] = ACTIONS(37),
    [anon_sym_clc] = ACTIONS(37),
    [anon_sym_cld] = ACTIONS(37),
    [anon_sym_cli] = ACTIONS(37),
    [anon_sym_clv] = ACTIONS(37),
    [anon_sym_cmp] = ACTIONS(37),
    [anon_sym_cpx] = ACTIONS(37),
    [anon_sym_cpy] = ACTIONS(37),
    [anon_sym_dec] = ACTIONS(37),
    [anon_sym_dex] = ACTIONS(37),
    [anon_sym_dey] = ACTIONS(37),
    [anon_sym_eor] = ACTIONS(37),
    [anon_sym_inc] = ACTIONS(37),
    [anon_sym_inx] = ACTIONS(37),
    [anon_sym_iny] = ACTIONS(37),
    [anon_sym_jmp] = ACTIONS(37),
    [anon_sym_jsr] = ACTIONS(37),
    [anon_sym_lda] = ACTIONS(37),
    [anon_sym_ldx] = ACTIONS(37),
    [anon_sym_ldy] = ACTIONS(37),
    [anon_sym_lsr] = ACTIONS(37),
    [anon_sym_nop] = ACTIONS(37),
    [anon_sym_ora] = ACTIONS(37),
    [anon_sym_pha] = ACTIONS(37),
    [anon_sym_php] = ACTIONS(37),
    [anon_sym_pla] = ACTIONS(37),
    [anon_sym_plp] = ACTIONS(37),
    [anon_sym_rol] = ACTIONS(37),
    [anon_sym_ror] = ACTIONS(37),
    [anon_sym_rti] = ACTIONS(37),
    [anon_sym_rts] = ACTIONS(37),
    [anon_sym_sbc] = ACTIONS(37),
    [anon_sym_sec] = ACTIONS(37),
    [anon_sym_sed] = ACTIONS(37),
    [anon_sym_sei] = ACTIONS(37),
    [anon_sym_sta] = ACTIONS(37),
    [anon_sym_stx] = ACTIONS(37),
    [anon_sym_sty] = ACTIONS(37),
    [anon_sym_tax] = ACTIONS(37),
    [anon_sym_tay] = ACTIONS(37),
    [anon_sym_tsx] = ACTIONS(37),
    [anon_sym_txa] = ACTIONS(37),
    [anon_sym_txs] = ACTIONS(37),
    [anon_sym_tya] = ACTIONS(37),
    [sym_identifier] = ACTIONS(40),
    [sym_line_comment] = ACTIONS(43),
    [sym_block_comment] = ACTIONS(43),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_adc] = ACTIONS(48),
    [anon_sym_adb] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_asl] = ACTIONS(48),
    [anon_sym_bcc] = ACTIONS(48),
    [anon_sym_bcs] = ACTIONS(48),
    [anon_sym_beq] = ACTIONS(48),
    [anon_sym_bit] = ACTIONS(48),
    [anon_sym_bmi] = ACTIONS(48),
    [anon_sym_bne] = ACTIONS(48),
    [anon_sym_bpl] = ACTIONS(48),
    [anon_sym_brk] = ACTIONS(48),
    [anon_sym_bvc] = ACTIONS(48),
    [anon_sym_bvs] = ACTIONS(48),
    [anon_sym_clc] = ACTIONS(48),
    [anon_sym_cld] = ACTIONS(48),
    [anon_sym_cli] = ACTIONS(48),
    [anon_sym_clv] = ACTIONS(48),
    [anon_sym_cmp] = ACTIONS(48),
    [anon_sym_cpx] = ACTIONS(48),
    [anon_sym_cpy] = ACTIONS(48),
    [anon_sym_dec] = ACTIONS(48),
    [anon_sym_dex] = ACTIONS(48),
    [anon_sym_dey] = ACTIONS(48),
    [anon_sym_eor] = ACTIONS(48),
    [anon_sym_inc] = ACTIONS(48),
    [anon_sym_inx] = ACTIONS(48),
    [anon_sym_iny] = ACTIONS(48),
    [anon_sym_jmp] = ACTIONS(48),
    [anon_sym_jsr] = ACTIONS(48),
    [anon_sym_lda] = ACTIONS(48),
    [anon_sym_ldx] = ACTIONS(48),
    [anon_sym_ldy] = ACTIONS(48),
    [anon_sym_lsr] = ACTIONS(48),
    [anon_sym_nop] = ACTIONS(48),
    [anon_sym_ora] = ACTIONS(48),
    [anon_sym_pha] = ACTIONS(48),
    [anon_sym_php] = ACTIONS(48),
    [anon_sym_pla] = ACTIONS(48),
    [anon_sym_plp] = ACTIONS(48),
    [anon_sym_rol] = ACTIONS(48),
    [anon_sym_ror] = ACTIONS(48),
    [anon_sym_rti] = ACTIONS(48),
    [anon_sym_rts] = ACTIONS(48),
    [anon_sym_sbc] = ACTIONS(48),
    [anon_sym_sec] = ACTIONS(48),
    [anon_sym_sed] = ACTIONS(48),
    [anon_sym_sei] = ACTIONS(48),
    [anon_sym_sta] = ACTIONS(48),
    [anon_sym_stx] = ACTIONS(48),
    [anon_sym_sty] = ACTIONS(48),
    [anon_sym_tax] = ACTIONS(48),
    [anon_sym_tay] = ACTIONS(48),
    [anon_sym_tsx] = ACTIONS(48),
    [anon_sym_txa] = ACTIONS(48),
    [anon_sym_txs] = ACTIONS(48),
    [anon_sym_tya] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(50),
    [sym_identifier] = ACTIONS(48),
    [sym_line_comment] = ACTIONS(46),
    [sym_block_comment] = ACTIONS(46),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_adc] = ACTIONS(54),
    [anon_sym_adb] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(54),
    [anon_sym_asl] = ACTIONS(54),
    [anon_sym_bcc] = ACTIONS(54),
    [anon_sym_bcs] = ACTIONS(54),
    [anon_sym_beq] = ACTIONS(54),
    [anon_sym_bit] = ACTIONS(54),
    [anon_sym_bmi] = ACTIONS(54),
    [anon_sym_bne] = ACTIONS(54),
    [anon_sym_bpl] = ACTIONS(54),
    [anon_sym_brk] = ACTIONS(54),
    [anon_sym_bvc] = ACTIONS(54),
    [anon_sym_bvs] = ACTIONS(54),
    [anon_sym_clc] = ACTIONS(54),
    [anon_sym_cld] = ACTIONS(54),
    [anon_sym_cli] = ACTIONS(54),
    [anon_sym_clv] = ACTIONS(54),
    [anon_sym_cmp] = ACTIONS(54),
    [anon_sym_cpx] = ACTIONS(54),
    [anon_sym_cpy] = ACTIONS(54),
    [anon_sym_dec] = ACTIONS(54),
    [anon_sym_dex] = ACTIONS(54),
    [anon_sym_dey] = ACTIONS(54),
    [anon_sym_eor] = ACTIONS(54),
    [anon_sym_inc] = ACTIONS(54),
    [anon_sym_inx] = ACTIONS(54),
    [anon_sym_iny] = ACTIONS(54),
    [anon_sym_jmp] = ACTIONS(54),
    [anon_sym_jsr] = ACTIONS(54),
    [anon_sym_lda] = ACTIONS(54),
    [anon_sym_ldx] = ACTIONS(54),
    [anon_sym_ldy] = ACTIONS(54),
    [anon_sym_lsr] = ACTIONS(54),
    [anon_sym_nop] = ACTIONS(54),
    [anon_sym_ora] = ACTIONS(54),
    [anon_sym_pha] = ACTIONS(54),
    [anon_sym_php] = ACTIONS(54),
    [anon_sym_pla] = ACTIONS(54),
    [anon_sym_plp] = ACTIONS(54),
    [anon_sym_rol] = ACTIONS(54),
    [anon_sym_ror] = ACTIONS(54),
    [anon_sym_rti] = ACTIONS(54),
    [anon_sym_rts] = ACTIONS(54),
    [anon_sym_sbc] = ACTIONS(54),
    [anon_sym_sec] = ACTIONS(54),
    [anon_sym_sed] = ACTIONS(54),
    [anon_sym_sei] = ACTIONS(54),
    [anon_sym_sta] = ACTIONS(54),
    [anon_sym_stx] = ACTIONS(54),
    [anon_sym_sty] = ACTIONS(54),
    [anon_sym_tax] = ACTIONS(54),
    [anon_sym_tay] = ACTIONS(54),
    [anon_sym_tsx] = ACTIONS(54),
    [anon_sym_txa] = ACTIONS(54),
    [anon_sym_txs] = ACTIONS(54),
    [anon_sym_tya] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(56),
    [sym_identifier] = ACTIONS(54),
    [sym_line_comment] = ACTIONS(52),
    [sym_block_comment] = ACTIONS(52),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_adc] = ACTIONS(60),
    [anon_sym_adb] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_asl] = ACTIONS(60),
    [anon_sym_bcc] = ACTIONS(60),
    [anon_sym_bcs] = ACTIONS(60),
    [anon_sym_beq] = ACTIONS(60),
    [anon_sym_bit] = ACTIONS(60),
    [anon_sym_bmi] = ACTIONS(60),
    [anon_sym_bne] = ACTIONS(60),
    [anon_sym_bpl] = ACTIONS(60),
    [anon_sym_brk] = ACTIONS(60),
    [anon_sym_bvc] = ACTIONS(60),
    [anon_sym_bvs] = ACTIONS(60),
    [anon_sym_clc] = ACTIONS(60),
    [anon_sym_cld] = ACTIONS(60),
    [anon_sym_cli] = ACTIONS(60),
    [anon_sym_clv] = ACTIONS(60),
    [anon_sym_cmp] = ACTIONS(60),
    [anon_sym_cpx] = ACTIONS(60),
    [anon_sym_cpy] = ACTIONS(60),
    [anon_sym_dec] = ACTIONS(60),
    [anon_sym_dex] = ACTIONS(60),
    [anon_sym_dey] = ACTIONS(60),
    [anon_sym_eor] = ACTIONS(60),
    [anon_sym_inc] = ACTIONS(60),
    [anon_sym_inx] = ACTIONS(60),
    [anon_sym_iny] = ACTIONS(60),
    [anon_sym_jmp] = ACTIONS(60),
    [anon_sym_jsr] = ACTIONS(60),
    [anon_sym_lda] = ACTIONS(60),
    [anon_sym_ldx] = ACTIONS(60),
    [anon_sym_ldy] = ACTIONS(60),
    [anon_sym_lsr] = ACTIONS(60),
    [anon_sym_nop] = ACTIONS(60),
    [anon_sym_ora] = ACTIONS(60),
    [anon_sym_pha] = ACTIONS(60),
    [anon_sym_php] = ACTIONS(60),
    [anon_sym_pla] = ACTIONS(60),
    [anon_sym_plp] = ACTIONS(60),
    [anon_sym_rol] = ACTIONS(60),
    [anon_sym_ror] = ACTIONS(60),
    [anon_sym_rti] = ACTIONS(60),
    [anon_sym_rts] = ACTIONS(60),
    [anon_sym_sbc] = ACTIONS(60),
    [anon_sym_sec] = ACTIONS(60),
    [anon_sym_sed] = ACTIONS(60),
    [anon_sym_sei] = ACTIONS(60),
    [anon_sym_sta] = ACTIONS(60),
    [anon_sym_stx] = ACTIONS(60),
    [anon_sym_sty] = ACTIONS(60),
    [anon_sym_tax] = ACTIONS(60),
    [anon_sym_tay] = ACTIONS(60),
    [anon_sym_tsx] = ACTIONS(60),
    [anon_sym_txa] = ACTIONS(60),
    [anon_sym_txs] = ACTIONS(60),
    [anon_sym_tya] = ACTIONS(60),
    [sym_identifier] = ACTIONS(60),
    [sym_line_comment] = ACTIONS(58),
    [sym_block_comment] = ACTIONS(58),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_adc] = ACTIONS(64),
    [anon_sym_adb] = ACTIONS(64),
    [anon_sym_and] = ACTIONS(64),
    [anon_sym_asl] = ACTIONS(64),
    [anon_sym_bcc] = ACTIONS(64),
    [anon_sym_bcs] = ACTIONS(64),
    [anon_sym_beq] = ACTIONS(64),
    [anon_sym_bit] = ACTIONS(64),
    [anon_sym_bmi] = ACTIONS(64),
    [anon_sym_bne] = ACTIONS(64),
    [anon_sym_bpl] = ACTIONS(64),
    [anon_sym_brk] = ACTIONS(64),
    [anon_sym_bvc] = ACTIONS(64),
    [anon_sym_bvs] = ACTIONS(64),
    [anon_sym_clc] = ACTIONS(64),
    [anon_sym_cld] = ACTIONS(64),
    [anon_sym_cli] = ACTIONS(64),
    [anon_sym_clv] = ACTIONS(64),
    [anon_sym_cmp] = ACTIONS(64),
    [anon_sym_cpx] = ACTIONS(64),
    [anon_sym_cpy] = ACTIONS(64),
    [anon_sym_dec] = ACTIONS(64),
    [anon_sym_dex] = ACTIONS(64),
    [anon_sym_dey] = ACTIONS(64),
    [anon_sym_eor] = ACTIONS(64),
    [anon_sym_inc] = ACTIONS(64),
    [anon_sym_inx] = ACTIONS(64),
    [anon_sym_iny] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_jsr] = ACTIONS(64),
    [anon_sym_lda] = ACTIONS(64),
    [anon_sym_ldx] = ACTIONS(64),
    [anon_sym_ldy] = ACTIONS(64),
    [anon_sym_lsr] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_ora] = ACTIONS(64),
    [anon_sym_pha] = ACTIONS(64),
    [anon_sym_php] = ACTIONS(64),
    [anon_sym_pla] = ACTIONS(64),
    [anon_sym_plp] = ACTIONS(64),
    [anon_sym_rol] = ACTIONS(64),
    [anon_sym_ror] = ACTIONS(64),
    [anon_sym_rti] = ACTIONS(64),
    [anon_sym_rts] = ACTIONS(64),
    [anon_sym_sbc] = ACTIONS(64),
    [anon_sym_sec] = ACTIONS(64),
    [anon_sym_sed] = ACTIONS(64),
    [anon_sym_sei] = ACTIONS(64),
    [anon_sym_sta] = ACTIONS(64),
    [anon_sym_stx] = ACTIONS(64),
    [anon_sym_sty] = ACTIONS(64),
    [anon_sym_tax] = ACTIONS(64),
    [anon_sym_tay] = ACTIONS(64),
    [anon_sym_tsx] = ACTIONS(64),
    [anon_sym_txa] = ACTIONS(64),
    [anon_sym_txs] = ACTIONS(64),
    [anon_sym_tya] = ACTIONS(64),
    [sym_identifier] = ACTIONS(64),
    [sym_line_comment] = ACTIONS(62),
    [sym_block_comment] = ACTIONS(62),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_adc] = ACTIONS(68),
    [anon_sym_adb] = ACTIONS(68),
    [anon_sym_and] = ACTIONS(68),
    [anon_sym_asl] = ACTIONS(68),
    [anon_sym_bcc] = ACTIONS(68),
    [anon_sym_bcs] = ACTIONS(68),
    [anon_sym_beq] = ACTIONS(68),
    [anon_sym_bit] = ACTIONS(68),
    [anon_sym_bmi] = ACTIONS(68),
    [anon_sym_bne] = ACTIONS(68),
    [anon_sym_bpl] = ACTIONS(68),
    [anon_sym_brk] = ACTIONS(68),
    [anon_sym_bvc] = ACTIONS(68),
    [anon_sym_bvs] = ACTIONS(68),
    [anon_sym_clc] = ACTIONS(68),
    [anon_sym_cld] = ACTIONS(68),
    [anon_sym_cli] = ACTIONS(68),
    [anon_sym_clv] = ACTIONS(68),
    [anon_sym_cmp] = ACTIONS(68),
    [anon_sym_cpx] = ACTIONS(68),
    [anon_sym_cpy] = ACTIONS(68),
    [anon_sym_dec] = ACTIONS(68),
    [anon_sym_dex] = ACTIONS(68),
    [anon_sym_dey] = ACTIONS(68),
    [anon_sym_eor] = ACTIONS(68),
    [anon_sym_inc] = ACTIONS(68),
    [anon_sym_inx] = ACTIONS(68),
    [anon_sym_iny] = ACTIONS(68),
    [anon_sym_jmp] = ACTIONS(68),
    [anon_sym_jsr] = ACTIONS(68),
    [anon_sym_lda] = ACTIONS(68),
    [anon_sym_ldx] = ACTIONS(68),
    [anon_sym_ldy] = ACTIONS(68),
    [anon_sym_lsr] = ACTIONS(68),
    [anon_sym_nop] = ACTIONS(68),
    [anon_sym_ora] = ACTIONS(68),
    [anon_sym_pha] = ACTIONS(68),
    [anon_sym_php] = ACTIONS(68),
    [anon_sym_pla] = ACTIONS(68),
    [anon_sym_plp] = ACTIONS(68),
    [anon_sym_rol] = ACTIONS(68),
    [anon_sym_ror] = ACTIONS(68),
    [anon_sym_rti] = ACTIONS(68),
    [anon_sym_rts] = ACTIONS(68),
    [anon_sym_sbc] = ACTIONS(68),
    [anon_sym_sec] = ACTIONS(68),
    [anon_sym_sed] = ACTIONS(68),
    [anon_sym_sei] = ACTIONS(68),
    [anon_sym_sta] = ACTIONS(68),
    [anon_sym_stx] = ACTIONS(68),
    [anon_sym_sty] = ACTIONS(68),
    [anon_sym_tax] = ACTIONS(68),
    [anon_sym_tay] = ACTIONS(68),
    [anon_sym_tsx] = ACTIONS(68),
    [anon_sym_txa] = ACTIONS(68),
    [anon_sym_txs] = ACTIONS(68),
    [anon_sym_tya] = ACTIONS(68),
    [sym_identifier] = ACTIONS(68),
    [sym_line_comment] = ACTIONS(66),
    [sym_block_comment] = ACTIONS(66),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_adc] = ACTIONS(72),
    [anon_sym_adb] = ACTIONS(72),
    [anon_sym_and] = ACTIONS(72),
    [anon_sym_asl] = ACTIONS(72),
    [anon_sym_bcc] = ACTIONS(72),
    [anon_sym_bcs] = ACTIONS(72),
    [anon_sym_beq] = ACTIONS(72),
    [anon_sym_bit] = ACTIONS(72),
    [anon_sym_bmi] = ACTIONS(72),
    [anon_sym_bne] = ACTIONS(72),
    [anon_sym_bpl] = ACTIONS(72),
    [anon_sym_brk] = ACTIONS(72),
    [anon_sym_bvc] = ACTIONS(72),
    [anon_sym_bvs] = ACTIONS(72),
    [anon_sym_clc] = ACTIONS(72),
    [anon_sym_cld] = ACTIONS(72),
    [anon_sym_cli] = ACTIONS(72),
    [anon_sym_clv] = ACTIONS(72),
    [anon_sym_cmp] = ACTIONS(72),
    [anon_sym_cpx] = ACTIONS(72),
    [anon_sym_cpy] = ACTIONS(72),
    [anon_sym_dec] = ACTIONS(72),
    [anon_sym_dex] = ACTIONS(72),
    [anon_sym_dey] = ACTIONS(72),
    [anon_sym_eor] = ACTIONS(72),
    [anon_sym_inc] = ACTIONS(72),
    [anon_sym_inx] = ACTIONS(72),
    [anon_sym_iny] = ACTIONS(72),
    [anon_sym_jmp] = ACTIONS(72),
    [anon_sym_jsr] = ACTIONS(72),
    [anon_sym_lda] = ACTIONS(72),
    [anon_sym_ldx] = ACTIONS(72),
    [anon_sym_ldy] = ACTIONS(72),
    [anon_sym_lsr] = ACTIONS(72),
    [anon_sym_nop] = ACTIONS(72),
    [anon_sym_ora] = ACTIONS(72),
    [anon_sym_pha] = ACTIONS(72),
    [anon_sym_php] = ACTIONS(72),
    [anon_sym_pla] = ACTIONS(72),
    [anon_sym_plp] = ACTIONS(72),
    [anon_sym_rol] = ACTIONS(72),
    [anon_sym_ror] = ACTIONS(72),
    [anon_sym_rti] = ACTIONS(72),
    [anon_sym_rts] = ACTIONS(72),
    [anon_sym_sbc] = ACTIONS(72),
    [anon_sym_sec] = ACTIONS(72),
    [anon_sym_sed] = ACTIONS(72),
    [anon_sym_sei] = ACTIONS(72),
    [anon_sym_sta] = ACTIONS(72),
    [anon_sym_stx] = ACTIONS(72),
    [anon_sym_sty] = ACTIONS(72),
    [anon_sym_tax] = ACTIONS(72),
    [anon_sym_tay] = ACTIONS(72),
    [anon_sym_tsx] = ACTIONS(72),
    [anon_sym_txa] = ACTIONS(72),
    [anon_sym_txs] = ACTIONS(72),
    [anon_sym_tya] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
    [sym_line_comment] = ACTIONS(70),
    [sym_block_comment] = ACTIONS(70),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_adc] = ACTIONS(76),
    [anon_sym_adb] = ACTIONS(76),
    [anon_sym_and] = ACTIONS(76),
    [anon_sym_asl] = ACTIONS(76),
    [anon_sym_bcc] = ACTIONS(76),
    [anon_sym_bcs] = ACTIONS(76),
    [anon_sym_beq] = ACTIONS(76),
    [anon_sym_bit] = ACTIONS(76),
    [anon_sym_bmi] = ACTIONS(76),
    [anon_sym_bne] = ACTIONS(76),
    [anon_sym_bpl] = ACTIONS(76),
    [anon_sym_brk] = ACTIONS(76),
    [anon_sym_bvc] = ACTIONS(76),
    [anon_sym_bvs] = ACTIONS(76),
    [anon_sym_clc] = ACTIONS(76),
    [anon_sym_cld] = ACTIONS(76),
    [anon_sym_cli] = ACTIONS(76),
    [anon_sym_clv] = ACTIONS(76),
    [anon_sym_cmp] = ACTIONS(76),
    [anon_sym_cpx] = ACTIONS(76),
    [anon_sym_cpy] = ACTIONS(76),
    [anon_sym_dec] = ACTIONS(76),
    [anon_sym_dex] = ACTIONS(76),
    [anon_sym_dey] = ACTIONS(76),
    [anon_sym_eor] = ACTIONS(76),
    [anon_sym_inc] = ACTIONS(76),
    [anon_sym_inx] = ACTIONS(76),
    [anon_sym_iny] = ACTIONS(76),
    [anon_sym_jmp] = ACTIONS(76),
    [anon_sym_jsr] = ACTIONS(76),
    [anon_sym_lda] = ACTIONS(76),
    [anon_sym_ldx] = ACTIONS(76),
    [anon_sym_ldy] = ACTIONS(76),
    [anon_sym_lsr] = ACTIONS(76),
    [anon_sym_nop] = ACTIONS(76),
    [anon_sym_ora] = ACTIONS(76),
    [anon_sym_pha] = ACTIONS(76),
    [anon_sym_php] = ACTIONS(76),
    [anon_sym_pla] = ACTIONS(76),
    [anon_sym_plp] = ACTIONS(76),
    [anon_sym_rol] = ACTIONS(76),
    [anon_sym_ror] = ACTIONS(76),
    [anon_sym_rti] = ACTIONS(76),
    [anon_sym_rts] = ACTIONS(76),
    [anon_sym_sbc] = ACTIONS(76),
    [anon_sym_sec] = ACTIONS(76),
    [anon_sym_sed] = ACTIONS(76),
    [anon_sym_sei] = ACTIONS(76),
    [anon_sym_sta] = ACTIONS(76),
    [anon_sym_stx] = ACTIONS(76),
    [anon_sym_sty] = ACTIONS(76),
    [anon_sym_tax] = ACTIONS(76),
    [anon_sym_tay] = ACTIONS(76),
    [anon_sym_tsx] = ACTIONS(76),
    [anon_sym_txa] = ACTIONS(76),
    [anon_sym_txs] = ACTIONS(76),
    [anon_sym_tya] = ACTIONS(76),
    [sym_identifier] = ACTIONS(76),
    [sym_line_comment] = ACTIONS(74),
    [sym_block_comment] = ACTIONS(74),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_adc] = ACTIONS(81),
    [anon_sym_adb] = ACTIONS(81),
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
    [sym_line_comment] = ACTIONS(78),
    [sym_block_comment] = ACTIONS(78),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_adc] = ACTIONS(86),
    [anon_sym_adb] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(86),
    [anon_sym_asl] = ACTIONS(86),
    [anon_sym_bcc] = ACTIONS(86),
    [anon_sym_bcs] = ACTIONS(86),
    [anon_sym_beq] = ACTIONS(86),
    [anon_sym_bit] = ACTIONS(86),
    [anon_sym_bmi] = ACTIONS(86),
    [anon_sym_bne] = ACTIONS(86),
    [anon_sym_bpl] = ACTIONS(86),
    [anon_sym_brk] = ACTIONS(86),
    [anon_sym_bvc] = ACTIONS(86),
    [anon_sym_bvs] = ACTIONS(86),
    [anon_sym_clc] = ACTIONS(86),
    [anon_sym_cld] = ACTIONS(86),
    [anon_sym_cli] = ACTIONS(86),
    [anon_sym_clv] = ACTIONS(86),
    [anon_sym_cmp] = ACTIONS(86),
    [anon_sym_cpx] = ACTIONS(86),
    [anon_sym_cpy] = ACTIONS(86),
    [anon_sym_dec] = ACTIONS(86),
    [anon_sym_dex] = ACTIONS(86),
    [anon_sym_dey] = ACTIONS(86),
    [anon_sym_eor] = ACTIONS(86),
    [anon_sym_inc] = ACTIONS(86),
    [anon_sym_inx] = ACTIONS(86),
    [anon_sym_iny] = ACTIONS(86),
    [anon_sym_jmp] = ACTIONS(86),
    [anon_sym_jsr] = ACTIONS(86),
    [anon_sym_lda] = ACTIONS(86),
    [anon_sym_ldx] = ACTIONS(86),
    [anon_sym_ldy] = ACTIONS(86),
    [anon_sym_lsr] = ACTIONS(86),
    [anon_sym_nop] = ACTIONS(86),
    [anon_sym_ora] = ACTIONS(86),
    [anon_sym_pha] = ACTIONS(86),
    [anon_sym_php] = ACTIONS(86),
    [anon_sym_pla] = ACTIONS(86),
    [anon_sym_plp] = ACTIONS(86),
    [anon_sym_rol] = ACTIONS(86),
    [anon_sym_ror] = ACTIONS(86),
    [anon_sym_rti] = ACTIONS(86),
    [anon_sym_rts] = ACTIONS(86),
    [anon_sym_sbc] = ACTIONS(86),
    [anon_sym_sec] = ACTIONS(86),
    [anon_sym_sed] = ACTIONS(86),
    [anon_sym_sei] = ACTIONS(86),
    [anon_sym_sta] = ACTIONS(86),
    [anon_sym_stx] = ACTIONS(86),
    [anon_sym_sty] = ACTIONS(86),
    [anon_sym_tax] = ACTIONS(86),
    [anon_sym_tay] = ACTIONS(86),
    [anon_sym_tsx] = ACTIONS(86),
    [anon_sym_txa] = ACTIONS(86),
    [anon_sym_txs] = ACTIONS(86),
    [anon_sym_tya] = ACTIONS(86),
    [sym_identifier] = ACTIONS(86),
    [sym_line_comment] = ACTIONS(84),
    [sym_block_comment] = ACTIONS(84),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_adc] = ACTIONS(90),
    [anon_sym_adb] = ACTIONS(90),
    [anon_sym_and] = ACTIONS(90),
    [anon_sym_asl] = ACTIONS(90),
    [anon_sym_bcc] = ACTIONS(90),
    [anon_sym_bcs] = ACTIONS(90),
    [anon_sym_beq] = ACTIONS(90),
    [anon_sym_bit] = ACTIONS(90),
    [anon_sym_bmi] = ACTIONS(90),
    [anon_sym_bne] = ACTIONS(90),
    [anon_sym_bpl] = ACTIONS(90),
    [anon_sym_brk] = ACTIONS(90),
    [anon_sym_bvc] = ACTIONS(90),
    [anon_sym_bvs] = ACTIONS(90),
    [anon_sym_clc] = ACTIONS(90),
    [anon_sym_cld] = ACTIONS(90),
    [anon_sym_cli] = ACTIONS(90),
    [anon_sym_clv] = ACTIONS(90),
    [anon_sym_cmp] = ACTIONS(90),
    [anon_sym_cpx] = ACTIONS(90),
    [anon_sym_cpy] = ACTIONS(90),
    [anon_sym_dec] = ACTIONS(90),
    [anon_sym_dex] = ACTIONS(90),
    [anon_sym_dey] = ACTIONS(90),
    [anon_sym_eor] = ACTIONS(90),
    [anon_sym_inc] = ACTIONS(90),
    [anon_sym_inx] = ACTIONS(90),
    [anon_sym_iny] = ACTIONS(90),
    [anon_sym_jmp] = ACTIONS(90),
    [anon_sym_jsr] = ACTIONS(90),
    [anon_sym_lda] = ACTIONS(90),
    [anon_sym_ldx] = ACTIONS(90),
    [anon_sym_ldy] = ACTIONS(90),
    [anon_sym_lsr] = ACTIONS(90),
    [anon_sym_nop] = ACTIONS(90),
    [anon_sym_ora] = ACTIONS(90),
    [anon_sym_pha] = ACTIONS(90),
    [anon_sym_php] = ACTIONS(90),
    [anon_sym_pla] = ACTIONS(90),
    [anon_sym_plp] = ACTIONS(90),
    [anon_sym_rol] = ACTIONS(90),
    [anon_sym_ror] = ACTIONS(90),
    [anon_sym_rti] = ACTIONS(90),
    [anon_sym_rts] = ACTIONS(90),
    [anon_sym_sbc] = ACTIONS(90),
    [anon_sym_sec] = ACTIONS(90),
    [anon_sym_sed] = ACTIONS(90),
    [anon_sym_sei] = ACTIONS(90),
    [anon_sym_sta] = ACTIONS(90),
    [anon_sym_stx] = ACTIONS(90),
    [anon_sym_sty] = ACTIONS(90),
    [anon_sym_tax] = ACTIONS(90),
    [anon_sym_tay] = ACTIONS(90),
    [anon_sym_tsx] = ACTIONS(90),
    [anon_sym_txa] = ACTIONS(90),
    [anon_sym_txs] = ACTIONS(90),
    [anon_sym_tya] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [sym_line_comment] = ACTIONS(88),
    [sym_block_comment] = ACTIONS(88),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_adc] = ACTIONS(95),
    [anon_sym_adb] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(95),
    [anon_sym_asl] = ACTIONS(95),
    [anon_sym_bcc] = ACTIONS(95),
    [anon_sym_bcs] = ACTIONS(95),
    [anon_sym_beq] = ACTIONS(95),
    [anon_sym_bit] = ACTIONS(95),
    [anon_sym_bmi] = ACTIONS(95),
    [anon_sym_bne] = ACTIONS(95),
    [anon_sym_bpl] = ACTIONS(95),
    [anon_sym_brk] = ACTIONS(95),
    [anon_sym_bvc] = ACTIONS(95),
    [anon_sym_bvs] = ACTIONS(95),
    [anon_sym_clc] = ACTIONS(95),
    [anon_sym_cld] = ACTIONS(95),
    [anon_sym_cli] = ACTIONS(95),
    [anon_sym_clv] = ACTIONS(95),
    [anon_sym_cmp] = ACTIONS(95),
    [anon_sym_cpx] = ACTIONS(95),
    [anon_sym_cpy] = ACTIONS(95),
    [anon_sym_dec] = ACTIONS(95),
    [anon_sym_dex] = ACTIONS(95),
    [anon_sym_dey] = ACTIONS(95),
    [anon_sym_eor] = ACTIONS(95),
    [anon_sym_inc] = ACTIONS(95),
    [anon_sym_inx] = ACTIONS(95),
    [anon_sym_iny] = ACTIONS(95),
    [anon_sym_jmp] = ACTIONS(95),
    [anon_sym_jsr] = ACTIONS(95),
    [anon_sym_lda] = ACTIONS(95),
    [anon_sym_ldx] = ACTIONS(95),
    [anon_sym_ldy] = ACTIONS(95),
    [anon_sym_lsr] = ACTIONS(95),
    [anon_sym_nop] = ACTIONS(95),
    [anon_sym_ora] = ACTIONS(95),
    [anon_sym_pha] = ACTIONS(95),
    [anon_sym_php] = ACTIONS(95),
    [anon_sym_pla] = ACTIONS(95),
    [anon_sym_plp] = ACTIONS(95),
    [anon_sym_rol] = ACTIONS(95),
    [anon_sym_ror] = ACTIONS(95),
    [anon_sym_rti] = ACTIONS(95),
    [anon_sym_rts] = ACTIONS(95),
    [anon_sym_sbc] = ACTIONS(95),
    [anon_sym_sec] = ACTIONS(95),
    [anon_sym_sed] = ACTIONS(95),
    [anon_sym_sei] = ACTIONS(95),
    [anon_sym_sta] = ACTIONS(95),
    [anon_sym_stx] = ACTIONS(95),
    [anon_sym_sty] = ACTIONS(95),
    [anon_sym_tax] = ACTIONS(95),
    [anon_sym_tay] = ACTIONS(95),
    [anon_sym_tsx] = ACTIONS(95),
    [anon_sym_txa] = ACTIONS(95),
    [anon_sym_txs] = ACTIONS(95),
    [anon_sym_tya] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(92),
    [sym_block_comment] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(98), 1,
      anon_sym_X,
    ACTIONS(100), 1,
      anon_sym_Y,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [22] = 2,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [30] = 2,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [38] = 2,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [46] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [54] = 2,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [62] = 2,
    ACTIONS(116), 1,
      anon_sym_Y,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [70] = 2,
    ACTIONS(118), 1,
      anon_sym_X,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 11,
  [SMALL_STATE(19)] = 22,
  [SMALL_STATE(20)] = 30,
  [SMALL_STATE(21)] = 38,
  [SMALL_STATE(22)] = 46,
  [SMALL_STATE(23)] = 54,
  [SMALL_STATE(24)] = 62,
  [SMALL_STATE(25)] = 70,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_absolute_x, 3, 0, 0), REDUCE(sym_zero_page_x, 3, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_absolute_x, 3, 0, 0), REDUCE(sym_zero_page_x, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_x, 5, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_x, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_y, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirect_y, 5, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_absolute_y, 3, 0, 0), REDUCE(sym_zero_page_y, 3, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_absolute_y, 3, 0, 0), REDUCE(sym_zero_page_y, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
