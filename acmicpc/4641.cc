#include <stdio.h>

int main() {
  while (true) {
    bool check[100] = {0,};
    int n, count = 0;
    while (scanf("%d", &n) == 1 && n && n != -1) check[n] = true;
    if (n == -1) break;
    for (int i = 1; i < 50; i++) count += check[i] * check[i*2];
    printf("%d\n", count);
  }
  return 0;
}
