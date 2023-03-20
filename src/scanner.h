#ifndef TREE_SITTER_HYPERLINK_H
#define TREE_SITTER_HYPERLINK_H

#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>

// #define CHAR_EOF 0
// #define CHAR_NEWLINE 10
// #define CHAR_CARRIAGE_RETURN 13
//
// #define CHAR_SPACE ' '
// #define CHAR_FORM_FEED '\f'
// #define CHAR_TAB '\t'
// #define CHAR_VERTICAL_TAB '\v'

bool is_rest_char(int32_t c);
// bool is_newline(int32_t c);
// bool is_space(int32_t c);
// bool is_upper(int32_t c);
// bool is_digit(int32_t c);
// bool is_start_char(int32_t c);

#endif /* ifndef TREE_SITTER_HYPERLINK_H */
