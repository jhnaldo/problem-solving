#include <stdio.h>
#include <queue>

#define ABS(a) ((a) < 0 ? -(a) : (a))

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n, l, r;
int map[50][50], new_map[50][50];
bool visited[50][50];
int move_count;
queue<Pos> q, target;

void input() {
  scanf("%d %d %d", &n, &l, &r);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &map[i][j]);
  }
}

void check(int &count, int &sum, int x, int y, int dx, int dy) {
  int _x = x + dx, _y = y + dy;
  if (_x < 0 || n <= _x || _y < 0 || n <= _y) return;
  if (visited[_x][_y]) return;
  int diff = ABS(map[x][y] - map[_x][_y]);
  if (diff < l || diff > r) return;
  visited[_x][_y] = true;
  q.push(Pos(_x, _y));
  target.push(Pos(_x, _y));
  count++; sum += map[_x][_y];
}

void move_block(int x, int y) {
  int count = 1;
  int sum = map[x][y];
  visited[x][y] = true;
  q.push(Pos(x, y));
  target.push(Pos(x, y));
  while (!q.empty()) {
    Pos pos = q.front(); q.pop();
    int x = pos.x, y = pos.y;
    check(count, sum, x, y, 1, 0);
    check(count, sum, x, y, -1, 0);
    check(count, sum, x, y, 0, 1);
    check(count, sum, x, y, 0, -1);
  }
  int avg = sum / count;
  while (!target.empty()) {
    Pos pos = target.front(); target.pop();
    int x = pos.x, y = pos.y;
    new_map[x][y] = avg;
  }
}

bool move() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      visited[i][j] = false;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!visited[i][j]) {
        move_block(i, j);
      }
    }
  }

  bool keep = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (map[i][j] != new_map[i][j]) keep = true;
      map[i][j] = new_map[i][j];
    }
  }
  return keep;
}

void output() {
  printf("%d\n", move_count);
}

int main() {
  input();
  while (move()) move_count++;
  output();
  return 0;
}
