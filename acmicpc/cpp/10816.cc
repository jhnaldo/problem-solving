#include <stdio.h>
#include <stdlib.h>

int n, m, size;
int *arr, *item, *count;
int *target, *idx, *res;

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}
int idx_compare(const void *x, const void *y) {
  return target[*(int*)x] - target[*(int*)y];
}

int main() {
  scanf("%d", &n);
  arr = new int[n];
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);
  scanf("%d", &m);

  target = new int[m];
  idx = new int[m];
  res = new int[m];
  for (int i = 0; i < m; i++) {
    scanf("%d", target + i);
    idx[i] = i;
  }
  qsort(arr, n, sizeof(int), compare);
  qsort(idx, m, sizeof(int), idx_compare);

  item = new int[n];
  count = new int[n];
  size = 0;
  for (int i = 0; i < n; i++) {
    if (size == 0 || item[size - 1] != arr[i]) {
      item[size] = arr[i];
      count[size] = 1;
      size++;
    } else {
      count[size - 1]++;
    }
  }
  int j = 0;
  for (int i = 0; i < m; i++) {
    while (j < size && item[j] < target[idx[i]]) j++;
    if (j == size || item[j] > target[idx[i]]) res[idx[i]] = 0;
    else res[idx[i]] = count[j];
  }
  for (int i = 0; i < m; i++)
    printf("%d ", res[i]);
  printf("\n");

  delete[] arr;
  delete[] item;
  delete[] count;
  delete[] target;
  delete[] idx;
  delete[] res;
  return 0;
}
