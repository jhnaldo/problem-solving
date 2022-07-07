#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int a, b, c, d;
  int result = 0;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  result = MAX(result, MIN(a, b) * MIN(c, d));
  result = MAX(result, MIN(a, c) * MIN(b, d));
  result = MAX(result, MIN(a, d) * MIN(b, c));
  printf("%d\n", result);
  return 0;
}
