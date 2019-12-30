#include <stdio.h>
#include <limits.h>
#include <queue>

using namespace std;

struct Pos {
  int x, y;
  Pos(int x, int y): x(x), y(y) {}
};

struct Elem {
  Pos pos;
  int dist;
  Elem(Pos pos, int dist): pos(pos), dist(dist) {}
  bool operator<(const Elem &that) {
    if (dist < that.dist) return true;
    if (dist > that.dist) return false;
    if (pos.x < that.pos.x) return true;
    if (pos.x > that.pos.x) return false;
    return pos.y < that.pos.y;
  }
};

int n;
int map[20][20];
Pos cur(0, 0);
int total_dist, size = 2, eat_count;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &map[i][j]);
      if (map[i][j] == 9) {
        map[i][j] = 0;
        cur.x = i;
        cur.y = j;
      }
    }
  }
}

bool move() {
  bool visited[20][20] = {};
  queue<Elem> q;
  Elem min_elem = Elem(cur, INT_MAX);
  visited[cur.x][cur.y] = true;
  q.push(Elem(cur, 0));
  while (!q.empty()) {
    Elem elem = q.front();
    q.pop();
    int x = elem.pos.x;
    int y = elem.pos.y;
    int d = elem.dist;
    if (min_elem.dist < d) break;
    if (map[x][y] && map[x][y] < size && elem < min_elem)
      min_elem = elem;
    if (x > 0 && !visited[x - 1][y] && map[x - 1][y] <= size) {
      visited[x - 1][y] = true;
      q.push(Elem(Pos(x - 1, y), d + 1));
    }
    if (x < n - 1 && !visited[x + 1][y] && map[x + 1][y] <= size) {
      visited[x + 1][y] = true;
      q.push(Elem(Pos(x + 1, y), d + 1));
    }
    if (y > 0 && !visited[x][y - 1] && map[x][y - 1] <= size) {
      visited[x][y - 1] = true;
      q.push(Elem(Pos(x, y - 1), d + 1));
    }
    if (y < n - 1 && !visited[x][y + 1] && map[x][y + 1] <= size) {
      visited[x][y + 1] = true;
      q.push(Elem(Pos(x, y + 1), d + 1));
    }
  }
  if (min_elem.dist == INT_MAX) return false;
  total_dist += min_elem.dist;
  cur = min_elem.pos;
  map[cur.x][cur.y] = 0;
  if (++eat_count == size) {
    eat_count = 0;
    size++;
  }
  return true;
}

void output() {
  printf("%d\n", total_dist);
}

int main() {
  input();
  while (move());
  output();
  return 0;
}
