#include <stdio.h>

int main() {
  int n, m;
  while (scanf("%d %d", &n, &m) == 2) {
    printf("%.2lf\n", (double) n / m);
  }
  return 0;
}
