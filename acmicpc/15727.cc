#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", n / 5 + (n % 5 != 0 ? 1 : 0));
  return 0;
}
