#include <stdio.h>
#include <queue>

using namespace std;

struct Node {
  int id, dist;
  Node(int id, int dist): id(id), dist(dist) {}
};

struct Edge {
  int to, weight;
  Edge(int to, int weight): to(to), weight(weight) {}
};

struct Compare {
  bool operator()(const Node &x, const Node &y) const {
    return x.dist > y.dist;
  }
};

int n, m;
vector<vector<Edge> > edges;
vector<int> dist;
int from, to;

void input() {
  scanf("%d %d", &n, &m);
  edges.resize(n);
  for (int i = 0; i < m; i++) {
    int from, to, weight;
    scanf("%d %d %d", &from, &to, &weight);
    edges[from - 1].push_back(Edge(to - 1, weight));
  }
  scanf("%d %d", &from, &to);
  from--;
  to--;
  dist.resize(n);
  dist[from] = 0;
  for (int i = 0; i < from; i++) dist[i] = -1;
  for (int i = from + 1; i < n; i++) dist[i] = -1;
}

void process() {
  priority_queue<Node, vector<Node>, Compare> pq;
  pq.push(Node(from, 0));
  while (!pq.empty()) {
    Node node = pq.top();
    pq.pop();
    int d = node.dist;
    vector<Edge> &arr = edges[node.id];
    int size = arr.size();
    for (int i = 0; i < size; i++) {
      Edge edge = arr[i];
      int to = edge.to;
      int newD = d + edge.weight;
      if (dist[to] == -1 || newD < dist[to]) {
        dist[to] = newD;
        pq.push(Node(to, newD));
      }
    }
  }
}

void output() {
  printf("%d\n", dist[to]);
}

int main() {
  input();
  process();
  output();
  return 0;
}
