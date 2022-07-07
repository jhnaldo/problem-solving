#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int n, m;
  int mem[100], c[100];
  int *res[10001];
  int i, j, min;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
    scanf("%d", mem + i);
  for (i = 0; i < n; i++)
    scanf("%d", c + i);
  for (i = 0; i <= 10000; i++) {
    res[i] = new int[n]();
    for (j = 0; j < n; j++) {
      if (c[j] <= i) {
        if (j > 0) res[i][j] = res[i - c[j]][j - 1];
        res[i][j] += mem[j];
      }
      if (j > 0) {
        res[i][j] = MAX(res[i][j], res[i][j-1]);
      }
    }
    if (res[i][n - 1] >= m) {
      min = i;
      break;
    }
  }
  printf("%d\n", min);
  for (i = 0; i <= min; i++)
    delete[] res[i];
  return 0;
}
