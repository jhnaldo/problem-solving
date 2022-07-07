#include <stdio.h>

bool isBomb(char ch) {
  return '0' <= ch && ch <= '9';
}

int main() {
  int n;
  char map[1001][1001];
  int count[1003][1003] = { 0, };
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", map[i]);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int ch = map[i-1][j-1];
      if (isBomb(ch)) {
        int num = ch - '0';
        count[i-1][j-1] += num;
        count[i][j-1] += num;
        count[i+1][j-1] += num;
        count[i-1][j] += num;
        count[i+1][j] += num;
        count[i-1][j+1] += num;
        count[i][j+1] += num;
        count[i+1][j+1] += num;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (isBomb(map[i-1][j-1])) printf("*");
      else if (count[i][j] >= 10) printf("M");
      else printf("%d", count[i][j]);
    }
    printf("\n");
  }
  return 0;
}
