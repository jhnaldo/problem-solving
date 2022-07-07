#include <stdio.h>
#include <math.h>

int main() {
  double x;
  scanf("%lf", &x);
  printf("%.9lf\n", x * x * sqrt(3) / 4);
  return 0;
}
