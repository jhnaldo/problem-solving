#include <stdio.h>

int power(int x, int p) {
  if (p == 0) return 1;
  return x * power(x, p-1);
}

int main() {
  int n, sum = 0;
  scanf("%d", &n);
  while (n--) {
    int x;
    scanf("%d", &x);
    sum += power(x/10, x%10);
  }
  printf("%d\n", sum);
  return 0;
}
