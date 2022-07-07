#include <stdio.h>

int main() {
  long long n, m, cur = 1;
  scanf("%lld %lld", &n, &m);
  for (int i = 0; i < n; i++) {
    long long x;
    scanf("%lld", &x);
    cur *= x % m;
    cur %= m;
  }
  printf("%lld\n", cur);
  return 0;
}
