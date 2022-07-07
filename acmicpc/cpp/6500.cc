#include <stdio.h>

int main() {
  while (true) {
    int n;
    bool check[10000] = {};
    int count = 0;
    scanf("%d", &n);
    if (n == 0) break;
    while (!check[n]) {
      check[n] = true;
      count++;
      n = n * n / 100 % 10000;
    }
    printf("%d\n", count);
  }
  return 0;
}
