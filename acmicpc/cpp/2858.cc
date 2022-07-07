#include <stdio.h>

int main() {
  int r, b, s;
  scanf("%d %d", &r, &b);
  s = (r + 4) / 2;
  for (int w = 1; ; w++) {
    if (w * (s - w) == r + b) {
      printf("%d %d\n", s-w, w);
      break;
    }
  }
  return 0;
}
