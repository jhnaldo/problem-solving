#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#define SIZE 256

int main() {
  size_t size = SIZE + 1;
  char *str = new char[size];

  while (true) {
    int len, i, code = 0;
    len = getline(&str, &size, stdin);
    str[--len] = '\0';

    if (strcmp(str, "#") == 0) break;

    for (i = 0; i < len; i++) {
      if (str[i] < 'A' || str[i] > 'Z') continue;
      code += (i + 1) * (str[i] - 'A' + 1);
    }

    printf("%d\n", code);
  }

  delete[] str;
  return 0;
}
