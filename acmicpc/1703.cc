#include <stdio.h>

int main() {
  while(true) {
    int n;
    int cur = 1;
    int i;
    scanf("%d", &n);
    if (n == 0) break;
    for (i = 0; i < n; i++) {
      int mul, sub;
      scanf("%d %d", &mul, &sub);
      cur *= mul;
      cur -= sub;
    }
    printf("%d\n", cur);
  }
  return 0;
}
