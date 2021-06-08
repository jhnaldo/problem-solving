#include <stdio.h>

int w[21][21][21];
int a, b, c;

int main() {
  for (a = 0; a <= 20; a++){
    for (b = 0; b <= 20; b++){
      for (c = 0; c <= 20; c++){
        if (a <= 0 || b <= 0 || c <= 0) {
          w[a][b][c] = 1;
        } else if (a < b && b < c) {
          w[a][b][c] = w[a][b][c-1] + w[a][b-1][c-1] - w[a][b-1][c];
        } else {
          w[a][b][c] = w[a-1][b][c] + w[a-1][b-1][c] + w[a-1][b][c-1] - w[a-1][b-1][c-1];
        }
      }
    }
  }

  while (true) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == -1 && b == -1 && c == -1) break;

    printf("w(%d, %d, %d) = ", a, b, c);

    if (a <= 0 || b <= 0 || c <= 0) printf("1\n");
    else if (a > 20 || b > 20 || c > 20) printf("%d\n", w[20][20][20]);
    else printf("%d\n", w[a][b][c]);
  }

  return 0;
}
