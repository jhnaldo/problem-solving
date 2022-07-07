#include <stdio.h>

#define MOD 1000000007

int main() {
  int n, m;
  int count[1000] = {0,};
  int buf[1000] = {0,};
  scanf("%d %d", &n, &m);
  count[0] = 1;
  for (int i = 0; i < m; i++) count[i] = 1;
  for (int i = 1; i < n; i++) {
    buf[0] = 1;
    for (int j = 1; j < m; j++) {
      buf[j] = ((buf[j-1] + count[j]) % MOD + count[j-1]) % MOD;
    }
    for (int j = 0; j < m; j++) {
      count[j] = buf[j];
    }
  }
  printf("%d\n", count[m-1]);
  return 0;
}
