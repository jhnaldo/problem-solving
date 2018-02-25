#include <stdio.h>

int main() {
  while (true) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (!a && !b && !c && !d) break;
    printf("%d %d\n", c-b, d-a);
  }
  return 0;
}
