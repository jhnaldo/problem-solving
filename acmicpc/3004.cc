#include <stdio.h>

int main() {
  int n, p, q;
  scanf("%d", &n);
  p = n/2;
  q = n-p;
  printf("%d\n", ++p * ++q); 
  return 0;
}
