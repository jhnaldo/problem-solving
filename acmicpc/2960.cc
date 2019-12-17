#include <stdio.h>

int main() {
  int n, k;
  bool check[1001] = {};
  int count = 0;
  int i, j;
  scanf("%d %d", &n, &k);
  while (true) {
    for (i = 2; i <= n; i++) {
      for (j = i; j <= n; j += i) {
        if (!check[j]) {
          check[j] = true;
          if (++count == k) {
            printf("%d\n", j);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
