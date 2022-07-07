#include <stdio.h>
#include <stdlib.h>

int compare(const void* left, const void* right) {
  return *(int*)left - *(int*)right;
}

int main() {
  int arr[6];
  int sum = 0;
  for (int i = 0; i < 6; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  qsort(arr, 4, sizeof(int), compare);
  qsort(arr + 4, 2, sizeof(int), compare);
  printf("%d\n", sum - arr[0] - arr[4]);
  return 0;
}
