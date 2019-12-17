#include <stdio.h>

int main() {
  int n;
  char dominant;
  char str[3];
  int i, score = 0;
  scanf("%d %c", &n, &dominant);
  for (i = 0; i < 4 * n; i++) {
    scanf("%s", str);
    switch(str[0]) {
      case 'A':
        score += 11;
        break;
      case 'K':
        score += 4;
        break;
      case 'Q':
        score += 3;
        break;
      case 'J':
        score += (str[1] == dominant ? 20 : 2);
        break;
      case 'T':
        score += 10;
        break;
      case '9':
        score += (str[1] == dominant ? 14 : 0);
        break;
    }
  }
  printf("%d\n", score);
  return 0;
}
