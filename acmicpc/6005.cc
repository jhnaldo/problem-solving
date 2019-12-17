#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int n;
  int arr[26][26] = {};
  int i, j, max = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++)
      scanf("%d", &arr[i][j]);
  }
  for (i = 2; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      arr[i][j] += MAX(arr[i - 1][j - 1], arr[i - 1][j]);
    }
  }
  for (j = 1; j <= n; j++)
    max = MAX(arr[n][j], max);
  printf("%d\n", max);
  return 0;
}
