#include <stdio.h>

int main() {
  int n, m;
  char map[101][101] = {};
  int i, j, count = 0;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
    scanf("%s", map[i]);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (map[i][j] == '#') {
        count++;
        map[i + 1][j] = map[i][j + 1] = 0;
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
