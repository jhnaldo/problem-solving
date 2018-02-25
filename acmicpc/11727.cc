#include <stdio.h>

#define MOD 10007

int main() {
  int n;
  int a, b, c;
  scanf("%d", &n);
  a = b = 1;
  for (int i = 2; i <= n; i++) {
    c = b;
    b = a;
    a = (b + 2 * c) % MOD;
  }
  printf("%d\n", a);
  return 0;
}
