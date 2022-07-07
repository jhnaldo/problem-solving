#include <stdio.h>
#include <algorithm>

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

int main() {
  int n, i;
  int arr[500000];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);
  qsort(arr, n, sizeof(int), compare);
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}
