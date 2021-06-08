#include <stdio.h>
#include <list>
#include <queue>

using namespace std;

#define SIZE 10000

class Edge {
public:
  int to, weight;
  Edge(int to, int weight): to(to), weight(weight) {}
};

int n, max_dist, X, Y;
list<Edge*> edges[SIZE];
int dist[SIZE];

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n-1; i++) {
    int x, y, w;
    scanf("%d %d %d", &x, &y, &w);
    x--; y--;
    edges[x].push_back(new Edge(y, w));
    edges[y].push_back(new Edge(x, w));
  }

  queue<int> q;
  list<Edge*>::iterator iter;

  for (int i = 0; i < n; i++) dist[i] = -1;
  dist[0] = 0;
  q.push(0);
  max_dist = 0;
  X = 0;
  while(!q.empty()) {
    int cur = q.front();
    int d = dist[cur];
    list<Edge*> list = edges[cur];
    q.pop();
    for (iter = list.begin(); iter != list.end(); iter++) {
      Edge* edge = *iter;
      int to = edge->to;
      int weight = edge->weight;
      if (dist[to] == -1) {
        dist[to] = d + weight;
        q.push(to);
        if (max_dist < dist[to]) {
          max_dist = dist[to];
          X = to;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) dist[i] = -1;
  dist[X] = 0;
  q.push(X);
  max_dist = 0;
  Y = X;
  while(!q.empty()) {
    int cur = q.front();
    int d = dist[cur];
    list<Edge*> list = edges[cur];
    q.pop();
    for (iter = list.begin(); iter != list.end(); iter++) {
      Edge* edge = *iter;
      int to = edge->to;
      int weight = edge->weight;
      if (dist[to] == -1) {
        dist[to] = d + weight;
        q.push(to);
        if (max_dist < dist[to]) {
          max_dist = dist[to];
          Y = to;
        }
      }
    }
  }
  printf("%d\n", max_dist);

  return 0;
}
