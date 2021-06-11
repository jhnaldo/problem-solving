#include <stdio.h>

int main() {
  int n, lower = 1e9, upper = -1e9;
  scanf("%d", &n);
  while (n--) {
    int x;
    scanf("%d", &x);
    if (x < lower) lower = x;
    if (x > upper) upper = x;
  }
  printf("%d\n", upper - lower);
  return 0;
}
