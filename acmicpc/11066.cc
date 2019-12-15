#include <stdio.h>
#include <limits.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  int t;
  int n;
  int arr[500][500] = {};
  int sum[500][500];
  int i, j, k;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%d", &sum[i][i]);
    }
    for (j = 1; j < n; j++) {
      for (i = j - 1; i >= 0; i--) {
        arr[i][j] = INT_MAX;
        for (k = i; k < j; k++)
          arr[i][j] = MIN(arr[i][j], arr[i][k] + arr[k + 1][j]);
        sum[i][j] = sum[i][j-1] + sum[j][j];
        arr[i][j] += sum[i][j];
      }
    }
    printf("%d\n", arr[0][n-1]);
  }
  return 0;
}
