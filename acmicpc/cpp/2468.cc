#include <stdio.h>
#include <stack>

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n;
int map[102][102];
int res;

void input() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      scanf("%d", &map[i][j]);
  }
}

void process() {
  bool possible[102][102] = {};
  for (int h = 0; h < 100; h++) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++)
        possible[i][j] = map[i][j] > h;
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (!possible[i][j]) continue;
        count++;
        stack<Pos> s;
        possible[i][j] = false;
        s.push(Pos(i, j));
        while (!s.empty()) {
          Pos pos = s.top();
          int x = pos.x;
          int y = pos.y;
          s.pop();
          if (possible[x + 1][y]) { possible[x + 1][y] = false; s.push(Pos(x + 1, y)); }
          if (possible[x - 1][y]) { possible[x - 1][y] = false; s.push(Pos(x - 1, y)); }
          if (possible[x][y + 1]) { possible[x][y + 1] = false; s.push(Pos(x, y + 1)); }
          if (possible[x][y - 1]) { possible[x][y - 1] = false; s.push(Pos(x, y - 1)); }
        }
      }
    }
    res = (count > res ? count : res);
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
