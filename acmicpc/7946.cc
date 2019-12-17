#include <stdio.h>
#include <algorithm>

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

int main() {
  int d;
  scanf("%d", &d);
  while(d--) {
    int n, k;
    int *arr;
    int i;
    scanf("%d %d", &n, &k);
    arr = new int[n];
    for (i = 0; i < n; i++)
      scanf("%d", arr + i);
    qsort(arr, n, sizeof(int), compare);
    printf("%d\n", arr[k - 1]);
    delete[] arr;
  }
  return 0;
}
