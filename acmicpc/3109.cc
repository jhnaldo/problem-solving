#include <stdio.h>
#include <stack>

using namespace std;

#define ROW_MAX 10000
#define COL_MAX 500

int R, C;
bool map[ROW_MAX + 2][COL_MAX + 2];

void input() {
  int i, j;
  char str[COL_MAX + 1];
  scanf("%d %d", &R, &C);
  for (i = 1; i <= R; i++) {
    scanf("%s", str);
    for (j = 1; j <= C; j++) {
      map[i][j] = str[j - 1] == 'x';
    }
  }
  for (i = 0; i <= R + 1; i++) map[i][0] = map[i][C + 1] = true;
  for (j = 0; j <= C + 1; j++) map[0][j] = map[R + 1][j] = true;
}

bool dfs(int x, int y) {
  stack<int> xstack;
  stack<int> ystack;

  bool found = false;

  xstack.push(x);
  ystack.push(y);

  while (!xstack.empty()) {
    int x = xstack.top();
    xstack.pop();
    int y = ystack.top();
    ystack.pop();

    if (!map[x][y]) {
      if (y == 1) {
        found = true;
        map[x][y] = true;
        break;
      }
      xstack.push(x + 1);
      ystack.push(y - 1);
      xstack.push(x);
      ystack.push(y - 1);
      xstack.push(x - 1);
      ystack.push(y - 1);
    }
    map[x][y] = true;
  }
  if (!xstack.empty()) {
    xstack.pop();
    ystack.pop();
  }
  return found;
}

int main() {
  int i, j, k;
  int count = 0;

  input();
  for (k = 1; k <= R; k++) {
    if (dfs(k, C)) count++;
    // for (i = 1; i <= R; i++) {
    //   for (j = 1; j <= C; j++)
    //     printf("%d ", map[i][j]);
    //   printf("\n");
    // }
    // printf("\n");
  }
  printf("%d\n", count);
  return 0;
}
