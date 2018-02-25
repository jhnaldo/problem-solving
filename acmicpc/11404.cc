#include <stdio.h>

int main() {
  int n, m;
  int dist[100][100];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dist[i][j] = (i == j? 0: -1);
    }
  }
  for (int i = 0; i < m; i++) {
    int from, to, weight;
    scanf("%d %d %d", &from, &to, &weight);
    from--; to--;
    if (dist[from][to] == -1 || dist[from][to] > weight) dist[from][to] = weight;
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (dist[i][k] != -1 && dist[k][j] != -1 &&
            (dist[i][j] == -1 ||
             dist[i][j] > dist[i][k] + dist[k][j])) {
          dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", dist[i][j] == -1? 0: dist[i][j]);
    }
    printf("\n");
  }
  return 0;
}
