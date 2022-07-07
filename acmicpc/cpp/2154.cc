#include <stdio.h>
#include <string.h>

int main() {
  int n, k = 1, cur = 0;
  int mod, len;
  int arr[10];
  scanf("%d", &n);
  for (len = 1, mod = 10; mod <= n; len++, mod *= 10);
  for (int i = 1; ; i++) {
    int m = i, j, t;
    for (j = 0; m; j++, m /= 10) {
      arr[j] = m%10;
    }
    for (t = j-1; t >= 0; t--, k++) {
      cur *= 10;
      cur %= mod;
      cur += arr[t];
      if (cur == n) {
        printf("%d\n", k-len+1);
        return 0;
      }
    }
  }
  return 0;
}
