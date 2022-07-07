#include <stdio.h>

int main() {
  int n, m;
  int dy[4] = { 1, 0, -1, 0 };
  int dx[4] = { 0, 1, 0, -1 };
  int k = 0;
  bool arr[102][102] = {};
  int x, y;
  int count = 0;
  scanf("%d %d", &n, &m);
  for (x = 1; x <= n; x++)
    arr[x][0] = arr[x][m + 1] = true;
  for (y = 1; y <= m; y++)
    arr[0][y] = arr[n + 1][y] = true;
  x = 1; y = 1;
  while (true) {
    arr[x][y] = true;
    if (arr[x + dx[k]][y + dy[k]]) {
      k++;
      k %= 4;
      if (arr[x + dx[k]][y + dy[k]]) break;
      count++;
    }
    x += dx[k];
    y += dy[k];
  }
  printf("%d\n", count);

  return 0;
}
