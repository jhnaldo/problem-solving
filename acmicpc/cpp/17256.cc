#include <stdio.h>

int main() {
  int a, b, c;
  int x, y, z;
  scanf("%d %d %d", &a, &b, &c);
  scanf("%d %d %d", &x, &y, &z);
  printf("%d %d %d\n", x - c, y / b, z - a);
  return 0;
}
