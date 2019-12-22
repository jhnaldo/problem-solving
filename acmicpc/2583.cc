#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n, m, k;
bool visited[100][100];
vector<int> res;

void input() {
  scanf("%d %d %d", &m, &n, &k);
  for (int i = 0; i < k; i++) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int x = a; x < c; x++) {
      for (int y = b; y < d; y++)
        visited[x][y] = true;
    }
  }
}

bool check(int x, int y) {
  if (x < 0 || x >= n || y < 0 || y >= m) return false;
  bool c = !visited[x][y];
  visited[x][y] = true;
  return c;
}

void process() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!visited[i][j]) {
        stack<Pos> s;
        s.push(Pos(i, j));
        res.push_back(0);
        visited[i][j] = true;
        int &count = res[res.size() - 1];
        while (!s.empty()) {
          count++;
          Pos pos = s.top();
          int x = pos.x;
          int y = pos.y;
          s.pop();
          if (check(x + 1, y)) s.push(Pos(x + 1, y));
          if (check(x - 1, y)) s.push(Pos(x - 1, y));
          if (check(x, y + 1)) s.push(Pos(x, y + 1));
          if (check(x, y - 1)) s.push(Pos(x, y - 1));
        }
      }
    }
  }
}

void output() {
  int size = res.size();
  sort(res.begin(), res.end());
  printf("%d\n", size);
  for (int i = 0; i < size; i++)
    printf("%d ", res[i]);
  printf("\n");
}

int main() {
  input();
  process();
  output();
  return 0;
}
