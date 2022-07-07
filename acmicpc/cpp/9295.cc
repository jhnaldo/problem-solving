#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("Case %d: %d\n", i, n+m);
  }
  return 0;
}
