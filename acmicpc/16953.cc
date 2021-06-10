#include <stdio.h>

int main() {
  int a, b, k = 1;
  scanf("%d %d", &a, &b);
  while (a < b) {
    if (b % 10 == 1) b /= 10;
    else if (b % 2 == 0) b /= 2;
    else break;
    k++;
  }
  if (a == b) printf("%d\n", k);
  else printf("-1\n");
  return 0;
}
