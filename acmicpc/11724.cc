#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main() {
  int n, m;

  vector<int> edges[1000];
  bool check[1000] = {0, };
  int count = 0;

  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    u--; v--;
    edges[u].push_back(v);
    edges[v].push_back(u);
  }

  for (int i = 0; i < n; i++) {
    if (!check[i]) {
      queue<int> q;
      q.push(i);
      while (!q.empty()) {
        int idx = q.front();
        vector<int>* cur = edges + idx;
        check[idx] = true;
        q.pop();
        for (vector<int>::iterator it = cur->begin(); it != cur->end(); ++it) {
          int idx = *it;
          if (!check[*it]) {
            q.push(idx);
          }
        }
      }
      count++;
    }
  }
  printf("%d\n", count);

  return 0;
}
