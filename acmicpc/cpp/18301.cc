#include <stdio.h>

int main() {
  double x, y, z;
  scanf("%lf %lf %lf", &x, &y, &z);
  printf("%d\n", (int)((x+1) * (y+1) / (z+1) - 1));
  return 0;
}
