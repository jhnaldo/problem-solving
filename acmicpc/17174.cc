#include <stdio.h>

int main() {
  int n, m, count = 0;
  scanf("%d %d", &n, &m);
  while (n > 0) {
    count += n;
    n /= m;
  }
  printf("%d\n", count);
  return 0;
}
