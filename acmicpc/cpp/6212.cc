#include <stdio.h>

int main() {
  int m, n, i;
  int count[10] = {};
  scanf("%d %d", &m, &n);
  for (; m <= n; m++) {
    int k = m;
    while (k) {
      count[k % 10]++;
      k /= 10;
    }
  }
  for (i = 0; i < 10; i++)
    printf("%d ", count[i]);
  printf("\n");
  return 0;
}
