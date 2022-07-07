#include <stdio.h>

int main() {
  int a, b, c, l;
  int x, y, z, r;
  scanf("%d %d %d", &a, &b, &c);
  scanf("%d %d %d", &x, &y, &z);
  l = 3 * a + 2 * b + c;
  r = 3 * x + 2 * y + z;
  if (l == r) printf("T\n");
  else if (l > r) printf("A\n");
  else printf("B\n");
  return 0;
}
