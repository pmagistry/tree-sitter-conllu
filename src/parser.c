#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 20
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  anon_sym_EQ = 3,
  sym_key = 4,
  sym_value = 5,
  sym_tokid = 6,
  aux_sym_form_token1 = 7,
  sym_head = 8,
  anon_sym_TAB = 9,
  sym_source_file = 10,
  sym_sentence = 11,
  sym_comment = 12,
  sym_meta = 13,
  sym_form = 14,
  sym_lemma = 15,
  sym_upos = 16,
  sym_xpos = 17,
  sym_feats = 18,
  sym_udep = 19,
  sym_xdep = 20,
  sym_misc = 21,
  sym_content = 22,
  sym_tree = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_meta_repeat1 = 25,
  aux_sym_tree_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "# ",
  [anon_sym_EQ] = " = ",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_tokid] = "tokid",
  [aux_sym_form_token1] = "form_token1",
  [sym_head] = "head",
  [anon_sym_TAB] = "\t",
  [sym_source_file] = "source_file",
  [sym_sentence] = "sentence",
  [sym_comment] = "comment",
  [sym_meta] = "meta",
  [sym_form] = "form",
  [sym_lemma] = "lemma",
  [sym_upos] = "upos",
  [sym_xpos] = "xpos",
  [sym_feats] = "feats",
  [sym_udep] = "udep",
  [sym_xdep] = "xdep",
  [sym_misc] = "misc",
  [sym_content] = "content",
  [sym_tree] = "tree",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_tree_repeat1] = "tree_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_tokid] = sym_tokid,
  [aux_sym_form_token1] = aux_sym_form_token1,
  [sym_head] = sym_head,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym_source_file] = sym_source_file,
  [sym_sentence] = sym_sentence,
  [sym_comment] = sym_comment,
  [sym_meta] = sym_meta,
  [sym_form] = sym_form,
  [sym_lemma] = sym_lemma,
  [sym_upos] = sym_upos,
  [sym_xpos] = sym_xpos,
  [sym_feats] = sym_feats,
  [sym_udep] = sym_udep,
  [sym_xdep] = sym_xdep,
  [sym_misc] = sym_misc,
  [sym_content] = sym_content,
  [sym_tree] = sym_tree,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_tree_repeat1] = aux_sym_tree_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tokid] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_form_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_form] = {
    .visible = true,
    .named = true,
  },
  [sym_lemma] = {
    .visible = true,
    .named = true,
  },
  [sym_upos] = {
    .visible = true,
    .named = true,
  },
  [sym_xpos] = {
    .visible = true,
    .named = true,
  },
  [sym_feats] = {
    .visible = true,
    .named = true,
  },
  [sym_udep] = {
    .visible = true,
    .named = true,
  },
  [sym_xdep] = {
    .visible = true,
    .named = true,
  },
  [sym_misc] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tree] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tree_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t') ADVANCE(19);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tokid);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tokid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_form_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_head);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_tokid] = ACTIONS(1),
    [sym_head] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_sentence] = STATE(25),
    [sym_comment] = STATE(4),
    [sym_meta] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_meta_repeat1] = STATE(4),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      sym_meta,
    STATE(25), 1,
      sym_sentence,
    STATE(4), 2,
      sym_comment,
      aux_sym_meta_repeat1,
  [20] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(10), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      sym_meta,
    STATE(25), 1,
      sym_sentence,
    STATE(4), 2,
      sym_comment,
      aux_sym_meta_repeat1,
  [40] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(12), 1,
      sym_tokid,
    STATE(6), 2,
      sym_comment,
      aux_sym_meta_repeat1,
  [51] = 3,
    ACTIONS(14), 1,
      sym_tokid,
    STATE(21), 1,
      sym_tree,
    STATE(7), 2,
      sym_content,
      aux_sym_tree_repeat1,
  [62] = 3,
    ACTIONS(16), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_tokid,
    STATE(6), 2,
      sym_comment,
      aux_sym_meta_repeat1,
  [73] = 3,
    ACTIONS(14), 1,
      sym_tokid,
    ACTIONS(21), 1,
      anon_sym_LF,
    STATE(8), 2,
      sym_content,
      aux_sym_tree_repeat1,
  [84] = 3,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      sym_tokid,
    STATE(8), 2,
      sym_content,
      aux_sym_tree_repeat1,
  [95] = 1,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [100] = 2,
    ACTIONS(28), 1,
      aux_sym_form_token1,
    STATE(45), 1,
      sym_form,
  [107] = 2,
    ACTIONS(30), 1,
      aux_sym_form_token1,
    STATE(24), 1,
      sym_lemma,
  [114] = 1,
    ACTIONS(32), 2,
      anon_sym_POUND,
      sym_tokid,
  [119] = 2,
    ACTIONS(34), 1,
      aux_sym_form_token1,
    STATE(30), 1,
      sym_xpos,
  [126] = 2,
    ACTIONS(36), 1,
      aux_sym_form_token1,
    STATE(33), 1,
      sym_feats,
  [133] = 2,
    ACTIONS(38), 1,
      aux_sym_form_token1,
    STATE(27), 1,
      sym_upos,
  [140] = 2,
    ACTIONS(40), 1,
      aux_sym_form_token1,
    STATE(38), 1,
      sym_udep,
  [147] = 2,
    ACTIONS(42), 1,
      aux_sym_form_token1,
    STATE(41), 1,
      sym_xdep,
  [154] = 2,
    ACTIONS(44), 1,
      aux_sym_form_token1,
    STATE(44), 1,
      sym_misc,
  [161] = 1,
    ACTIONS(46), 2,
      anon_sym_LF,
      sym_tokid,
  [166] = 1,
    ACTIONS(48), 1,
      anon_sym_TAB,
  [170] = 1,
    ACTIONS(50), 1,
      anon_sym_LF,
  [174] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [178] = 1,
    ACTIONS(54), 1,
      anon_sym_TAB,
  [182] = 1,
    ACTIONS(56), 1,
      anon_sym_TAB,
  [186] = 1,
    ACTIONS(58), 1,
      anon_sym_LF,
  [190] = 1,
    ACTIONS(60), 1,
      anon_sym_TAB,
  [194] = 1,
    ACTIONS(62), 1,
      anon_sym_TAB,
  [198] = 1,
    ACTIONS(64), 1,
      anon_sym_EQ,
  [202] = 1,
    ACTIONS(66), 1,
      anon_sym_TAB,
  [206] = 1,
    ACTIONS(68), 1,
      anon_sym_TAB,
  [210] = 1,
    ACTIONS(70), 1,
      sym_value,
  [214] = 1,
    ACTIONS(72), 1,
      anon_sym_TAB,
  [218] = 1,
    ACTIONS(74), 1,
      anon_sym_TAB,
  [222] = 1,
    ACTIONS(76), 1,
      sym_head,
  [226] = 1,
    ACTIONS(78), 1,
      sym_key,
  [230] = 1,
    ACTIONS(80), 1,
      anon_sym_TAB,
  [234] = 1,
    ACTIONS(82), 1,
      anon_sym_TAB,
  [238] = 1,
    ACTIONS(84), 1,
      anon_sym_TAB,
  [242] = 1,
    ACTIONS(86), 1,
      anon_sym_LF,
  [246] = 1,
    ACTIONS(88), 1,
      anon_sym_TAB,
  [250] = 1,
    ACTIONS(90), 1,
      anon_sym_TAB,
  [254] = 1,
    ACTIONS(92), 1,
      anon_sym_TAB,
  [258] = 1,
    ACTIONS(94), 1,
      anon_sym_LF,
  [262] = 1,
    ACTIONS(96), 1,
      anon_sym_LF,
  [266] = 1,
    ACTIONS(98), 1,
      anon_sym_TAB,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 126,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 147,
  [SMALL_STATE(18)] = 154,
  [SMALL_STATE(19)] = 161,
  [SMALL_STATE(20)] = 166,
  [SMALL_STATE(21)] = 170,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 178,
  [SMALL_STATE(24)] = 182,
  [SMALL_STATE(25)] = 186,
  [SMALL_STATE(26)] = 190,
  [SMALL_STATE(27)] = 194,
  [SMALL_STATE(28)] = 198,
  [SMALL_STATE(29)] = 202,
  [SMALL_STATE(30)] = 206,
  [SMALL_STATE(31)] = 210,
  [SMALL_STATE(32)] = 214,
  [SMALL_STATE(33)] = 218,
  [SMALL_STATE(34)] = 222,
  [SMALL_STATE(35)] = 226,
  [SMALL_STATE(36)] = 230,
  [SMALL_STATE(37)] = 234,
  [SMALL_STATE(38)] = 238,
  [SMALL_STATE(39)] = 242,
  [SMALL_STATE(40)] = 246,
  [SMALL_STATE(41)] = 250,
  [SMALL_STATE(42)] = 254,
  [SMALL_STATE(43)] = 258,
  [SMALL_STATE(44)] = 262,
  [SMALL_STATE(45)] = 266,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [10] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tree, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tree_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tree_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 20, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lemma, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upos, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpos, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feats, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_udep, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xdep, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

TS_PUBLIC const TSLanguage *tree_sitter_conllu(void) {
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
