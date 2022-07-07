#include <stdio.h>

#define SIZE 1000000

int main() {
  int n, size;
  long long *height = new long long[SIZE];
  long long max;
  int *start = new int[SIZE];
  int *pos = new int[SIZE];
  while (true) {
    size = max = 0;
    scanf("%d", &n);
    if (n == 0) break;
    for (int i = 0; i <= n; i++) {
      long long cur;
      if (i < n) scanf("%lld", &cur);
      else cur = 0;
      while (size > 0 && height[size - 1] > cur) {
        long long area = (i - start[size - 1]) * height[size - 1];
        max = area > max ? area : max;
        size--;
      }
      if (size > 0 && height[size - 1] == cur) size--;
      height[size] = cur;
      start[size] = (size > 0 ? pos[size - 1] : 0);
      pos[size] = i + 1;
      size++;
    }
    printf("%lld\n", max);
  }
  delete[] height;
  delete[] start;
  delete[] pos;
  return 0;
}
