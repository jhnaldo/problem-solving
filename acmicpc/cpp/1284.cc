#include <stdio.h>

int main() {
  while (true) {
    int n, result = 1;
    scanf("%d", &n);
    if (n == 0) break;
    while (n > 0) {
      switch (n % 10) {
        case 0: result += 5; break;
        case 1: result += 3; break;
        default: result += 4; break;
      }
      n /= 10;
    }
    printf("%d\n", result);
  }
  return 0;
}
