#include <stdio.h>

int main() {
  int n;
  int max = 0;
  int sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    if (max < k) max = k;
    sum += k;
  }
  printf("%d\n", sum - max);
  return 0;
}
