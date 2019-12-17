#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%.6lf\n", (double)a * c / b);
  return 0;
}
