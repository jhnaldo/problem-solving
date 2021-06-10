#include <stdio.h>
#include <climits>

using namespace std;

#define N 1000

int n, m, x;

int minDist(int dist[], bool set[]) {
  int min = INT_MAX, min_index;
  for (int v = 0; v < n; v++)
    if (set[v] == false && dist[v] <= min)
      min = dist[v], min_index = v;
  return min_index;
}

void dijkstra(int g[N][N], int dist[N]) {
  bool set[N];
  for (int i = 0; i < n; i++) {
    dist[i] = INT_MAX;
    set[i] = false;
  }
  dist[x] = 0;

  for (int c = 0; c < n-1; c++) {
    int u = minDist(dist, set);
    set[u] = true;
    for (int v = 0; v < n; v++)
      if (!set[v] && g[u][v] && dist[u] != INT_MAX && dist[u]
          + g[u][v] < dist[v])
        dist[v] = dist[u] + g[u][v];
  }
}

int main() {
  int g[N][N], gdist[N];
  int r[N][N], rdist[N];
  scanf("%d %d %d", &n, &m, &x);
  x--;
  for (int i = 0; i < m; i++) {
    int x, y, d;
    scanf("%d %d %d", &x, &y, &d);
    x--; y--;
    g[x][y] = d;
    r[y][x] = d;
  }
  dijkstra(g, gdist);
  dijkstra(r, rdist);

  int result = 0;
  for (int i = 0; i < n; i++) {
    int dist = gdist[i] + rdist[i];
    if (result < dist) result = dist;
  }
  printf("%d\n", result);
  return 0;
}
