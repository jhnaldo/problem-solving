#include <stdio.h>

int main() {
  double x, y, min;
  int n;
  scanf("%lf %lf", &x, &y);
  min = x / y;
  scanf("%d", &n);
  while (n--) {
    scanf("%lf %lf", &x, &y);
    if (x/y < min) min = x/y;
  }
  printf("%.2lf\n", min * 1000);
  return 0;
}
