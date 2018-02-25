#include <stdio.h>

int main() {
  int a, b, c, d;
  int p, n, m;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  scanf("%d %d %d", &p, &n, &m);
  printf("%d\n", ((p-1)%(a+b) < a) + ((p-1)%(c+d) < c));
  printf("%d\n", ((n-1)%(a+b) < a) + ((n-1)%(c+d) < c));
  printf("%d\n", ((m-1)%(a+b) < a) + ((m-1)%(c+d) < c));
  return 0;
}
