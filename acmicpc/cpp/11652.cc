#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

int N, i;
long long arr[SIZE];

int compare(const void* left, const void* right) {
  long long l = *(long long*)left;
  long long r = *(long long*)right;
  if (l > r) return 1;
  if (r < l) return -1;
  return 0;
}

int main() {
  scanf("%d", &N);
  for (i = 0; i < N; i++) {
    scanf("%lld", &arr[i]);
  }

  qsort(arr, N, sizeof(long long), compare);

  long long x = arr[0];
  int count = 1;
  int max = 0;
  long long result = x;
  for (i = 1; i < N; i++) {
    if (x == arr[i]) {
      count++;
    } else {
      if (max < count) {
        max = count;
        result = x;
      }
      x = arr[i];
      count = 1;
    }
  }

  if (max < count) {
    max = count;
    result = x;
  }

  printf("%lld\n", result);

  return 0;
}
