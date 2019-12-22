#include <stdio.h>
#include <stack>

using namespace std;

struct Pos {
  int x, y, set, depth;
  Pos(int x, int y, int set, int depth): x(x), y(y), set(set), depth(depth) {}
};

int r, c;
char map[20][21];
int res = 0;

void input() {
  scanf("%d %d", &r, &c);
  for (int i = 0; i < r; i++)
    scanf("%s", map[i]);
}

bool possible(int x, int y, int set) {
  if (x < 0 || x >= r || y < 0 || y >= c) return false;
  char ch = map[x][y];
  int index = 1 << (ch - 'A');
  return !(set & index);
}

void process() {
  stack<Pos> st;
  st.push(Pos(0, 0, 1 << (map[0][0] - 'A'), 1));
  while (!st.empty()) {
    Pos pos = st.top();
    st.pop();
    int x = pos.x; int y = pos.y; int set = pos.set; int depth = pos.depth;
    res = (depth > res ? depth : res);
    if (possible(x - 1, y, set)) st.push(Pos(x - 1, y, set | (1 << (map[x - 1][y] - 'A')), depth + 1));
    if (possible(x + 1, y, set)) st.push(Pos(x + 1, y, set | (1 << (map[x + 1][y] - 'A')), depth + 1));
    if (possible(x, y - 1, set)) st.push(Pos(x, y - 1, set | (1 << (map[x][y - 1] - 'A')), depth + 1));
    if (possible(x, y + 1, set)) st.push(Pos(x, y + 1, set | (1 << (map[x][y + 1] - 'A')), depth + 1));
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
