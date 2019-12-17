#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
  int n, sum = 0, arr[10000], avg, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", arr + i);
    sum += arr[i];
  }
  avg = sum / n;
  sum = 0;
  for (i = 0; i < n; i++)
    sum += ABS(arr[i] - avg);
  printf("%d\n", sum / 2);
  return 0;
}
