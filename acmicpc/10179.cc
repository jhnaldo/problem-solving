#include <stdio.h>

int main() {
  int t;
  double x;
  scanf("%d", &t);
  while (t--) {
    scanf("%lf", &x);
    printf("$%.2lf\n", x * 0.8);
  }
  return 0;
}
