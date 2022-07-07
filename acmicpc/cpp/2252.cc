#include <stdio.h>
#include <queue>

using namespace std;

int n, m;
int in[32000];
vector<int> edges[32000];
queue<int> nodes;

void input() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    edges[--from].push_back(--to);
    in[to]++;
  }
  for (int i = 0; i < n; i++) {
    if (in[i] == 0) nodes.push(i);
  }
}

void output() {
  while (!nodes.empty()) {
    int x = nodes.front();
    nodes.pop();
    printf("%d\n", x + 1);
    int size = edges[x].size();
    for (int i = 0; i < size; i++) {
      if (--in[edges[x][i]] == 0) nodes.push(edges[x][i]);
    }
  }
}

int main() {
  input();
  output();
  return 0;
}
