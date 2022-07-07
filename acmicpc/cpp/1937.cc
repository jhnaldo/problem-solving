#include <stdio.h>
#include <queue>

using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n;
int map[500][500];
int length[500][500];
int inedge[500][500];
queue<Pos> q;
int max_length;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &map[i][j]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i > 0 && map[i - 1][j] < map[i][j]) inedge[i][j]++;
      if (i < n - 1 && map[i + 1][j] < map[i][j]) inedge[i][j]++;
      if (j > 0 && map[i][j - 1] < map[i][j]) inedge[i][j]++;
      if (j < n - 1 && map[i][j + 1] < map[i][j]) inedge[i][j]++;
      if (inedge[i][j] == 0) q.push(Pos(i, j));
    }
  }
}

void check(Pos pos, int dx, int dy) {
  int x = pos.x;
  int y = pos.y;
  int _x = x + dx;
  int _y = y + dy;
  if (_x < 0 || n <= _x || _y < 0 || n <= _y) return;
  if (map[_x][_y] <= map[x][y]) return;
  length[_x][_y] = MAX(length[_x][_y], length[x][y] + 1);
  if (--inedge[_x][_y] == 0) q.push(Pos(_x, _y));
}

void process() {
  while (!q.empty()) {
    Pos pos = q.front();
    q.pop();
    max_length = MAX(max_length, length[pos.x][pos.y]);
    check(pos, 1, 0);
    check(pos, -1, 0);
    check(pos, 0, 1);
    check(pos, 0, -1);
  }
}

void output() {
  printf("%d\n", max_length + 1);
}

int main() {
  input();
  process();
  output();
  return 0;
}
