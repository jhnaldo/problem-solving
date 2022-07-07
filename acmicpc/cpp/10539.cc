#include <stdio.h>

int main() {
  int n;
  int prev, cur = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    prev = cur;
    scanf("%d", &cur);
    printf("%d ", cur*(i+1) - prev*i);
  }
  printf("\n");
  return 0;
}
