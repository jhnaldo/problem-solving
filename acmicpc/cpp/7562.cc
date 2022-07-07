#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

class Pos {
public:
  int x;
  int y;

  Pos (int _x, int _y): x(_x), y(_y) {}
};

bool safe(int x, int y, int n) {
  return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
  int t;
  queue<Pos> q;
  scanf("%d", &t);
  Pos delta[8] = {
    Pos(-1, -2),
    Pos(-2, -1),
    Pos(1, -2),
    Pos(2, -1),
    Pos(-1, 2),
    Pos(-2, 1),
    Pos(1, 2),
    Pos(2, 1)
  };
  while (t--) {
    int n;
    int sx, sy, ex, ey;
    int depth[300][300];
    scanf("%d", &n);
    scanf("%d %d %d %d", &sx, &sy, &ex, &ey);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        depth[i][j] = -1;
      }
    }

    depth[sx][sy] = 0;
    q.push(Pos(sx, sy));
    while(!q.empty()) {
      Pos cur = q.front();
      q.pop();
      for (int i = 0; i < 8; i++) {
        int newx = cur.x + delta[i].x;
        int newy = cur.y + delta[i].y;
        if (safe(newx, newy, n) && depth[newx][newy] == -1) {
          depth[newx][newy] = depth[cur.x][cur.y] + 1;
          q.push(Pos(newx, newy));
        }
      }
    }
    printf("%d\n", depth[ex][ey]);
  }
  return 0;
}
