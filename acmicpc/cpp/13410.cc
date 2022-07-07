#include <stdio.h>

int flip(int k) {
  int result = 0;
  while (k) {
    result *= 10;
    result += k%10;
    k /= 10;
  }
  return result;
}

int main() {
  int n, k, max = 0;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= k; i++) {
    int cur = flip(n * i);
    if (max < cur) max = cur;
  }
  printf("%d\n", max);
  return 0;
}
