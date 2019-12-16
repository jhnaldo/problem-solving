#include <stdio.h>

int main() {
  int n;
  int pprev, prev, cur;
  scanf("%d", &n);
  prev = 1; cur = 0;
  while (n-- > 0) {
    pprev = prev;
    prev = cur;
    cur = (pprev + prev) % 1000000007;
  }
  printf("%d\n", cur);
  return 0;
}
