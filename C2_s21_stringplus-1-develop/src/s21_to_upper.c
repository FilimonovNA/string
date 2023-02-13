#include "s21_string.h"

void *s21_to_upper(const char *str) {
  int i = 0;
  char *copy = NULL;
  while (str[i]) {
    i++;
  }
  copy = (char *)malloc(i * sizeof(char));
  for (int j = 0; str[j]; j++) {
    if (str[j] > 96 && str[j] < 123) {
      copy[j] = str[j] - 32;
    } else {
      copy[j] = str[j];
    }
  }
  copy[i] = '\0';
  return copy;
  free(copy);
}