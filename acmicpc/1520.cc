#include <stdio.h>
#include <stdlib.h>

#define IDX(x, y) ((x - 1) * m + (y - 1))
#define X(idx) (idx / m + 1)
#define Y(idx) (idx % m + 1)

int n, m;
int arr[502][502];
int compare(const void* left, const void* right) {
  int lidx = *(int*)left;
  int ridx = *(int*)right;
  return arr[X(ridx)][Y(ridx)] - arr[X(lidx)][Y(lidx)];
}

int main() {
  int i, j, k;
  int counter[502][502], pointer[250000];
  scanf("%d %d", &n, &m);

  k = 0;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      scanf("%d", &arr[i][j]);
      pointer[k++] = IDX(i, j);
    }
  }

  qsort(pointer, n * m, sizeof(int), compare);

  counter[1][1] = 1;
  for (i = 0; i < n * m; i++) {
    int x = X(pointer[i]);
    int y = Y(pointer[i]);
    if (arr[x-1][y] > arr[x][y]) counter[x][y] += counter[x-1][y];
    if (arr[x+1][y] > arr[x][y]) counter[x][y] += counter[x+1][y];
    if (arr[x][y-1] > arr[x][y]) counter[x][y] += counter[x][y-1];
    if (arr[x][y+1] > arr[x][y]) counter[x][y] += counter[x][y+1];
  }
  printf("%d\n", counter[n][m]);
  return 0;
}
