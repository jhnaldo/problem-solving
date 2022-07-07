#include <stdio.h>
#include <vector>

using namespace std;
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

int n, m;
vector<Pos> house;
vector<Pos> chicken;
int res = 10000;

void input() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int k;
      scanf("%d", &k);
      switch (k) {
        case 1: house.push_back(Pos(i, j)); break;
        case 2: chicken.push_back(Pos(i, j)); break;
      }
    }
  }
}

int diff(Pos p, Pos q) {
  return ABS(p.x - q.x) + ABS(p.y - q.y);
}

void process(vector<int> &sel, int from, int k) {
  if (k == 0) {
    int sum = 0;
    for (int i = 0; i < house.size(); i++) {
      Pos h = house[i];
      int min = 100;
      for (int j = 0; j < m; j++) {
        Pos c = chicken[sel[j]];
        int d = diff(h, c);
        min = MIN(d, min);
      }
      sum += min;
    }
    res = MIN(sum, res);
    return;
  }
  int size = chicken.size();
  for (int i = from; i <= size - k; i++) {
    sel.push_back(i);
    process(sel, i + 1, k - 1);
    sel.pop_back();
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  vector<int> sel;
  process(sel, 0, m);
  output();
  return 0;
}
