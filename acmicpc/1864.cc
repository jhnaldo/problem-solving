#include <stdio.h>

int main() {
  while (true) {
    char str[10];
    int result = 0;
    scanf("%s", str);
    if (str[0] == '#' && str[1] == 0) break;
    for (int i = 0; str[i]; i++) {
      int x;
      switch (str[i]) {
        case '-': x = 0; break;
        case '\\': x = 1; break;
        case '(': x = 2; break;
        case '@': x = 3; break;
        case '?': x = 4; break;
        case '>': x = 5; break;
        case '&': x = 6; break;
        case '%': x = 7; break;
        case '/': x = -1; break;
      }
      result *= 8;
      result += x;
    }
    printf("%d\n", result);
  }
  return 0;
}
