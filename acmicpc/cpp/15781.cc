#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
  int n, m, k, x, y;
  x = y = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    x = MAX(x, k);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", &k);
    y = MAX(y, k);
  }
  printf("%d\n", x + y);
  return 0;
}
