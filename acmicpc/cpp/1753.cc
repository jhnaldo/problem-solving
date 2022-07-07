#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

struct Edge {
  int to, weight;
  Edge(): to(0), weight(0) {}
  Edge(int to, int weight): to(to), weight(weight) {}
};

struct Target {
  int v, d;
  Target(int v, int d): v(v), d(d) {}
};

struct CompareTarget {
  bool operator() (Target const &t1, Target const & t2) {
    return t1.d > t2.d;
  }
};

int main() {
  int n, m, start;
  int *dist;
  vector<Edge> *edge;
  priority_queue<Target, vector<Target>, CompareTarget> pq;
  int i, j, v, d;

  scanf("%d %d", &n, &m);
  scanf("%d", &start);
  edge = new vector<Edge>[n];
  dist = new int[n];
  for (i = 0; i < n; i++) dist[i] = -1;
  for (i = 0; i < m; i++) {
    int from, to, weight;
    scanf("%d %d %d", &from, &to, &weight);
    edge[from - 1].push_back(Edge(to - 1, weight));
  }

  pq.push(Target(start - 1, 0));
  while (!pq.empty()) {
    Target t = pq.top();
    pq.pop();
    v = t.v; d = t.d;
    if (dist[v] != -1 && d >= dist[v]) continue;
    dist[v] = d;
    vector<Edge> es = edge[v];
    for (i = 0; i < es.size(); i++) {
      Edge e = es[i];
      if (dist[e.to] == -1 || ((d + e.weight) < dist[e.to]))
        pq.push(Target(e.to, d + e.weight));
    }
  }

  for (i = 0; i < n; i++) {
    if (dist[i] == -1) printf("INF\n");
    else printf("%d\n", dist[i]);
  }

  delete[] edge;
  delete[] dist;
  return 0;
}
