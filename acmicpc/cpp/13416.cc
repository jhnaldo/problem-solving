#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, a, b, c, total = 0;
    scanf("%d", &n);
    while (n--) {
      int max = 0;
      scanf("%d %d %d", &a, &b, &c);
      if (max < a) max = a;
      if (max < b) max = b;
      if (max < c) max = c;
      total += max;
    }
    printf("%d\n", total);
  }
  return 0;
}
