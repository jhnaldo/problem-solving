#include <stdio.h>
#include <queue>

using namespace std;

class Point {
public:
  int x, y, d;
  bool c;
  Point(int x, int y, bool c, int d): x(x), y(y), c(c), d(d) {}
};

int main() {
  int n, m;
  bool **map;
  int **dist[2];
  char str[1001];
  queue<Point> q;
  int i, j;
  int x, y, d;
  bool c;
  scanf("%d %d", &n, &m);
  map = new bool*[n];
  dist[0] = new int*[n];
  dist[1] = new int*[n];
  for (i = 0; i < n; i++) {
    map[i] = new bool[m];
    dist[0][i] = new int[m];
    dist[1][i] = new int[m];
    scanf("%s", str);
    for (j = 0; j < m; j++) {
      map[i][j] = str[j] == '1';
      dist[0][i][j] = dist[1][i][j] = -1;
    }
  }

  q.push(Point(0, 0, false, 1));
  q.push(Point(0, 0, true, 1));
  while (!q.empty()) {
    Point p = q.front();
    q.pop();
    x = p.x; y = p.y; c = p.c; d = p.d;
    if (x < 0 || x >= n || y < 0 || y >= m) continue;
    if (dist[c][x][y] != -1 || (map[x][y] && c)) continue;
    if (map[x][y] && !c) c = true;
    dist[c][x][y] = d;
    q.push(Point(x - 1, y, c, d + 1));
    q.push(Point(x + 1, y, c, d + 1));
    q.push(Point(x, y - 1, c, d + 1));
    q.push(Point(x, y + 1, c, d + 1));
  }

  int f = dist[0][n - 1][m - 1];
  int t = dist[1][n - 1][m - 1];
  if (f == -1) printf("%d\n", t);
  else if (t == -1) printf("-1\n");
  else printf("%d\n", (f < t ? f : t));

  for (i = 0; i < n; i++) {
    delete[] map[i];
    delete[] dist[0][i];
  }
  delete[] map;
  delete[] dist[0];
  delete[] dist[1];

  return 0;
}
