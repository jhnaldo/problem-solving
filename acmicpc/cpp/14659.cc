#include <stdio.h>

int main() {
  int n, k, cur, max;
  scanf("%d", &n);
  scanf("%d", &k);
  cur = max = 0;
  for (int i = 1; i < n; i++) {
    int t;
    scanf("%d", &t);
    if (k < t) {
      k = t;
      cur = 0;
    } else {
      cur++;
      if (cur > max) max = cur;
    }
  }
  printf("%d\n", max);
  return 0;
}
