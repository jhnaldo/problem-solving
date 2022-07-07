#include <stdio.h>

#define ABS(a) ((a)>0?(a):-(a))

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  printf("%d\n", n-ABS(m-k));
  return 0;
}
