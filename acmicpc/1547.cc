#include <stdio.h>

int main() {
  int n;
  int k = 1;
  scanf("%d", &n);
  while (n--) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == k) k = y;
    else if (y == k) k = x;
  }
  printf("%d\n", k);
  return 0;
}
