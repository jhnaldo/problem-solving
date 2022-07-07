#include <stdio.h>

enum Direction { NORTH, EAST, SOUTH, WEST };
enum Status { EMPTY, WALL, CLEAN };
struct Pos {
  int x, y;
  Direction d;
  Pos(int x, int y, Direction d): x(x), y(y), d(d) {}
};

int n, m;
Pos cur(0, 0, NORTH);
int count;
Status st[52][52];

void input() {
  scanf("%d %d", &n, &m);
  scanf("%d %d %d", &cur.x, &cur.y, &cur.d);
  cur.x++;
  cur.y++;
  for (int i = 0; i <= n + 1; i++) {
    for (int j = 0; j <= m + 1; j++)
      st[i][j] = WALL;
  }
  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < m + 1; j++)
      scanf("%d", &st[i][j]);
  }
}

Pos left(Pos pos) {
  switch (pos.d) {
    case NORTH: return Pos(pos.x, pos.y, WEST);
    case EAST : return Pos(pos.x, pos.y, NORTH);
    case SOUTH: return Pos(pos.x, pos.y, EAST);
    case WEST : return Pos(pos.x, pos.y, SOUTH);
  }
}

Pos move(Pos pos, bool back = false) {
  int delta = (back ? -1 : 1);
  switch (pos.d) {
    case NORTH: return Pos(pos.x - delta, pos.y, NORTH);
    case EAST : return Pos(pos.x, pos.y + delta, EAST);
    case SOUTH: return Pos(pos.x + delta, pos.y, SOUTH);
    case WEST : return Pos(pos.x, pos.y - delta, WEST);
  }
}

void process() {
  int i;
  while (true) {
    if (st[cur.x][cur.y] == EMPTY) count++;
    st[cur.x][cur.y] = CLEAN;
    for (i = 0; i < 4; i++) {
      cur = left(cur);
      Pos l = move(cur);
      if (st[l.x][l.y] == EMPTY) {
        cur = l;
        break;
      }
    }
    if (i == 4) {
      Pos b = move(cur, true);
      if (st[b.x][b.y] == WALL) break;
      cur = b;
    }
  }
}

void output() {
  printf("%d\n", count);
}

int main() {
  input();
  process();
  output();
  return 0;
}
