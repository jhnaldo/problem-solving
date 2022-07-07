#include <stdio.h>

int main() {
  int n, x, y;
  char l, r, i, j;
  scanf("%d %d %d", &n, &x, &y);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if ((i + j) % 2 == (x + y) % 2)  printf("v");
      else printf(".");
    }
    printf("\n");
  }
  return 0;
}
