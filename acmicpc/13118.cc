#include <stdio.h>

int main() {
  int a, b, c, d;
  int x, y, r;
  int answer = 0;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  scanf("%d %d %d", &x, &y, &r);
  if (a == x) answer = 1;
  if (b == x) answer = 2;
  if (c == x) answer = 3;
  if (d == x) answer = 4;
  printf("%d\n", answer);
  return 0;
}
