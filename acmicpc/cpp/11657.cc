#include <stdio.h>
#include <limits.h>
#include <vector>

using namespace std;

struct Edge {
  int to, weight;
  Edge(int to, int weight): to(to), weight(weight) {}
};

int main() {
  int n, m;
  vector<vector<Edge> > edge;
  vector<int> dist;
  int from, to, weight;
  int i, j;
  scanf("%d %d", &n, &m);
  edge.resize(n);
  dist.resize(n, INT_MAX);
  for (i = 0; i < m; i++) {
    scanf("%d %d %d", &from, &to, &weight);
    edge[from - 1].push_back(Edge(to - 1, weight));
  }
  dist[0] = 0;
  for (i = 0; i < n - 1; i++) {
    for (from = 0; from < n; from++) {
      for (j = 0; j < edge[from].size(); j++) {
        to = edge[from][j].to;
        weight = edge[from][j].weight;
        if (dist[from] != INT_MAX && dist[to] > dist[from] + weight) {
          dist[to] = dist[from] + weight;
        }
      }
    }
  }
  for (from = 0; from < n; from++) {
    for (j = 0; j < edge[from].size(); j++) {
      to = edge[from][j].to;
      weight = edge[from][j].weight;
      if (dist[from] != INT_MAX && dist[to] > dist[from] + weight) {
        printf("-1\n");
        return 0;
      }
    }
  }
  for (i = 1; i < n; i++) {
    printf("%d\n", dist[i] == INT_MAX ? -1 : dist[i]);
  }
  return 0;
}
