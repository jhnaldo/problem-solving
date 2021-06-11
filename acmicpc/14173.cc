#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
  int a, b, c, d;
  int p, q, r, s;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  scanf("%d %d %d %d", &p, &q, &r, &s);
  int x = MAX(MAX(c,r)-MIN(a,p),MAX(d,s)-MIN(b,q));
  printf("%d\n", x*x);
  return 0;
}
