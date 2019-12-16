#include <stdio.h>
#include <queue>

using namespace std;

class Point {
public:
  int x, y, z, d;
  Point(int x, int y, int z, int d): x(x), y(y), z(z), d(d) {}
};

int main() {
  int n, m, h;
  int arr[100][100][100];
  int size, max = 0;
  queue<Point> q;
  int i, j, k;
  int x, y, z, d;
  scanf ("%d %d %d", &m, &n, &h);
  size = m * n * h;
  for (i = 0; i < h; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < m; k++) {
        scanf("%d", &arr[i][j][k]);
        if (arr[i][j][k] == 1) {
          arr[i][j][k] = 0;
          q.push(Point(i, j, k, 1));
        }
      }
    }
  }

  while(!q.empty()) {
    Point p = q.front();
    q.pop();
    x = p.x; y = p.y; z = p.z; d = p.d;
    if (x < 0 || x >= h || y < 0 || y >= n || z < 0 || z >= m || arr[x][y][z] != 0) continue;
    arr[x][y][z] = d;
    q.push(Point(x - 1, y, z, d + 1));
    q.push(Point(x + 1, y, z, d + 1));
    q.push(Point(x, y - 1, z, d + 1));
    q.push(Point(x, y + 1, z, d + 1));
    q.push(Point(x, y, z - 1, d + 1));
    q.push(Point(x, y, z + 1, d + 1));
  }

  for (i = 0; i < h; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < m; k++) {
        if (arr[i][j][k] == 0) {
          printf("-1\n");
          return 0;
        }
        max = (arr[i][j][k] > max ? arr[i][j][k] : max);
      }
    }
  }
  printf("%d\n", max - 1);

  return 0;
}
