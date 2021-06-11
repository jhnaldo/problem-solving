#include <stdio.h>

int pascal[30][30];

int main() {
  int r, c, w;
  scanf("%d %d %d", &r, &c, &w);
  pascal[1][1] = 1;
  for (int i = 2; i <= 29; i++) {
    for (int j = 1; j <= i; j++) {
      pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }
  }

  int sum = 0;
  for (int i = 0; i < w; i++) {
    for (int j = 0; j <= i; j++) {
      sum += pascal[r+i][c+j];
    }
  }
  printf("%d\n", sum);
  return 0;
}
