#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  printf("%d\n", MIN(MIN(n / 2, m), (n + m - k) / 3));
  return 0;
}
