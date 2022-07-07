#include <stdio.h>

int main() {
  int n, x, k, p, count, res;
  scanf("%d", &n);
  while(n--) {
    scanf("%d", &x);
    k = x;
    res = 1;
    for (p = 2; p * p <= k; p++) {
      count = 0;
      while (k % p == 0) {
        k /= p;
        count++;
      }
      res *= count + 1;
    }
    if (k > 1) res *= 2;
    printf("%d %d\n", x, res);
  }
  return 0;
}
