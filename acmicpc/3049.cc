#include <stdio.h>

int main() {
  int n;
  int result = 1;
  scanf("%d", &n);
  for (int k = n; k >= n-3; k--) result *= k;
  for (int k = 1; k <= 4; k++) result /= k;
  printf("%d\n", result);
  return 0;
}
