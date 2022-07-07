#include <stdio.h>

int main() {
  int n, m, i, j;
  int arr[1002][1002] = {};
  int xstack[1000], ystack[1000];
  int ssize = 0;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    char str[1001];
    scanf("%s", str);
    for (j = 0; j < m; j++) {
      arr[i][j] = 1 - (str[j] - '0');
    }
  }

  for (j = 0; j < m; j++) {
    if (arr[0][j] == 1) {
      xstack[ssize] = 0;
      ystack[ssize] = j;
      ssize++;
    }
  }

  while (ssize) {
    int x, y;
    ssize--;
    x = xstack[ssize];
    y = ystack[ssize];

    arr[x][y] = 2;

    if (arr[x][y-1] == 1) { xstack[ssize] = x; ystack[ssize] = y-1; ssize++; }
    if (arr[x][y+1] == 1) { xstack[ssize] = x; ystack[ssize] = y+1; ssize++; }
    if (arr[x-1][y] == 1) { xstack[ssize] = x-1; ystack[ssize] = y; ssize++; }
    if (arr[x+1][y] == 1) { xstack[ssize] = x+1; ystack[ssize] = y; ssize++; }
  }

  bool check = false;
  for (j = 0; j < m; j++) {
    if (arr[n-1][j] == 2) check = true;
  }
  printf("%s\n", (check? "YES": "NO"));

  return 0;
}
