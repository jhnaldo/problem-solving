#include <stdio.h>

int main() {
  int n, count = 1;
  scanf("%d", &n);
  for (; n > 1; count++) {
    if (n % 2 == 0) n /= 2;
    else n = 3 * n + 1;
  }
  printf("%d\n", count);
  return 0;
}
