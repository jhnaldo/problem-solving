#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
  int n, k;
  int first, second;
  scanf("%d", &n);
  first = second = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    first += ABS(k);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &k);
    second += ABS(k);
  }
  printf("%d\n", first + second);

  return 0;
}
