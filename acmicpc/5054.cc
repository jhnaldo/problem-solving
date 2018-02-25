#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, k;
    int min, max;
    scanf("%d", &n);
    scanf("%d", &k);
    min = max = k;
    for (int i = 1; i < n; i++) {
      scanf("%d", &k);
      if (min > k) min = k;
      if (max < k) max = k;
    }
    printf("%d\n", (max - min) * 2);
  }
  return 0;
}
