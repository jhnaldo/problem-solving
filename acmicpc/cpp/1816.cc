#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    long long k;
    int i;
    scanf("%lld", &k);
    for (i = 2; i < 1000000; i++) {
      if (k % i == 0) break;
    }
    printf("%s\n", (i == 1000000 ? "YES" : "NO"));
  }
  return 0;
}
