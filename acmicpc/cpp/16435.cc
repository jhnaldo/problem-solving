#include <stdio.h>
#include <algorithm>

int compare(const void *x, const void *y) {
  return *(int*)x - *(int *)y;
}

int main() {
  int n, len;
  int arr[1000];
  int i;
  scanf("%d %d", &n, &len);
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);
  qsort(arr, n, sizeof(int), compare);
  for (i = 0; i < n; i++) {
    if (arr[i] <= len) len++;
  }
  printf("%d\n", len);
  return 0;
}
