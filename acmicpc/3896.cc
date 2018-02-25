#include <stdio.h>

bool is_prime (int n) {
  for (int i = 2; i*i <= n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, lower, upper;
    scanf("%d", &n);
    for (lower = n; !is_prime(lower); lower--);
    for (upper = n; !is_prime(upper); upper++);
    printf("%d\n", upper - lower);
  }
  return 0;
}
