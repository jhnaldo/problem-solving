#include <stdio.h>

int main() {
  int n, k, t;
  scanf("%d", &n);
  for (t = 0, k = 1; n; k++, t++) {
    if (k > n) k = 1;
    n -= k;
  }
  printf("%d\n", t);
  return 0;
}
