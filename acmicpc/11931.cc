#include <stdio.h>
#include <algorithm>

int compare(const void *x, const void *y) {
  return *(int*)y - *(int*)x;
}

int main() {
  int n, *arr, i;
  scanf("%d", &n);
  arr = new int[n];
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);

  qsort(arr, n, sizeof(int), compare);

  for (i = 0; i < n; i++)
    printf("%d\n", arr[i]);

  delete[] arr;
  return 0;
}
