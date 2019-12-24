#include <stdio.h>
#include <vector>

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n, m;
int map[8][8];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
vector<Pos> cctv;
int res, total;

void input() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &map[i][j]);
      if (map[i][j] == 0) total++;
      else if (map[i][j] != 6) cctv.push_back(Pos(i, j));
    }
  }
}

void east(int dummy[8][8], int x, int y, int d, int &count) {
  x += dx[d];
  y += dy[d];
  while (0 <= x && x < n && 0 <= y && y < m) {
    if (dummy[x][y] == 0) {
      dummy[x][y] = -1;
      count++;
    }
    if (dummy[x][y] == 6) break;
    x += dx[d];
    y += dy[d];
  }
}
void north(int dummy[8][8], int x, int y, int d, int &count) {
  east(dummy, x, y, (d + 1) % 4, count);
}
void west(int dummy[8][8], int x, int y, int d, int &count) {
  east(dummy, x, y, (d + 2) % 4, count);
}
void south(int dummy[8][8], int x, int y, int d, int &count) {
  east(dummy, x, y, (d + 3) % 4, count);
}

void process() {
  int dummy[8][8];
  int size = cctv.size();
  int bound = 1 << (size * 2);
  for (int i = 0; i < bound; i++) {
    int k = i;
    int count = 0;
    for (int x = 0; x < n; x++) {
      for (int y = 0; y < m; y++)
        dummy[x][y] = map[x][y];
    }
    for (int j = 0; j < size; j++) {
      Pos pos = cctv[j];
      int x = pos.x;
      int y = pos.y;
      int d = k % 4;
      k /= 4;
      switch (map[x][y]) {
        case 1:
          east(dummy, x, y, d, count);
          break;
        case 2:
          east(dummy, x, y, d, count);
          west(dummy, x, y, d, count);
          break;
        case 3:
          east(dummy, x, y, d, count);
          north(dummy, x, y, d, count);
          break;
        case 4:
          east(dummy, x, y, d, count);
          west(dummy, x, y, d, count);
          north(dummy, x, y, d, count);
          break;
        case 5:
          east(dummy, x, y, d, count);
          west(dummy, x, y, d, count);
          north(dummy, x, y, d, count);
          south(dummy, x, y, d, count);
          break;
      }
    }
    res = (count > res ? count : res);
  }
}

void output() {
  printf("%d\n", total - res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
