#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", c % 2? a^b : a);
  return 0;
}
