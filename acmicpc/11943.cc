#include <stdio.h>

#define MIN(a, b) ((a) < (b)? (a): (b))

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d\n", MIN(a + d, b + c));
  return 0;
}
