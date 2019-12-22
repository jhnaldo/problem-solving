#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main() {
  int n, m;

  vector<int> edges[1000];
  bool check[1000] = {0, };
  queue<int> q;
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
      q.push(i);
      check[i] = true;
      while (!q.empty()) {
        int idx = q.front();
        vector<int>* cur = edges + idx;
        q.pop();
        for (vector<int>::iterator it = cur->begin(); it != cur->end(); ++it) {
          int idx = *it;
          if (!check[idx]) {
            check[idx] = true;
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
