#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
  int l, r, a;
  scanf("%d %d %d", &l, &r, &a);
  printf("%d\n", MIN((l+r+a)/2, MIN(l,r)+a)*2);
  return 0;
}
