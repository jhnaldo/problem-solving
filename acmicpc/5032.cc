#include <stdio.h>

int main() {
  int e, f, c, total = 0;
  scanf("%d %d %d", &e, &f, &c);
  e += f;
  while (e >= c) {
    total += e / c;
    e = (e % c) + (e / c);
  }
  printf("%d\n", total);
  return 0;
}
