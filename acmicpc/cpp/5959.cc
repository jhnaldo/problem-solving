#include <stdio.h>

#define SQ(x) ((x) * (x))

int main() {
  int n;
  int x[400], y[400], r[400], count[400] = {};
  int i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", x + i, y + i, r + i);
    for (j = 0; j < i; j++) {
      if (SQ(x[i] - x[j]) + SQ(y[i] - y[j]) < SQ(r[i] + r[j])) {
        count[i]++;
        count[j]++;
      }
    }
  }
  for (i = 0; i < n; i++)
    printf("%d\n", count[i]);
  return 0;
}
