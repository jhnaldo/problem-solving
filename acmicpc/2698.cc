#include <stdio.h>

int main() {
  int t;
  int zero[101][100] = {0, }, one[101][100] = {0, };
  zero[1][0] = 1;
  one[1][0] = 1;
  for (int n = 2; n <= 100; n++) {
    zero[n][0] = zero[n-1][0] + one[n-1][0];
    one[n][0] = zero[n-1][0];
    for (int k = 1; k < n; k++) {
      zero[n][k] = zero[n-1][k] + one[n-1][k];
      one[n][k] = zero[n-1][k] + one[n-1][k-1];
    }
  }
  scanf("%d", &t);
  while(t--) {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", zero[n][k] + one[n][k]);
  }
  return 0;
}
