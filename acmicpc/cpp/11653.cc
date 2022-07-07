#include <stdio.h>

int main() {
  int n;
  int k = 2;
  scanf("%d", &n);
  while (n > 1) {
    while (n % k == 0) {
      printf("%d\n", k);
      n /= k;
    }
    k++;
  }
  if (n > 1) printf("%d\n", n);
  return 0;
}
