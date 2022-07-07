#include <stdio.h>

int main() {
  double k, x, y;
  scanf("%lf %lf %lf", &k, &x, &y);
  printf("%.6lf\n", k*k - (x-y)*(x-y)/4);
  return 0;
}
