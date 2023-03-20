#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym__dot_then_single_rest = 1,
  anon_sym_http_COLON = 2,
  anon_sym_https_COLON = 3,
  sym__double_slash = 4,
  sym__single_rest = 5,
  sym__dot = 6,
  sym__slash = 7,
  sym__non_url_text = 8,
  sym__space = 9,
  sym_prose = 10,
  sym_url = 11,
  sym__url_segment = 12,
  sym__url_fragment = 13,
  sym__dot_then_rest = 14,
  sym__slash_then_rest = 15,
  sym__protocol = 16,
  aux_sym__rest = 17,
  aux_sym_prose_repeat1 = 18,
  aux_sym_url_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__dot_then_single_rest] = "_dot_then_single_rest",
  [anon_sym_http_COLON] = "http:",
  [anon_sym_https_COLON] = "https:",
  [sym__double_slash] = "_double_slash",
  [sym__single_rest] = "_single_rest",
  [sym__dot] = "_dot",
  [sym__slash] = "_slash",
  [sym__non_url_text] = "_non_url_text",
  [sym__space] = "_space",
  [sym_prose] = "prose",
  [sym_url] = "url",
  [sym__url_segment] = "_url_segment",
  [sym__url_fragment] = "_url_fragment",
  [sym__dot_then_rest] = "_dot_then_rest",
  [sym__slash_then_rest] = "_slash_then_rest",
  [sym__protocol] = "_protocol",
  [aux_sym__rest] = "_rest",
  [aux_sym_prose_repeat1] = "prose_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__dot_then_single_rest] = sym__dot_then_single_rest,
  [anon_sym_http_COLON] = anon_sym_http_COLON,
  [anon_sym_https_COLON] = anon_sym_https_COLON,
  [sym__double_slash] = sym__double_slash,
  [sym__single_rest] = sym__single_rest,
  [sym__dot] = sym__dot,
  [sym__slash] = sym__slash,
  [sym__non_url_text] = sym__non_url_text,
  [sym__space] = sym__space,
  [sym_prose] = sym_prose,
  [sym_url] = sym_url,
  [sym__url_segment] = sym__url_segment,
  [sym__url_fragment] = sym__url_fragment,
  [sym__dot_then_rest] = sym__dot_then_rest,
  [sym__slash_then_rest] = sym__slash_then_rest,
  [sym__protocol] = sym__protocol,
  [aux_sym__rest] = aux_sym__rest,
  [aux_sym_prose_repeat1] = aux_sym_prose_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__dot_then_single_rest] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_http_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__double_slash] = {
    .visible = false,
    .named = true,
  },
  [sym__single_rest] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__slash] = {
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
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym__url_segment] = {
    .visible = false,
    .named = true,
  },
  [sym__url_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__dot_then_rest] = {
    .visible = false,
    .named = true,
  },
  [sym__slash_then_rest] = {
    .visible = false,
    .named = true,
  },
  [sym__protocol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__rest] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(19);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'p') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 5:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(19);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 6:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ']') ADVANCE(19);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__dot_then_single_rest);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_http_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_https_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__double_slash);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__single_rest);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__single_rest);
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__slash);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__non_url_text);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__non_url_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__dot_then_single_rest] = ACTIONS(1),
    [anon_sym_http_COLON] = ACTIONS(1),
    [anon_sym_https_COLON] = ACTIONS(1),
    [sym__single_rest] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__slash] = ACTIONS(1),
    [sym__non_url_text] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_prose] = STATE(14),
    [sym_url] = STATE(5),
    [sym__url_fragment] = STATE(5),
    [sym__protocol] = STATE(13),
    [aux_sym_prose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_http_COLON] = ACTIONS(5),
    [anon_sym_https_COLON] = ACTIONS(5),
    [sym__non_url_text] = ACTIONS(7),
    [sym__space] = ACTIONS(7),
  },
  [2] = {
    [sym__url_segment] = STATE(3),
    [sym__dot_then_rest] = STATE(3),
    [sym__slash_then_rest] = STATE(3),
    [aux_sym__rest] = STATE(9),
    [aux_sym_url_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__dot_then_single_rest] = ACTIONS(11),
    [anon_sym_http_COLON] = ACTIONS(9),
    [anon_sym_https_COLON] = ACTIONS(9),
    [sym__single_rest] = ACTIONS(13),
    [sym__slash] = ACTIONS(15),
    [sym__non_url_text] = ACTIONS(17),
    [sym__space] = ACTIONS(17),
  },
  [3] = {
    [sym__url_segment] = STATE(4),
    [sym__dot_then_rest] = STATE(4),
    [sym__slash_then_rest] = STATE(4),
    [aux_sym_url_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__dot_then_single_rest] = ACTIONS(11),
    [anon_sym_http_COLON] = ACTIONS(19),
    [anon_sym_https_COLON] = ACTIONS(19),
    [sym__slash] = ACTIONS(15),
    [sym__non_url_text] = ACTIONS(21),
    [sym__space] = ACTIONS(21),
  },
  [4] = {
    [sym__url_segment] = STATE(4),
    [sym__dot_then_rest] = STATE(4),
    [sym__slash_then_rest] = STATE(4),
    [aux_sym_url_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__dot_then_single_rest] = ACTIONS(25),
    [anon_sym_http_COLON] = ACTIONS(23),
    [anon_sym_https_COLON] = ACTIONS(23),
    [sym__slash] = ACTIONS(28),
    [sym__non_url_text] = ACTIONS(31),
    [sym__space] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym__protocol,
    ACTIONS(5), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    ACTIONS(35), 2,
      sym__non_url_text,
      sym__space,
    STATE(6), 3,
      sym_url,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [20] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym__protocol,
    ACTIONS(39), 2,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
    ACTIONS(42), 2,
      sym__non_url_text,
      sym__space,
    STATE(6), 3,
      sym_url,
      sym__url_fragment,
      aux_sym_prose_repeat1,
  [40] = 4,
    ACTIONS(47), 1,
      sym__single_rest,
    STATE(10), 1,
      aux_sym__rest,
    ACTIONS(49), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym__dot_then_single_rest,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__slash,
  [58] = 4,
    ACTIONS(53), 1,
      sym__single_rest,
    STATE(11), 1,
      aux_sym__rest,
    ACTIONS(55), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym__dot_then_single_rest,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__slash,
  [76] = 4,
    ACTIONS(59), 1,
      sym__single_rest,
    STATE(9), 1,
      aux_sym__rest,
    ACTIONS(62), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      sym__dot_then_single_rest,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__slash,
  [94] = 4,
    ACTIONS(13), 1,
      sym__single_rest,
    STATE(9), 1,
      aux_sym__rest,
    ACTIONS(66), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym__dot_then_single_rest,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__slash,
  [112] = 4,
    ACTIONS(13), 1,
      sym__single_rest,
    STATE(9), 1,
      aux_sym__rest,
    ACTIONS(70), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      sym__dot_then_single_rest,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
      sym__slash,
  [130] = 4,
    ACTIONS(74), 1,
      sym__single_rest,
    STATE(2), 1,
      aux_sym__rest,
    ACTIONS(76), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
  [146] = 3,
    ACTIONS(80), 1,
      sym__double_slash,
    ACTIONS(82), 2,
      sym__non_url_text,
      sym__space,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_http_COLON,
      anon_sym_https_COLON,
  [159] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2), SHIFT_REPEAT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dot_then_rest, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dot_then_rest, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_segment, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_segment, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dot_then_rest, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dot_then_rest, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__slash_then_rest, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__slash_then_rest, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_fragment, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_fragment, 1),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hyperlink(void) {
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
