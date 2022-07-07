#include <stdio.h>

int main() {
  while (true) {
    int n;
    int prev, cur = 0;
    scanf("%d", &n);
    if (!n) break;
    while (n--) {
      prev = cur;
      scanf("%d", &cur);
      if (prev != cur) {
        printf("%d ", cur);
      }
    }
    printf("$\n");
  }
  return 0;
}
