#include <stdio.h>
#include <stdlib.h>

int n, i;
int* arr;
int* order;
int* value;

int compare(const void* left, const void* right) {
  int lidx = *(int*)left;
  int ridx = *(int*)right;
  return arr[lidx] - arr[ridx];
}

int main() {
  scanf("%d", &n);
  arr = new int[n];
  order = new int[n];
  value = new int[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    order[i] = i;
  }

  qsort(order, n, sizeof(int), compare);

  value[order[0]] = 0;
  for (i = 1; i < n; i++) {
    int cur = order[i];
    int prev = order[i-1];
    if (arr[cur] == arr[prev]) value[cur] = value[prev];
    else value[cur] = value[prev] + 1;
  }

  for (i = 0; i < n; i++) {
    printf("%d ", value[i]);
  }
  printf("\n");

  delete[] arr;
  delete[] order;
  delete[] value;
  return 0;
}
