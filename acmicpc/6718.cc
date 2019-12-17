#include <stdio.h>

#define MAX (1 << 15)

int main() {
  bool prime[MAX + 1] = {};
  int i, j;
  for (i = 2; i <= MAX; i++) prime[i] = true;
  for (i = 2; i <= MAX; i++) {
    if (prime[i]) {
      for (j = i * 2; j <= MAX; j += i)
        prime[j] = false;
    }
  }
  while (true) {
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0) break;
    for (i = 2; i <= n / 2; i++) {
      if (prime[i] && prime[n - i]) count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
