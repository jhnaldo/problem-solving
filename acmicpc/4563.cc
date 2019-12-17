#include <stdio.h>

int main() {
  while(true) {
    long long n, n2, i;
    int count = 0;
    scanf("%lld", &n);
    if (!n) break;
    n2 = n * n;
    for (i = 1; i * i < n2; i++) {
      if (n2 % i == 0 && n2 / i % 2 == i % 2) {
        if ((n2 / i - i) / 2 <= n) break;
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
