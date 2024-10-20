#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
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
  aux_sym__domain_repeat1 = 24,
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
  [aux_sym__domain_repeat1] = "_domain_repeat1",
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
  [aux_sym__domain_repeat1] = aux_sym__domain_repeat1,
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
  [aux_sym__domain_repeat1] = {
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
  [16] = 15,
  [17] = 11,
  [18] = 18,
  [19] = 14,
  [20] = 12,
  [21] = 13,
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
  [32] = 27,
  [33] = 31,
  [34] = 30,
  [35] = 28,
  [36] = 26,
  [37] = 29,
  [38] = 38,
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
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
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
    [sym_prose] = STATE(38),
    [sym__url_with_trailing_characters] = STATE(9),
    [sym_url] = STATE(22),
    [sym__url_fragment] = STATE(9),
    [sym__protocol] = STATE(24),
    [aux_sym_prose_repeat1] = STATE(9),
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
    STATE(30), 1,
      aux_sym__qs_middle,
    ACTIONS(17), 2,
      sym__qs_non_accepting,
      sym__non_url_text,
    STATE(4), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [25] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(24), 1,
      sym__qs_accepting,
    ACTIONS(27), 1,
      sym__qs_non_accepting,
    ACTIONS(30), 1,
      sym__non_url_text,
    STATE(30), 1,
      aux_sym__qs_middle,
    STATE(3), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [52] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__qs_accepting,
    STATE(30), 1,
      aux_sym__qs_middle,
    ACTIONS(34), 2,
      sym__qs_non_accepting,
      sym__non_url_text,
    STATE(3), 3,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
      aux_sym_url_repeat1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [77] = 4,
    ACTIONS(38), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym__domain_repeat1,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(41), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [96] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym__non_url_text,
    ACTIONS(51), 1,
      sym__space,
    STATE(22), 1,
      sym_url,
    STATE(24), 1,
      sym__protocol,
    ACTIONS(45), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    STATE(6), 3,
      sym__url_with_trailing_characters,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [121] = 4,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym__domain_repeat1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(58), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [140] = 4,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym__domain_repeat1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(62), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [159] = 7,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__non_url_text,
    ACTIONS(68), 1,
      sym__space,
    STATE(22), 1,
      sym_url,
    STATE(24), 1,
      sym__protocol,
    ACTIONS(5), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    STATE(6), 3,
      sym__url_with_trailing_characters,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [184] = 2,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(41), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [198] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(72), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [212] = 2,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(76), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [226] = 3,
    ACTIONS(80), 2,
      anon_sym_DOT,
      sym__non_url_text,
    ACTIONS(82), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [242] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(87), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [256] = 3,
    ACTIONS(91), 2,
      anon_sym_DOT,
      sym__non_url_text,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [272] = 3,
    ACTIONS(91), 1,
      sym__non_url_text,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [287] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(72), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [300] = 5,
    ACTIONS(98), 1,
      aux_sym__hostname_without_tld_token1,
    ACTIONS(100), 1,
      sym__non_url_text,
    STATE(2), 1,
      sym__domain,
    STATE(7), 1,
      sym__hostname_without_tld,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [319] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(87), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [332] = 2,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
    ACTIONS(76), 4,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
      sym__non_url_text,
  [345] = 3,
    ACTIONS(80), 1,
      sym__non_url_text,
    ACTIONS(82), 3,
      anon_sym_LPAREN,
      sym__qs_accepting,
      sym__qs_non_accepting,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [360] = 3,
    ACTIONS(104), 1,
      sym__qs_non_accepting,
    ACTIONS(106), 1,
      sym__non_url_text,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [373] = 5,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym__qs_accepting,
    ACTIONS(112), 1,
      sym__qs_non_accepting,
    STATE(34), 1,
      aux_sym__qs_middle,
    STATE(10), 2,
      sym__url_segment,
      sym__delimiter_matching_scenarios,
  [390] = 3,
    ACTIONS(116), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      sym__non_url_text,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [403] = 2,
    ACTIONS(122), 1,
      sym__non_url_text,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__space,
  [413] = 4,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      sym__qs_accepting,
    ACTIONS(128), 1,
      sym__qs_non_accepting,
    STATE(29), 1,
      aux_sym__qs_middle,
  [426] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__qs_accepting,
    ACTIONS(135), 1,
      sym__qs_non_accepting,
    STATE(27), 1,
      aux_sym__qs_middle,
  [439] = 4,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym__qs_accepting,
    ACTIONS(140), 1,
      sym__qs_non_accepting,
    STATE(32), 1,
      aux_sym__qs_middle,
  [452] = 4,
    ACTIONS(138), 1,
      sym__qs_accepting,
    ACTIONS(140), 1,
      sym__qs_non_accepting,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym__qs_middle,
  [465] = 4,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym__qs_accepting,
    ACTIONS(148), 1,
      sym__qs_non_accepting,
    STATE(27), 1,
      aux_sym__qs_middle,
  [478] = 4,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      sym__qs_accepting,
    ACTIONS(154), 1,
      sym__qs_non_accepting,
    STATE(28), 1,
      aux_sym__qs_middle,
  [491] = 4,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      sym__qs_accepting,
    ACTIONS(161), 1,
      sym__qs_non_accepting,
    STATE(32), 1,
      aux_sym__qs_middle,
  [504] = 4,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      sym__qs_accepting,
    ACTIONS(168), 1,
      sym__qs_non_accepting,
    STATE(35), 1,
      aux_sym__qs_middle,
  [517] = 4,
    ACTIONS(148), 1,
      sym__qs_non_accepting,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym__qs_accepting,
    STATE(27), 1,
      aux_sym__qs_middle,
  [530] = 4,
    ACTIONS(138), 1,
      sym__qs_accepting,
    ACTIONS(140), 1,
      sym__qs_non_accepting,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym__qs_middle,
  [543] = 4,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      sym__qs_accepting,
    ACTIONS(178), 1,
      sym__qs_non_accepting,
    STATE(37), 1,
      aux_sym__qs_middle,
  [556] = 4,
    ACTIONS(138), 1,
      sym__qs_accepting,
    ACTIONS(140), 1,
      sym__qs_non_accepting,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym__qs_middle,
  [569] = 1,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 403,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 439,
  [SMALL_STATE(29)] = 452,
  [SMALL_STATE(30)] = 465,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 491,
  [SMALL_STATE(33)] = 504,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 543,
  [SMALL_STATE(37)] = 556,
  [SMALL_STATE(38)] = 569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__domain_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__domain_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__domain_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__domain, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__domain, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__domain, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__domain, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_segment, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_segment, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 1, 0, 0), REDUCE(sym__url_segment, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__delimiter_matching_scenarios, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__delimiter_matching_scenarios, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_segment, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_segment, 1, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__url_segment, 1, 0, 0), REDUCE(aux_sym__qs_middle, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_with_trailing_characters, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_with_trailing_characters, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(27),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(32),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qs_middle, 2, 0, 0), SHIFT_REPEAT(32),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
