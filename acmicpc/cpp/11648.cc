#include <stdio.h>

int convert(int n) {
  if (!n) return 0;
  int result = 1;
  while (n) {
    result *= n%10;
    n /= 10;
  }
  return result;
}

int main() {
  int n, prev, count = 0;
  scanf("%d", &n);
  while (true) {
    prev = n;
    n = convert(n);
    if (n == prev) break;
    count++;
  }
  printf("%d\n", count);
  return 0;
}
