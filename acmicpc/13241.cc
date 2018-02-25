#include <stdio.h>

void swap(long long& x, long long& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

long long gcd(long long  a, long long b) {
  if (a < b) swap(a, b);
  while (a % b) {
    a %= b;
    swap(a, b);
  }
  return b;
}

int main() {
  long long n, m;
  scanf("%lld %lld", &n, &m);
  printf("%lld\n", n * m / gcd(n, m));
  return 0;
}
