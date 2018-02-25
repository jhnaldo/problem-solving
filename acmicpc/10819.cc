#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b)? (a): (b))

int compare(const void* left, const void* right) {
  return *(int*)left - *(int*)right;
}

int main() {
  int n;
  int arr[8], sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  qsort(arr, n, sizeof(int), compare);
  for (int i = 0; i < n/2; i++) {
    sum += arr[n-i-1] - arr[i];
  }
  sum *= 2;
  sum -= MIN(arr[n/2]-arr[n/2-1], arr[n-n/2]-arr[n-n/2-1]);
  printf("%d\n", sum);
}
