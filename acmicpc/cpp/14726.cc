#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    char str[17];
    int i, sum = 0;
    scanf("%s", str);
    for (i = 0; i < 16; i++) {
      int v = str[i] - '0';
      if (i%2 == 0) {
        int d = v * 2;
        sum += (d > 9? d%10 + d/10: d);
      } else {
        sum += v;
      }
    }
    printf("%c\n", (sum % 10 == 0? 'T': 'F'));
  }
  return 0;
}
