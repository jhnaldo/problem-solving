#include <stdio.h>
#include <algorithm>

using namespace std;

#define N 50

int n;
char map[N][N+1];
int max_len;

void find_max() {
  int v[N][N];
  int h[N][N];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i > 0 && map[i][j] == map[i-1][j]) {
        v[i][j] = v[i-1][j]+1;
      } else {
        v[i][j] = 1;
      }
      if (j > 0 && map[i][j] == map[i][j-1]) {
        h[i][j] = h[i][j-1]+1;
      } else {
        h[i][j] = 1;
      }
      if (max_len < v[i][j]) max_len = v[i][j];
      if (max_len < h[i][j]) max_len = h[i][j];
    }
  }
}

void process(int x, int y, int dx, int dy) {
  swap(map[x][y], map[x+dx][y+dy]);
  find_max();
  swap(map[x][y], map[x+dx][y+dy]);
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", map[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      if (i+1 < n) process(i, j, 1, 0);
      if (j+1 < n) process(i, j, 0, 1);
    }
  }
  printf("%d\n", max_len);
  return 0;
}
