#include <stdio.h>

int n, m;
int map[503][503];
int res;

void input() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      scanf("%d", &map[i][j]);
  }
}

void update(int x, int y, int dx1, int dy1, int dx2, int dy2, int dx3, int dy3) {
  int sum = map[x][y] +
    map[x + dx1][y + dy1] +
    map[x + dx2][y + dy2] +
    map[x + dx3][y + dy3];
  res = (sum > res ? sum : res);
}

void process() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      update(i, j, 1, 0, 2, 0, 3, 0);

      update(i, j, 0, 1, 0, 2, 0, 3);

      update(i, j, 0, 1, 1, 0, 1, 1);

      update(i, j, 1, 0, 2, 0, 2, 1);
      update(i, j, 1, 0, 0, 1, 0, 2);
      update(i, j, 0, 1, 1, 1, 2, 1);
      update(i + 1, j, 0, 1, 0, 2, -1, 2);

      update(i, j + 1, 1, 0, 2, 0, 2, -1);
      update(i, j, 1, 0, 1, 1, 1, 2);
      update(i, j, 0, 1, 1, 0, 2, 0);
      update(i, j, 0, 1, 0, 2, 1, 2);

      update(i, j, 1, 0, 1, 1, 2, 1);
      update(i + 1, j, 0, 1, -1, 1, -1, 2);

      update(i, j + 1, 1, 0, 1, -1, 2, -1);
      update(i, j, 0, 1, 1, 1, 1, 2);

      update(i, j, 0, 1, 0, 2, 1, 1);
      update(i, j + 1, 1, 0, 1, -1, 2, 0);
      update(i + 1, j, 0, 1, -1, 1, 0, 2);
      update(i, j, 1, 0, 1, 1, 2, 0);
    }
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
