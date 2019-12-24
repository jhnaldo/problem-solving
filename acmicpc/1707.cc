#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

struct State {
  int x, c;
  State(int x, int c): x(x), c(c) {}
};

int v, e;
queue<State> q;
vector<int> edges[20000];
int color[20000];
bool res;

void input() {
  res = true;
  scanf("%d %d", &v, &e);
  for (int i = 0; i < v; i++) {
    color[i] = 0;
    edges[i].clear();
  }
  for (int i = 0; i < e; i++) {
    int from, to;
    scanf("%d %d", &from, &to);
    edges[--from].push_back(--to);
    edges[to].push_back(from);
  }
}

void process() {
  for (int i = 0; i < v; i++) {
    if (!res) break;
    if (!color[i]) {
      q.push(State(i, 1));
      while (!q.empty()) {
        State s = q.front();
        q.pop();
        int x = s.x;
        int c = s.c;
        color[x] = c;
        int size = edges[x].size();
        for (int i = 0; i < size; i++) {
          int y = edges[x][i];
          if (color[y] == c) {
            res = false;
            break;
          } else if (!color[y]) {
            q.push(State(y, 3 - c));
          }
        }
      }
    }
  }
}

void output() {
  printf("%s\n", res ? "YES" : "NO");
}

int main() {
  int k;
  scanf("%d\n", &k);
  while (k--) {
    input();
    process();
    output();
  }
  return 0;
}
