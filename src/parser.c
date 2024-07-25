#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  anon_sym_http_COLON = 2,
  anon_sym_https_COLON = 3,
  aux_sym__hostname_without_tld_token1 = 4,
  anon_sym_DOT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym__qs_accepting = 8,
  sym__qs_non_accepting = 9,
  sym__non_url_text = 10,
  sym__space = 11,
  sym_prose = 12,
  sym__url_with_trailing_characters = 13,
  sym_url = 14,
  sym__url_fragment = 15,
  sym__protocol = 16,
  sym__hostname_without_tld = 17,
  sym__domain = 18,
  sym__url_segment = 19,
  sym__delimiter_matching_scenarios = 20,
  aux_sym__qs_middle = 21,
  aux_sym_prose_repeat1 = 22,
  aux_sym_url_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_http_COLON] = "http:",
  [anon_sym_https_COLON] = "https:",
  [aux_sym__hostname_without_tld_token1] = "_hostname_without_tld_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__qs_accepting] = "_qs_accepting",
  [sym__qs_non_accepting] = "_qs_non_accepting",
  [sym__non_url_text] = "_non_url_text",
  [sym__space] = "_space",
  [sym_prose] = "prose",
  [sym__url_with_trailing_characters] = "_url_with_trailing_characters",
  [sym_url] = "url",
  [sym__url_fragment] = "_url_fragment",
  [sym__protocol] = "_protocol",
  [sym__hostname_without_tld] = "_hostname_without_tld",
  [sym__domain] = "_domain",
  [sym__url_segment] = "_url_segment",
  [sym__delimiter_matching_scenarios] = "_delimiter_matching_scenarios",
  [aux_sym__qs_middle] = "_qs_middle",
  [aux_sym_prose_repeat1] = "prose_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_http_COLON] = anon_sym_http_COLON,
  [anon_sym_https_COLON] = anon_sym_https_COLON,
  [aux_sym__hostname_without_tld_token1] = aux_sym__hostname_without_tld_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__qs_accepting] = sym__qs_accepting,
  [sym__qs_non_accepting] = sym__qs_non_accepting,
  [sym__non_url_text] = sym__non_url_text,
  [sym__space] = sym__space,
  [sym_prose] = sym_prose,
  [sym__url_with_trailing_characters] = sym__url_with_trailing_characters,
  [sym_url] = sym_url,
  [sym__url_fragment] = sym__url_fragment,
  [sym__protocol] = sym__protocol,
  [sym__hostname_without_tld] = sym__hostname_without_tld,
  [sym__domain] = sym__domain,
  [sym__url_segment] = sym__url_segment,
  [sym__delimiter_matching_scenarios] = sym__delimiter_matching_scenarios,
  [aux_sym__qs_middle] = aux_sym__qs_middle,
  [aux_sym_prose_repeat1] = aux_sym_prose_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__hostname_without_tld_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym__qs_accepting] = {
    .visible = false,
    .named = true,
  },
  [sym__qs_non_accepting] = {
    .visible = false,
    .named = true,
  },
  [sym__non_url_text] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_prose] = {
    .visible = true,
    .named = true,
  },
  [sym__url_with_trailing_characters] = {
    .visible = false,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym__url_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__protocol] = {
    .visible = false,
    .named = true,
  },
  [sym__hostname_without_tld] = {
    .visible = false,
    .named = true,
  },
  [sym__domain] = {
    .visible = false,
    .named = true,
  },
  [sym__url_segment] = {
    .visible = false,
    .named = true,
  },
  [sym__delimiter_matching_scenarios] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__qs_middle] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
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
  [25] = 21,
  [26] = 26,
};

static TSCharacterRange sym__qs_accepting_character_set_1[] = {
  {'#', '&'}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'=', '='}, {'@', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', '~'},
};

static TSCharacterRange sym__qs_non_accepting_character_set_1[] = {
  {'!', '!'}, {'(', ')'}, {',', ','}, {'.', '.'}, {':', ';'}, {'?', '?'}, {'[', '['}, {']', ']'},
  {'{', '{'}, {'}', '}'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (set_contains(sym__qs_non_accepting_character_set_1, 10, lookahead)) ADVANCE(32);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '(', 24,
        '!', 32,
        ')', 32,
        ',', 32,
        '.', 32,
        ':', 32,
        ';', 32,
        '?', 32,
        '[', 32,
        ']', 32,
        '{', 32,
        '}', 32,
      );
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '~')) ADVANCE(31);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 25,
        '!', 32,
        '(', 32,
        ',', 32,
        '.', 32,
        ':', 32,
        ';', 32,
        '?', 32,
        '[', 32,
        ']', 32,
        '{', 32,
        '}', 32,
      );
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '~')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (set_contains(sym__qs_non_accepting_character_set_1, 10, lookahead)) ADVANCE(32);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '~')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 8:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (set_contains(sym__qs_non_accepting_character_set_1, 10, lookahead)) ADVANCE(32);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '~')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 9:
      if (eof) ADVANCE(13);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == 'h') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == 'h') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (set_contains(sym__qs_non_accepting_character_set_1, 10, lookahead)) ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == 'h') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_http_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_https_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__hostname_without_tld_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      ADVANCE_MAP(
        '!', 32,
        '(', 32,
        ')', 32,
        ',', 32,
        '.', 32,
        ':', 32,
        ';', 32,
        '?', 32,
        '[', 32,
        ']', 32,
        '{', 32,
        '}', 32,
      );
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '!', 32,
        '(', 32,
        ')', 32,
        ',', 32,
        '.', 32,
        ':', 32,
        ';', 32,
        '?', 32,
        '[', 32,
        ']', 32,
        '{', 32,
        '}', 32,
      );
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 's') ADVANCE(27);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (lookahead == ':') ADVANCE(16);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (lookahead == 'p') ADVANCE(26);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (lookahead == 't') ADVANCE(28);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (lookahead == 't') ADVANCE(29);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__qs_accepting);
      if (set_contains(sym__qs_accepting_character_set_1, 10, lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__qs_non_accepting);
      ADVANCE_MAP(
        '!', 32,
        '(', 32,
        ')', 32,
        ',', 32,
        '.', 32,
        ':', 32,
        ';', 32,
        '?', 32,
        '[', 32,
        ']', 32,
        '{', 32,
        '}', 32,
      );
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__non_url_text);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_http_COLON] = ACTIONS(1),
    [anon_sym_https_COLON] = ACTIONS(1),
    [aux_sym__hostname_without_tld_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__qs_non_accepting] = ACTIONS(1),
    [sym__non_url_text] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_prose] = STATE(26),
    [sym__url_with_trailing_characters] = STATE(5),
    [sym_url] = STATE(15),
    [sym__url_fragment] = STATE(5),
    [sym__protocol] = STATE(16),
    [aux_sym_prose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_http_COLON] = ACTIONS(5),
    [anon_sym_https_COLON] = ACTIONS(5),
    [sym__non_url_text] = ACTIONS(7),
    [sym__space] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__qs_accepting,
    STATE(20), 1,
      aux_sym__qs_middle,
    ACTIONS(17), 2,
      sym__qs_non_accepting,
      sym__non_url_text,
    STATE(3), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [25] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__qs_accepting,
    STATE(20), 1,
      aux_sym__qs_middle,
    ACTIONS(21), 2,
      sym__qs_non_accepting,
      sym__non_url_text,
    STATE(4), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [50] = 7,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      sym__qs_accepting,
    ACTIONS(31), 1,
      sym__qs_non_accepting,
    ACTIONS(34), 1,
      sym__non_url_text,
    STATE(20), 1,
      aux_sym__qs_middle,
    STATE(4), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [77] = 7,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__non_url_text,
    ACTIONS(40), 1,
      sym__space,
    STATE(15), 1,
      sym_url,
    STATE(16), 1,
      sym__protocol,
    ACTIONS(5), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    STATE(6), 3,
      sym__url_with_trailing_characters,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [102] = 7,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym__non_url_text,
    ACTIONS(50), 1,
      sym__space,
    STATE(15), 1,
      sym_url,
    STATE(16), 1,
      sym__protocol,
    ACTIONS(44), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    STATE(6), 3,
      sym__url_with_trailing_characters,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [127] = 3,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(57), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [143] = 2,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(61), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [156] = 2,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(65), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [169] = 5,
    ACTIONS(69), 1,
      aux_sym__hostname_without_tld_token1,
    ACTIONS(71), 1,
      sym__non_url_text,
    STATE(2), 1,
      sym__domain,
    STATE(7), 1,
      sym__hostname_without_tld,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [188] = 3,
    ACTIONS(78), 1,
      sym__non_url_text,
    ACTIONS(75), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [203] = 2,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(82), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [216] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(86), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [229] = 3,
    ACTIONS(93), 1,
      sym__non_url_text,
    ACTIONS(90), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [244] = 3,
    ACTIONS(97), 1,
      sym__qs_non_accepting,
    ACTIONS(99), 1,
      sym__non_url_text,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [257] = 3,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      sym__non_url_text,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [270] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      sym__qs_accepting,
    ACTIONS(109), 1,
      sym__qs_non_accepting,
    STATE(20), 1,
      aux_sym__qs_middle,
    STATE(12), 2,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
  [287] = 2,
    ACTIONS(113), 1,
      sym__non_url_text,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [297] = 4,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym__qs_accepting,
    ACTIONS(119), 1,
      sym__qs_non_accepting,
    STATE(22), 1,
      aux_sym__qs_middle,
  [310] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym__qs_accepting,
    ACTIONS(125), 1,
      sym__qs_non_accepting,
    STATE(21), 1,
      aux_sym__qs_middle,
  [323] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym__qs_accepting,
    ACTIONS(132), 1,
      sym__qs_non_accepting,
    STATE(21), 1,
      aux_sym__qs_middle,
  [336] = 4,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym__qs_accepting,
    ACTIONS(139), 1,
      sym__qs_non_accepting,
    STATE(25), 1,
      aux_sym__qs_middle,
  [349] = 4,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      sym__qs_accepting,
    ACTIONS(143), 1,
      sym__qs_non_accepting,
    STATE(24), 1,
      aux_sym__qs_middle,
  [362] = 4,
    ACTIONS(137), 1,
      sym__qs_accepting,
    ACTIONS(139), 1,
      sym__qs_non_accepting,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym__qs_middle,
  [375] = 4,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym__qs_accepting,
    ACTIONS(152), 1,
      sym__qs_non_accepting,
    STATE(25), 1,
      aux_sym__qs_middle,
  [388] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 229,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 297,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__domain, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__domain, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_segment, 1, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__url_segment, 1, 0, 0), REDUCE(aux_sym__qs_middle, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_segment, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__domain, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__domain, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_segment, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 1, 0, 0), REDUCE(sym__url_segment, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_segment, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_with_trailing_characters, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_with_trailing_characters, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(25),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(25),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_hyperlink(void) {
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
