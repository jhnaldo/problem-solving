#include <stdio.h>

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

enum Direction { EAST, WEST, NORTH, SOUTH };

struct Dice {
  int a, b, c, d, e, f;
  Dice(int a, int b, int c, int d, int e, int f): a(a), b(b), c(c), d(d), e(e), f(f) {}
  void move(Direction dir) {
    int t;
    switch (dir) {
      case EAST: t = b; b = f; f = d; d = c; c = t; break;
      case WEST: t = c; c = d; d = f; f = b; b = t; break;
      case NORTH: t = a; a = c; c = e; e = f; f = t; break;
      case SOUTH: t = f; f = e; e = c; c = a; a = t; break;
    }
  }
  int top() { return c; }
  int bottom() { return f; }
};

int n, m, k;
int map[20][20];
Direction move[1000];
int sol[1000];
Pos cur(0, 0);
Dice dice(0, 0, 0, 0, 0, 0);

void input() {
  scanf("%d %d %d %d %d", &n, &m, &cur.x, &cur.y, &k);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      scanf("%d", &map[i][j]);
  }
  for (int i = 0; i < k; i++) {
    int d;
    scanf("%d", &d);
    switch (d) {
      case 1: move[i] = EAST; break;
      case 2: move[i] = WEST; break;
      case 3: move[i] = NORTH; break;
      case 4: move[i] = SOUTH; break;
    }
  }
}

void process() {
  for (int i = 0; i < k; i++) {
    bool changed = false;
    switch (move[i]) {
      case EAST: if (cur.y + 1 < m) { cur.y++; changed = true; } break;
      case WEST: if (cur.y - 1 >= 0) { cur.y--; changed = true; } break;
      case NORTH: if (cur.x - 1 >= 0) { cur.x--; changed = true; } break;
      case SOUTH: if (cur.x + 1 < n) { cur.x++; changed = true; } break;
    }
    if (changed) {
      dice.move(move[i]);
      sol[i] = dice.top();
      if (map[cur.x][cur.y] == 0) {
        map[cur.x][cur.y] = dice.bottom();
      } else {
        dice.f = map[cur.x][cur.y];
        map[cur.x][cur.y] = 0;
      }
    } else {
      sol[i] = -1;
    }
  }
}

void output() {
  for (int i = 0; i < k; i++) {
    if (sol[i] != -1)
      printf("%d\n", sol[i]);
  }
}

int main() {
  input();
  process();
  output();
  return 0;
}
