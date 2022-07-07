#include <stdio.h>

#define ABS(a) ((a)>0?(a):-(a))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
  int bx, by;
  int dx, dy;
  int jx, jy;
  scanf("%d %d", &bx, &by);
  scanf("%d %d", &dx, &dy);
  scanf("%d %d", &jx, &jy);
  int b = MAX(ABS(bx - jx), ABS(by - jy));
  int d = ABS(dx - jx) + ABS(dy - jy);
  if (b > d) printf("daisy\n");
  else if (b < d) printf("bessie\n");
  else printf("tie\n");
  return 0;
}
