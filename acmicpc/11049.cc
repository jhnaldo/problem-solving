#include <stdio.h>
#include <limits.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  int n;
  int r[500], c[500], memo[500][500] = {};
  int i, j, k;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d %d", r + i, c + i);
  for (j = 1; j < n; j++) {
    for (i = j - 1; i >= 0; i--) {
      memo[i][j] = INT_MAX;
      for (k = i; k < j; k++)
        memo[i][j] = MIN(memo[i][j], memo[i][k] + memo[k + 1][j] + r[i] * c[k] * c[j]);
    }
  }
  printf("%d\n", memo[0][n-1]);
  return 0;
}
