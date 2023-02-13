// // char *strcat(char *dest, const char *src) | Добавляет строку, на которую
// // указывает src, в конец строки, на которую указывает dest. |
#include "s21_string.h"

char *s21_strcat(char *dest, const char *src) {
  int dest_index = s21_strlen(dest);
  int src_index = 0;
  for (; src[src_index]; src_index++)
    dest[dest_index + src_index] = src[src_index];
  return dest;
}
