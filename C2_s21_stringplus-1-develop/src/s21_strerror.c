#include "s21_string.h"

char *s21_strerror(int errnum) {
  ERRORS;
  static char str[500] = {'\0'};
  if ((errnum < 0) || (errnum > ERROR_COUNT - 1)) {
#ifdef __APPLE__
    s21_sprintf(str, "%s%d", "Unknown error: ", errnum);
#elif __linux__
    s21_sprintf(str, "%s%d", "Unknown error ", errnum);
#endif
  } else {
    s21_strcpy(str, err_list[errnum]);
  }
  return str;
}