#include "s21_string.h"

char* s21_strstr(const char* haystack, const char* needle) {
  int flag = 1;
  char* p = (char*)haystack;
  char* t = p;
  const int lenght = s21_strlen((char*)needle);
  if (p) {
    while (*p && flag) {
      if (*p == needle[0] && (*(p + lenght - 1) == needle[lenght - 1])) {
        int i = 0;
        t = p;
        while (flag && *p) {
          if (*p == needle[i]) {
            p++, i++;
          } else {
            flag = 0;
          }
        }
      }
      if (*p) p++;
    }
  }
  return (!p || (*p == '\0' && flag && lenght > 0)) ? t = s21_NULL : t;
}