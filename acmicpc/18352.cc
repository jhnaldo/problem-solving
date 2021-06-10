#include <stdio.h>
#include <queue>
#include <list>

#define SIZE 300000

using namespace std;

int n, m, k, x;
int dist[SIZE];
list<int> edges[SIZE];
list<int> result;

bool comp(const int& l, int& r) {
  return l < r;
}

int main() {
  scanf("%d %d %d %d", &n, &m, &k, &x);
  x--;
  for (int i = 0; i < m; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    from--; to--;
    edges[from].push_back(to);
  }

  for (int i = 0; i < n; i++) {
    dist[i] = -1;
  }

  int count = 0;
  queue<int> q;
  dist[x] = 0;
  q.push(x);
  while(!q.empty()) {
    int cur = q.front();
    q.pop();
    if (dist[cur] == k) {
      result.push_back(cur+1);
    }
    list<int>::iterator iter;
    for (iter = edges[cur].begin(); iter != edges[cur].end(); iter++) {
      int next = *iter;
      if (dist[next] == -1) {
        dist[next] = dist[cur] + 1;
        q.push(next);
      }
    }
  }
  if (result.size() == 0) printf("-1\n");
  result.sort(comp);

  list<int>::iterator iter;
  for (iter = result.begin(); iter != result.end(); iter++) {
    int r = *iter;
    printf("%d\n", r);
  }

  return 0;
}
