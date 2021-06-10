#include <stdio.h>

#define SIZE 1024

int n, m;
int map[SIZE+1][SIZE+1], sum[SIZE+1][SIZE+1];

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      scanf("%d", &map[i][j]);
      sum[i][j] = map[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
    }
  }
  for (int i = 0; i < m; i++) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int area = sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];
    printf("%d\n", area);
  }
  return 0;
}
