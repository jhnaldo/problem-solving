#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g, h, i;
  scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
  int sum = a + b + c + d + e + f + g + h + i;
  if (a > 100 || b > 100 ||
      c > 200 || d > 200 ||
      e > 300 || f > 300 ||
      g > 400 || h > 400 ||
      i > 500) {
    printf("hacker\n");
  } else if (sum >= 100) {
    printf("draw\n");
  } else {
    printf("none\n");
  }
  return 0;
}
