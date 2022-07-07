#include <stdio.h>

int main() {
  char code[14];
  int sum = 0, k;
  scanf("%s", code);
  for (int i = 0; i < 12; i++) {
    if (code[i] == '*') {
      k = (i%2?3:1);
    } else sum += (code[i] - '0') * (i%2?3:1);
  }
  for (int i = 0; i <= 9; i++) {
    if ((10 - (sum + i * k) % 10) % 10 == code[12] - '0') {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
