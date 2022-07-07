#include <stdio.h>

int main() {
  int n, m;
  int total = 0;
  int row[500] = {0, };
  int col[500] = {0, };
  int max = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int k, count = 0;
      scanf("%d", &k);
      while(k) {
        if (k % 10 == 9) count++;
        k /= 10;
      }
      total += count;
      row[i] += count;
      col[j] += count;
    }
  }
  for (int i = 0; i < n; i++) {
    if (max < row[i]) max = row[i];
  }
  for (int i = 0; i < m; i++) {
    if (max < col[i]) max = col[i];
  }
  printf("%d\n", total-max);
  return 0;
}
