#include <stdio.h>

int main() {
  int n, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    if (k != i + 1) count++;
  }
  printf("%d\n", count);
  return 0;
}
