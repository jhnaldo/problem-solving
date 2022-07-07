#include <stdio.h>
#include <queue>

using namespace std;

#define SIZE 300

int n, m;
int map[SIZE][SIZE];

void copy(int to[SIZE][SIZE]) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      to[i][j] = map[i][j];
    }
  }
}

class Pos {
  public:
    int x, y;
    Pos(int _x, int _y): x(_x), y(_y) {}
};

void fill(int cur[SIZE][SIZE], int x, int y) {
  queue<Pos> q;
  cur[x][y] = 0;
  q.push(Pos(x, y));
  while (!q.empty()) {
    Pos pos = q.front();
    int x = pos.x;
    int y = pos.y;
    q.pop();
    if (cur[x - 1][y] != 0) { cur[x - 1][y] = 0; q.push(Pos(x - 1, y)); }
    if (cur[x + 1][y] != 0) { cur[x + 1][y] = 0; q.push(Pos(x + 1, y)); }
    if (cur[x][y - 1] != 0) { cur[x][y - 1] = 0; q.push(Pos(x, y - 1)); }
    if (cur[x][y + 1] != 0) { cur[x][y + 1] = 0; q.push(Pos(x, y + 1)); }
  }
}

int count() {
  int i, j;
  int c = 0;
  int cur[SIZE][SIZE];
  copy(cur);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (cur[i][j] > 0) {
        fill(cur, i, j);
        c++;
      }
    }
  }
  return c;
}

void reduce() {
  int i, j;
  int cur[SIZE][SIZE];
  copy(cur);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (cur[i][j] != 0) {
        if (cur[i - 1][j] == 0) map[i][j]--;
        if (cur[i + 1][j] == 0) map[i][j]--;
        if (cur[i][j - 1] == 0) map[i][j]--;
        if (cur[i][j + 1] == 0) map[i][j]--;
        if (map[i][j] < 0) map[i][j] = 0;
      }
    }
  }
}

void display() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  int i, j, c;
  int time = 0;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      scanf("%d", &map[i][j]);
  }
  for (c = count(); c == 1; c = count()) {
    reduce();
    // display();
    time++;
  }
  printf("%d\n", c == 0 ? 0 : time);
  return 0;
}
