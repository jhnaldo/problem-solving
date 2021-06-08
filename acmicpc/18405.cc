#include <stdio.h>
#include <queue>

using namespace std;

class Point {
  public:
    int x;
    int y;
    Point(): x(0), y(0) {}
    Point(int x, int y): x(x), y(y) {}
};

#define MAX_N 200
#define MAX_K 1000

int N, K, i, j;
int map[MAX_N][MAX_N];
queue<Point*> q[MAX_K];

void next(int x, int y, int v) {
  if (x < 0 || x >= N || y < 0 || y >= N) return;
  if (map[x][y] != 0) return;
  map[x][y] = v;
  q[v-1].push(new Point(x, y));
}

void propagate(int x, int y, int v) {
  next(x + 1, y, v);
  next(x - 1, y, v);
  next(x, y + 1, v);
  next(x, y - 1, v);
}

int main() {
  scanf("%d %d", &N, &K);
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      int x;
      scanf("%d", &x);
      map[i][j] = x;
      if (x > 0) {
        q[x-1].push(new Point(i, j));
      }
    }
  }

  int S, X, Y;
  scanf("%d %d %d", &S, &X, &Y);
  while (S--) {
    for (int v = 0; v < K; v++) {
      int m = q[v].size();
      while (m--) {
        Point* point = q[v].front();
        q[v].pop();
        int x = point->x;
        int y = point->y;
        delete point;
        propagate(x, y, map[x][y]);
      }
    }
  }
  printf("%d", map[X-1][Y-1]);
  return 0;
}
