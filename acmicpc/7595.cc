#include <stdio.h>

int main() {
  while (true) {
    int n, i, j;
    scanf("%d", &n);
    if (!n) break;
    for (i = 0; i < n; i++){
      for (j = 0; j <= i; j++)
        printf("*");
      printf("\n");
    }
  }
  return 0;
}
