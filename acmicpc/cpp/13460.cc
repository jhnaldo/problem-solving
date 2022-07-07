#include <stdio.h>
#include <queue>

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
  bool operator==(Pos &pos) { return x == pos.x && y == pos.y; }
  bool operator!=(Pos &pos) { return !(*this == pos); }
  Pos operator+(Pos &pos) { return Pos(x + pos.x, y + pos.y); }
};

struct State {
  Pos r, b;
  int k;
  State(Pos r, Pos b, int k): r(r), b(b), k(k) {}
};

int n, m;
bool map[10][10];
State cur(Pos(0, 0), Pos(0, 0), 0);
Pos o(0, 0);
int res = -1;
Pos d[4] = { Pos(1, 0), Pos(-1, 0), Pos(0, 1), Pos(0, -1) };

void input() {
  char str[11];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", str);
    for (int j = 0; j < m; j++) {
      map[i][j] = str[j] != '#';
      if (str[j] == 'R') cur.r = Pos(i, j);
      if (str[j] == 'B') cur.b = Pos(i, j);
      if (str[j] == 'O') o = Pos(i, j);
    }
  }
}

void slide(Pos &cur, Pos & op, Pos &delta) {
  for (Pos pos = cur + delta; map[pos.x][pos.y] && (pos == o || pos != op); cur = pos, pos = pos + delta) {
    if (cur == o) break;
  }
}

State move(State& st, int k) {
  Pos delta = Pos(d[k].x, d[k].y);

  State next = st;

  Pos &r = next.r;
  Pos &b = next.b;

  slide(next.r, next.b, delta);
  slide(next.b, next.r, delta);
  slide(next.r, next.b, delta);

  next.k++;

  return next;
}

void process() {
  queue<State> q;
  q.push(cur);
  while (!q.empty()) {
    State st = q.front();
    q.pop();
    if (st.k == 10) continue;
    for (int i = 0; i < 4; i++) {
      State next = move(st, i);
      if (next.b == o) continue;
      if (next.r == o) {
        res = next.k;
        break;
      }
      q.push(next);
    }
    if (res != -1) break;
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
