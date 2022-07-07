#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main() {
  int n, w, h, l;
  scanf("%d %d %d %d", &n, &w, &h, &l);
  printf("%d\n", MIN(n, (w/l) * (h/l)));
  return 0;
}
