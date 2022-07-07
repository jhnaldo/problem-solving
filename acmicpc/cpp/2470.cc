#include <stdio.h>
#include <stdlib.h>

#define ABS(a) ((a) < 0? -(a): (a))

int compare(const void* left, const void* right) {
  return *(int*)left - *(int*)right;
}

int main() {
  int n;
  int arr[100000], min = 2000000000;
  int x, y;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  qsort(arr, n, sizeof(int), compare);

  for (int i = 0, j = n-1; i < j;) {
    int sum = arr[i] + arr[j];
    if (ABS(sum) < min) {
      min = ABS(sum);
      x = i;
      y = j;
    }
    if (sum < 0) i++;
    else j--;
  }

  printf("%d %d\n", arr[x], arr[y]);

  return 0;
}
