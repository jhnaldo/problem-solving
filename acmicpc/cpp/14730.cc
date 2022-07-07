#include <stdio.h>

int main() {
  int n, result = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    result += x * y;
  }
  printf("%d\n", result);
  return 0;
}
