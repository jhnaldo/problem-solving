#include <stdio.h>

#define ABS(a) ((a) < 0 ? -(a) : (a))

int n, m, h;
bool branch[30][9];
int size, res = -1;

bool check() {
  for (int x = 0; x < n; x++) {
    int y = x;
    for (int i = 0; i < h; i++) {
      if (branch[i][y]) y++;
      else if (y && branch[i][y - 1]) y--;
    }
    if (y != x) return false;
  }
  return true;
}

void input() {
  scanf("%d %d %d", &n, &m, &h);
  for (int i = 0; i < m; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    branch[a - 1][b - 1] = true;
  }
  size = (n - 1) * h;
}

bool valid(int x, int y) {
  if (branch[x][y]) return false;
  if (y > 0 && branch[x][y - 1]) return false;
  if (y < n - 1 && branch[x][y + 1]) return false;
  return true;
}

void update(int count) {
  if (res == -1 || count < res) res = count;
}

void search(int from, int count) {
  if (check()) update(count);
  if (count >= 3) return;

  for (int k = from; k < size; k++) {
    int x = k / (n - 1);
    int y = k % (n - 1);
    if (valid(x, y)) {
      branch[x][y] = true;
      search(k + 1, count + 1);
      branch[x][y] = false;
    }
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  search(0, 0);
  output();
}
