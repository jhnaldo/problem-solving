#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

struct Elem {
  int x, d;
  Elem(int x, int d): x(x), d(d) {}
};

int n, m, size;
vector<int> dist;
queue<Elem> q;
bool ruined[10];

void input() {
  scanf("%d", &n);
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    int x;
    scanf("%d", &x);
    ruined[x] = true;
  }
}

bool valid(int x) {
  if (!x) return !ruined[x];
  while (x) {
    int y = x % 10;
    if (ruined[y]) return false;
    x /= 10;
  }
  return true;
}

void append(int k) {
  int from = 1, until;
  if (k > 6) return;
  for (int i = 1; i < k; i++) from *= 10;
  until = from * 10;
  if (from == 1) from = 0;
  if (until > size) until = size;
  for (int i = from; i < until; i++) {
    if (valid(i)) {
      dist[i] = k;
      q.push(Elem(i, k));
    }
  }
}

void process() {
  int cur = 0;
  size = 2 * n;
  size = (200 > size ? 200 : size);

  dist.resize(size, -1);
  q.push(Elem(100, 0));
  dist[100] = 0;
  while (!q.empty()) {
    Elem elem = q.front();
    q.pop();
    int x = elem.x, d = elem.d;
    if (x == n) return;
    if (cur < d) {
      cur = d;
      append(cur);
    }
    if (x + 1 < size && dist[x + 1] == -1) { dist[x + 1] = d + 1; q.push(Elem(x + 1, d + 1)); }
    if (x - 1 >= 0 && dist[x - 1] == -1) { dist[x - 1] = d + 1; q.push(Elem(x - 1, d + 1)); }
  }
}

void output() {
  printf("%d\n", dist[n]);
}

int main() {
  input();
  process();
  output();
  return 0;
}
