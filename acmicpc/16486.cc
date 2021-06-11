#include <stdio.h>

#define PI 3.141592

int main() {
  double d1, d2;
  scanf("%lf %lf", &d1, &d2);
  printf("%lf\n", d1*2 + d2*2*PI);
}
