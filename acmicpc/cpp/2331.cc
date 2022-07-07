#include <stdio.h>

int next(int n, int k) {
  int sum = 0;
  while (n) {
    int t = n%10;
    int cur = 1;
    for (int i = 0; i < k; i++) cur *= t;
    sum += cur;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, k;
  int pos[1000000] = {0, };
  scanf("%d %d", &n, &k);
  for (int i = 1; !pos[n]; i++) {
    pos[n] = i;
    n = next(n, k);
  }
  printf("%d\n", pos[n]-1);
  return 0;
}
