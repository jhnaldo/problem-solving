#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
  int to, weight;
  Edge(int to, int weight): to(to), weight(weight) {}
};

struct Next {
  int v, d;
  bool p;
  Next(int v, int d, bool p): v(v), d(d), p(p) {}
};

struct CompareNext {
  bool operator()(const Next &x, const Next &y) {
    return x.d > y.d;
  }
};

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    int n, m, t;
    int s, g, h;
    vector<int> dist;
    vector<bool> passed;
    priority_queue<Next, vector<Next>, CompareNext> pq;
    vector<vector<Edge> > edge;
    vector<bool> target;
    vector<int> solution;
    int i, j;
    scanf("%d %d %d", &n, &m, &t);
    scanf("%d %d %d", &s, &g, &h);
    s--; g--; h--;
    dist.resize(n, -1);
    passed.resize(n);
    target.resize(n);
    edge.resize(n);
    for (i = 0; i < m; i++) {
      int from, to, weight;
      scanf("%d %d %d", &from, &to, &weight);
      edge[from - 1].push_back(Edge(to - 1, weight));
      edge[to - 1].push_back(Edge(from - 1, weight));
    }
    for (i = 0; i < t; i++) {
      int x;
      scanf("%d", &x);
      target[x - 1] = true;
    }

    pq.push(Next(s, 0, false));
    while (!pq.empty()) {
      Next next = pq.top();
      pq.pop();
      int v = next.v;
      int d = next.d;
      int p = next.p;
      if (dist[v] != -1 && dist[v] < d) continue;
      if (dist[v] == d && (passed[v] || !p)) continue;
      dist[v] = d;
      passed[v] = p;
      if (p && target[v]) solution.push_back(v + 1);
      for (i = 0; i < edge[v].size(); i++) {
        Edge e = edge[v][i];
        pq.push(Next(
              e.to,
              dist[v] + e.weight,
              p || (v == g && e.to == h) || (v == h && e.to == g)));
      }
    }

    sort(solution.begin(), solution.end());
    for (i = 0; i < solution.size(); i++)
      printf("%d ", solution[i]);
    printf("\n");
  }
  return 0;
}
