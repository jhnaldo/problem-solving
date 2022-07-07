#include <stdio.h>

int main() {
  int n, count = 0, i, k;
  scanf("%d", &n);
  for (i = 1, k = 10; n >= k; i++, k *= 10) {
    count += i * (k - k/10);
  }
  count += i * (n - k/10 + 1);
  printf("%d\n", count);
  return 0;
}
