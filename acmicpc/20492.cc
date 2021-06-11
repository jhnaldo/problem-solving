#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%d %d\n", (int)(n*(1-0.22)), (int)(n*0.8 + n*0.2*(1-0.22)));
  return 0;
}
