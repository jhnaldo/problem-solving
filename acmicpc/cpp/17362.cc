#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  n %= 8;
  if (n == 0) printf("2\n");
  else if (n >= 6) printf("%d\n", 10 - n);
  else printf("%d\n", n);
  return 0;
}
