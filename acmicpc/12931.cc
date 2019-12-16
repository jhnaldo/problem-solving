#include <stdio.h>

int main() {
  int n, i;
  int sum, depth, max_depth, count, x;
  scanf("%d", &n);
  sum = 0;
  max_depth = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    count = 0;
    depth = 0;
    while (x) {
      if (x % 2 == 1) count++;
      x /= 2;
      depth++;
    }
    if (count) depth--;
    sum += count;
    max_depth = (depth > max_depth ? depth : max_depth);
  }
  printf("%d\n", sum + max_depth);
  return 0;
}
