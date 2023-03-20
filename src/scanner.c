#include <tree_sitter/parser.h>
#include <stdio.h>
#include "scanner.h"

enum TokenType {
  REST_NOT_EOF
};

void * tree_sitter_hyperlink_external_scanner_create() {
  return NULL;
}

void tree_sitter_hyperlink_external_scanner_destroy(void *payload) {
  // ...
}

unsigned tree_sitter_hyperlink_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

void tree_sitter_hyperlink_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // ...
}

// bool is_start_char(int32_t c)
// {
//   const int32_t valid_chars[] = {
//     '-',
//     '/',
//     '\'',
//     '"',
//     '<',
//     '(',
//     '[',
//     '{',
//   };
//   const int length = sizeof(valid_chars) / sizeof(int32_t);
//   for (int i = 0; i < length; i++) {
//     if (c == valid_chars[i]) {
//       return true;
//     }
//   }
//   return false;
// }


bool is_rest_char(int32_t c) {
  // if (isspace((int) c)) { return false; }
  const int32_t invalid_chars[] = {
    '"',
    '.',
    ')',
    ']',
    '/',
    '\'',
    ' ',
    '\r',
    '\t',
    '\n'
  };

  const int length = sizeof(invalid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == invalid_chars[i]) {
      return false;
    }
  }
  return true;
}

bool tree_sitter_hyperlink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (!valid_symbols[REST_NOT_EOF]) {
    return false;
  }

  bool didAdvance = false;
  while (!lexer->eof(lexer)) {
    if (is_rest_char(lexer->lookahead) && valid_symbols[REST_NOT_EOF]) {
      lexer->advance(lexer, false);
      didAdvance = true;
    } else {
      break;
    }
  }

  return didAdvance;
}
