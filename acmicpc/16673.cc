#include <stdio.h>

int main() {
  long long c, k, p;
  long long sum = 0;
  scanf("%lld %lld %lld", &c, &k, &p);
  for (int i = 1; i <= c; i++) {
    sum += k*i + p*i*i;
  }
  printf("%lld\n", sum);
  return 0;
}
