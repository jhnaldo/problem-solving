#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int from, to;
  int n, m;
  int dist[1000];
  vector<int> edge[1000];
  queue<int> q;
  scanf("%d %d %d %d", &from, &to, &n, &m);
  from--; to--;

  for (int i = 0; i < m; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    from--; to--;
    edge[from].push_back(to);
    edge[to].push_back(from);
  }

  for (int i = 0; i < n; i++) dist[i] = -1;
  dist[from] = 0;
  q.push(from);
  while (dist[to] == -1 && !q.empty()) {
    int idx = q.front();
    q.pop();
    vector<int>* cur = &edge[idx];
    for (vector<int>::iterator it = cur->begin(); it != cur->end(); ++it) {
      int next = *it;
      if (dist[next] == -1) {
        dist[next] = dist[idx] + 1;
        q.push(next);
      }
    }
  }
  printf("%d\n", dist[to]);
  return 0;
}
