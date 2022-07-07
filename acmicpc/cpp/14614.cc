#include <stdio.h>
#include <cstring>

int main() {
  int a, b;
  char c[102];
  scanf("%d %d %s", &a, &b, c);
  if ((c[strlen(c)-1] - '0') % 2) {
    a ^= b;
  }
  printf("%d\n", a);
  return 0;
}
