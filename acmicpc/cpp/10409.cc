#include <stdio.h>

int main() {
  int n, t;
  int sum = 0, count = 0;
  scanf("%d %d", &n, &t);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    sum += x;
    if (sum <= t) count++;
  }
  printf("%d\n", count);
  return 0;
}
