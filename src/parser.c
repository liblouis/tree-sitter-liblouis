#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  sym__not_newline = 2,
  anon_sym_include = 3,
  anon_sym_undefined = 4,
  anon_sym_display = 5,
  anon_sym_letter = 6,
  sym_equal = 7,
  anon_sym_DASH = 8,
  sym_dot_with_zero = 9,
  anon_sym_BSLASH_BSLASH = 10,
  anon_sym_BSLASHf = 11,
  anon_sym_BSLASHn = 12,
  anon_sym_BSLASHr = 13,
  anon_sym_BSLASHs = 14,
  anon_sym_BSLASHt = 15,
  anon_sym_BSLASHv = 16,
  anon_sym_BSLASHe = 17,
  aux_sym_chars_token1 = 18,
  sym_filename = 19,
  anon_sym_LF = 20,
  anon_sym_CR_LF = 21,
  anon_sym_CR = 22,
  sym__sp = 23,
  sym__sp_maybe = 24,
  sym_source_file = 25,
  sym__line = 26,
  sym__line1 = 27,
  sym_comment = 28,
  sym_end_comment = 29,
  sym__empty_line = 30,
  sym__rule_with_comment = 31,
  sym__rule = 32,
  sym_include = 33,
  sym_undefined = 34,
  sym_display = 35,
  sym_letter = 36,
  sym__dots_with_zero_or_equal = 37,
  sym_dots_with_zero = 38,
  sym_esc_seq = 39,
  sym_chars = 40,
  sym__newline = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_dots_with_zero_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym__not_newline] = "_not_newline",
  [anon_sym_include] = "include",
  [anon_sym_undefined] = "undefined",
  [anon_sym_display] = "display",
  [anon_sym_letter] = "letter",
  [sym_equal] = "equal",
  [anon_sym_DASH] = "-",
  [sym_dot_with_zero] = "dot_with_zero",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHs] = "\\s",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHv] = "\\v",
  [anon_sym_BSLASHe] = "\\e",
  [aux_sym_chars_token1] = "chars_token1",
  [sym_filename] = "filename",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [sym__sp] = "_sp",
  [sym__sp_maybe] = "_sp_maybe",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__line1] = "_line1",
  [sym_comment] = "comment",
  [sym_end_comment] = "end_comment",
  [sym__empty_line] = "_empty_line",
  [sym__rule_with_comment] = "_rule_with_comment",
  [sym__rule] = "_rule",
  [sym_include] = "include",
  [sym_undefined] = "undefined",
  [sym_display] = "display",
  [sym_letter] = "letter",
  [sym__dots_with_zero_or_equal] = "_dots_with_zero_or_equal",
  [sym_dots_with_zero] = "dots_with_zero",
  [sym_esc_seq] = "esc_seq",
  [sym_chars] = "chars",
  [sym__newline] = "_newline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dots_with_zero_repeat1] = "dots_with_zero_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__not_newline] = sym__not_newline,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_undefined] = anon_sym_undefined,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_letter] = anon_sym_letter,
  [sym_equal] = sym_equal,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_dot_with_zero] = sym_dot_with_zero,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASHf] = anon_sym_BSLASHf,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHs] = anon_sym_BSLASHs,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHv] = anon_sym_BSLASHv,
  [anon_sym_BSLASHe] = anon_sym_BSLASHe,
  [aux_sym_chars_token1] = aux_sym_chars_token1,
  [sym_filename] = sym_filename,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__sp] = sym__sp,
  [sym__sp_maybe] = sym__sp_maybe,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__line1] = sym__line1,
  [sym_comment] = sym_comment,
  [sym_end_comment] = sym_end_comment,
  [sym__empty_line] = sym__empty_line,
  [sym__rule_with_comment] = sym__rule_with_comment,
  [sym__rule] = sym__rule,
  [sym_include] = sym_include,
  [sym_undefined] = sym_undefined,
  [sym_display] = sym_display,
  [sym_letter] = sym_letter,
  [sym__dots_with_zero_or_equal] = sym__dots_with_zero_or_equal,
  [sym_dots_with_zero] = sym_dots_with_zero,
  [sym_esc_seq] = sym_esc_seq,
  [sym_chars] = sym_chars,
  [sym__newline] = sym__newline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dots_with_zero_repeat1] = aux_sym_dots_with_zero_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__not_newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letter] = {
    .visible = true,
    .named = false,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_dot_with_zero] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHe] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_chars_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [sym__sp_maybe] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__line1] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_end_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [sym__rule_with_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [sym_display] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym__dots_with_zero_or_equal] = {
    .visible = false,
    .named = true,
  },
  [sym_dots_with_zero] = {
    .visible = true,
    .named = true,
  },
  [sym_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_chars] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dots_with_zero_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym__sp_maybe);
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 30:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__not_newline);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_dot_with_zero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASHs);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASHe);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_chars_token1);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_chars_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_filename);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__sp_maybe);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__sp_maybe);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__sp_maybe);
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHs] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_BSLASHe] = ACTIONS(1),
    [sym__sp] = ACTIONS(1),
    [sym__sp_maybe] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__line] = STATE(5),
    [sym__line1] = STATE(7),
    [sym_comment] = STATE(7),
    [sym__empty_line] = STATE(7),
    [sym__rule_with_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__sp_maybe] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_undefined,
    ACTIONS(13), 1,
      anon_sym_display,
    ACTIONS(15), 1,
      anon_sym_letter,
    ACTIONS(19), 1,
      anon_sym_CR,
    ACTIONS(17), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(14), 5,
      sym__rule,
      sym_include,
      sym_undefined,
      sym_display,
      sym_letter,
  [27] = 4,
    ACTIONS(23), 1,
      aux_sym_chars_token1,
    STATE(25), 1,
      sym_esc_seq,
    STATE(27), 1,
      sym_chars,
    ACTIONS(21), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [47] = 4,
    ACTIONS(23), 1,
      aux_sym_chars_token1,
    STATE(25), 1,
      sym_esc_seq,
    STATE(26), 1,
      sym_chars,
    ACTIONS(21), 8,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHf,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHs,
      anon_sym_BSLASHt,
      anon_sym_BSLASHv,
      anon_sym_BSLASHe,
  [67] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym__sp_maybe,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__line1,
      sym_comment,
      sym__empty_line,
      sym__rule_with_comment,
  [87] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      sym__sp_maybe,
    STATE(6), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(7), 4,
      sym__line1,
      sym_comment,
      sym__empty_line,
      sym__rule_with_comment,
  [107] = 3,
    ACTIONS(37), 1,
      anon_sym_CR,
    STATE(15), 1,
      sym__newline,
    ACTIONS(35), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [118] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      sym__sp,
    ACTIONS(43), 1,
      sym__sp_maybe,
    STATE(9), 1,
      aux_sym_dots_with_zero_repeat1,
  [131] = 4,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(48), 1,
      sym__sp,
    ACTIONS(50), 1,
      sym__sp_maybe,
    STATE(9), 1,
      aux_sym_dots_with_zero_repeat1,
  [144] = 3,
    ACTIONS(52), 1,
      sym_equal,
    ACTIONS(54), 1,
      sym_dot_with_zero,
    STATE(20), 2,
      sym__dots_with_zero_or_equal,
      sym_dots_with_zero,
  [155] = 4,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      sym__sp,
    ACTIONS(58), 1,
      sym__sp_maybe,
    STATE(8), 1,
      aux_sym_dots_with_zero_repeat1,
  [168] = 2,
    ACTIONS(62), 1,
      anon_sym_CR,
    ACTIONS(60), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [176] = 2,
    ACTIONS(50), 1,
      sym__sp_maybe,
    ACTIONS(48), 2,
      anon_sym_DASH,
      sym__sp,
  [184] = 3,
    ACTIONS(64), 1,
      sym__sp,
    ACTIONS(66), 1,
      sym__sp_maybe,
    STATE(16), 1,
      sym_end_comment,
  [194] = 2,
    ACTIONS(70), 1,
      sym__sp_maybe,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [202] = 2,
    ACTIONS(74), 1,
      anon_sym_CR,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [210] = 2,
    ACTIONS(78), 1,
      anon_sym_CR,
    ACTIONS(76), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [218] = 2,
    ACTIONS(54), 1,
      sym_dot_with_zero,
    STATE(21), 1,
      sym_dots_with_zero,
  [225] = 2,
    ACTIONS(54), 1,
      sym_dot_with_zero,
    STATE(23), 1,
      sym_dots_with_zero,
  [232] = 2,
    ACTIONS(80), 1,
      sym__sp,
    ACTIONS(82), 1,
      sym__sp_maybe,
  [239] = 2,
    ACTIONS(84), 1,
      sym__sp,
    ACTIONS(86), 1,
      sym__sp_maybe,
  [246] = 2,
    ACTIONS(88), 1,
      sym__sp,
    ACTIONS(90), 1,
      sym__sp_maybe,
  [253] = 2,
    ACTIONS(92), 1,
      sym__sp,
    ACTIONS(94), 1,
      sym__sp_maybe,
  [260] = 1,
    ACTIONS(96), 1,
      sym__sp,
  [264] = 1,
    ACTIONS(98), 1,
      sym__sp,
  [268] = 1,
    ACTIONS(100), 1,
      sym__sp,
  [272] = 1,
    ACTIONS(102), 1,
      sym__sp,
  [276] = 1,
    ACTIONS(104), 1,
      sym__not_newline,
  [280] = 1,
    ACTIONS(106), 1,
      sym_dot_with_zero,
  [284] = 1,
    ACTIONS(108), 1,
      sym__sp,
  [288] = 1,
    ACTIONS(110), 1,
      sym__not_newline,
  [292] = 1,
    ACTIONS(112), 1,
      sym_filename,
  [296] = 1,
    ACTIONS(114), 1,
      sym__sp,
  [300] = 1,
    ACTIONS(116), 1,
      sym__sp,
  [304] = 1,
    ACTIONS(118), 1,
      sym__sp,
  [308] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 246,
  [SMALL_STATE(23)] = 253,
  [SMALL_STATE(24)] = 260,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 268,
  [SMALL_STATE(27)] = 272,
  [SMALL_STATE(28)] = 276,
  [SMALL_STATE(29)] = 280,
  [SMALL_STATE(30)] = 284,
  [SMALL_STATE(31)] = 288,
  [SMALL_STATE(32)] = 292,
  [SMALL_STATE(33)] = 296,
  [SMALL_STATE(34)] = 300,
  [SMALL_STATE(35)] = 304,
  [SMALL_STATE(36)] = 308,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots_with_zero, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots_with_zero, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dots_with_zero_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dots_with_zero_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dots_with_zero_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots_with_zero, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots_with_zero, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule_with_comment, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule_with_comment, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_comment, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_comment, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letter, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letter, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display, 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefined, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undefined, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chars, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_seq, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liblouis(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
