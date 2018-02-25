#include <stdio.h>

int main() {
  int ax, ay;
  int bx, by;
  int cx, cy;
  scanf("%d %d", &ax, &ay);
  scanf("%d %d", &bx, &by);
  scanf("%d %d", &cx, &cy);
  int o =
    (bx * cy - by * cx) -
    (ax * cy - ay * cx) +
    (ax * by - ay * bx);
  printf("%d\n", (o < 0? -1: (o > 0? 1: 0)));
  return 0;
}
