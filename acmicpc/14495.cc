#include <stdio.h>

int main() {
  int n;
  long long a, b, c, d;
  scanf("%d", &n);
  a = b = c = 1;
  for (int i = 3; i < n; i++) {
    d = c;
    c = b;
    b = a;
    a = b + d;
  }
  printf("%lld\n", a);
  return 0;
}
