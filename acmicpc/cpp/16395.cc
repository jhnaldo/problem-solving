#include <stdio.h>

int C(int n, int k) {
  long long result = 1;
  if (k > n/2) k = n - k;
  for (int i = n-k+1; i <= n; i++) result *= i;
  for (int i = 1; i <= k; i++) result /= i;
  return result;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d\n", C(n-1,k-1));
  return 0;
}
