#include <stdio.h>

int main() {
  int n, k = 1;
  int count = 0;

  scanf("%d", &n);

  while (true) {
    if (k % 2 && n % k == 0) {
      if (n/k < k/2) break;
      count++;
    } else if (k % 2 == 0 && n % k == k/2) {
      if (n/k < k/2) break;
      count++;
    }

    k++;
  }

  printf("%d\n", count);

  return 0;
}
