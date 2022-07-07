#include <stdio.h>

bool check(int n) {
  int k = n;
  int sum = 0;
  while (k) {
    sum += k % 10;
    k /= 10;
  }
  return n % sum == 0;
}

int main() {
  int n, i;
  int count = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++){
    if (check(i)) count++;
  }
  printf("%d\n", count);
  return 0;
}
