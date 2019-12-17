#include <stdio.h>

int main() {
  int s, x, e, diff;
  while (true) {
    scanf("%d %d %d", &s, &x, &e);
    if (!s && !x && !e) break;
    diff = e - s;
    if ((diff < 0 && x > 0) ||
        (diff > 0 && x < 0) ||
        (diff % x != 0)) {
      printf("X\n");
    } else {
      printf("%d\n", diff / x + 1);
    }
  }
  return 0;
}
