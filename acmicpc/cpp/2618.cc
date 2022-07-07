#include <stdio.h>

#define ABS(a) ((a) < 0 ? -(a) : (a))

class Point {
public:
  int x, y;
  Point(int x, int y): x(x), y(y) {}
  int dist(const Point* that) {
    return ABS(this->x - that->x) + ABS(this->y - that->y);
  }
};

int main() {
  int n, w;
  Point **pts;
  int **memo;
  bool **keep;
  int i, j, car;
  scanf("%d %d", &n, &w);
  w += 2;
  pts = new Point*[w];
  memo = new int*[w];
  keep = new bool*[w];

  for (i = 0; i < w; i++) {
    int x, y;
    memo[i] = new int[w]();
    keep[i] = new bool[w]();
    if (i == 0) x = y = 1;
    else if (i == 1) x = y = n;
    else scanf("%d %d", &x, &y);
    pts[i] = new Point(x, y);
  }

  for (i = w - 2; i >= 0; i--) {
    for (j = w - 2; j > i; j--) {
      int wi = memo[j][j + 1] + pts[i]->dist(pts[j + 1]);
      int wj = memo[i][j + 1] + pts[j]->dist(pts[j + 1]);
      if (wi < wj) {
        memo[i][j] = wi;
        keep[i][j] = false;
      } else {
        memo[i][j] = wj;
        keep[i][j] = true;
      }
    }
  }

  printf("%d\n", memo[0][1]);
  car = 2;
  for (i = 0, j = 1; j < w - 1; j = j + 1) {
    if (!keep[i][j]) {
      i = j;
      car = 3 - car;
    }
    printf("%d\n", car);
  }

  for (i = 0; i < w; i++) {
    delete pts[i];
    delete memo[i];
    delete keep[i];
  }
  delete[] pts;
  delete[] memo;
  delete[] keep;
  return 0;
}
