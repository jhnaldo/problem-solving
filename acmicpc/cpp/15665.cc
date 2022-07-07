#include <stdio.h>
#include <algorithm>

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

int n, m;
int arr[7], res[7];
int i;

void backtrack(int k, int x) {
  int i;
  if (k == m) {
    for (i = 0; i < m; i++)
      printf("%d ", res[i]);
    printf("\n");
    return;
  }
  for (i = x; i < n; i++) {
    res[k] = arr[i];
    backtrack(k + 1, x);
    while(i < n - 1 && arr[i] == arr[i + 1]) i++;
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);
  qsort(arr, n, sizeof(int), compare);
  backtrack(0, 0);
  return 0;
}
