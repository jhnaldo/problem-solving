#include <stdio.h>

int main() {
  int n, min = 100000, t = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int total, k, count;
    scanf("%d %d", &total, &k);
    count = (total-1) / (k+1);
    if (count < min) {
      min = count;
      t = i;
    }
  }

  printf("%d %d\n", t, min * 2 + 2);
  return 0;
}
