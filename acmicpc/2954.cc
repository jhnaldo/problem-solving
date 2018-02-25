#include <stdio.h>

int main() {
  char str[101];
  char aeiou[6] = "aeiou";
  while (scanf("%s", str) == 1) {
    for (int i = 0; str[i]; i++) {
      int j;
      printf("%c", str[i]);
      for (j = 0; aeiou[j]; j++) {
        if (str[i] == aeiou[j]) break;
      }
      if (j < 5) i += 2;
    }
    printf(" ");
  }
  printf("\n");
  return 0;
}
