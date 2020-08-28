#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 100000

int main() {
  int i;
  int n;
  int parent[SIZE];
  vector<int> edge[SIZE];
  queue<int> q;
  scanf("%d", &n);
  for (i = 0; i < n - 1; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    from--; to--;
    edge[from].push_back(to);
    edge[to].push_back(from);
    parent[i] = -1;
  }
  parent[i] = -1;

  parent[0] = 0;
  q.push(0);
  while (!q.empty()) {
    int x = q.front();
    q.pop();

    vector<int> &e = edge[x];
    for (vector<int>::iterator iter = e.begin(); iter != e.end(); iter++) {
      int y = *iter;
      if (parent[y] == -1) {
        parent[y] = x;
        q.push(y);
      }
    }
  }

  for (i = 1; i < n; i++) printf("%d\n", parent[i] + 1);

  return 0;
}
