#include <tree_sitter/parser.h>
#include <stdio.h>
#include <wctype.h>
#include "scanner.h"

enum TokenType {
  SYM_DOT_WITHOUT_FOLLOWING_SPACE,
  SYM_EOF
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


bool tree_sitter_hyperlink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[SYM_DOT_WITHOUT_FOLLOWING_SPACE]) {
    if (lexer->lookahead == '.') {
      lexer->advance(lexer, true);
      lexer->mark_end(lexer);
      if (iswalnum(lexer->lookahead)) {
        lexer->result_symbol = SYM_DOT_WITHOUT_FOLLOWING_SPACE;
        return true;
      }
    }
  }
  if (lexer->eof(lexer) && valid_symbols[SYM_EOF]) {
    lexer->result_symbol = SYM_EOF;
    return true;
  }
  return false;
}
