#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  while (true) {
    int x, y, min;
    scanf("%d %d", &x, &y);
    if (!x && !y) break;
    min = 30 * x + 40 * y;
    min = MIN(min, 35 * x + 30 * y);
    min = MIN(min, 40 * x + 20 * y);
    printf("%d\n", min);
  }
  return 0;
}
