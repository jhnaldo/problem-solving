#include <stdio.h>

int main() {
  int a, b;
  int price;
  scanf("%d %d %d", &a, &b, &price);
  if (a + b >= 2 * price) printf("%d\n", a + b - 2 * price);
  else printf("%d\n", a + b);
  return 0;
}
