#include <stdio.h>
#include <queue>

using namespace std;

#define MAX 200
#define K_MAX 30

int K, H, W;
int map[MAX][MAX];
int result[MAX][MAX][K_MAX + 1];

void input() {
  int i, j, k;
  scanf("%d %d %d", &K, &W, &H);
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      scanf("%d", &map[i][j]);
      for (k = 0; k <= K; k++)
        result[i][j][k] = -1;
    }
  }
}

class Target {
  public:
    int x;
    int y;
    int k;
    int depth;

    Target(int _x, int _y, int _k, int _depth): x(_x), y(_y), k(_k), depth(_depth) {}
};

void add(queue<Target> &q, int x, int y, int k, int depth) {
  if (x < 0 || x >= H || y < 0 || y >= W || k > K) return;
  if (map[x][y] != 0 || result[x][y][k] != -1) return;
  result[x][y][k] = depth;
  q.push(Target(x, y, k, depth));
}

void process() {
  queue<Target> q;
  result[0][0][0] = 0;
  q.push(Target(0, 0, 0, 0));
  while (!q.empty()) {
    Target t = q.front();
    int x = t.x;
    int y = t.y;
    int k = t.k;
    int depth = t.depth;
    q.pop();

    add(q, x - 2, y - 1, k + 1, depth + 1);
    add(q, x - 1, y - 2, k + 1, depth + 1);
    add(q, x - 2, y + 1, k + 1, depth + 1);
    add(q, x - 1, y + 2, k + 1, depth + 1);
    add(q, x + 2, y - 1, k + 1, depth + 1);
    add(q, x + 1, y - 2, k + 1, depth + 1);
    add(q, x + 2, y + 1, k + 1, depth + 1);
    add(q, x + 1, y + 2, k + 1, depth + 1);
    add(q, x - 1, y, k, depth + 1);
    add(q, x + 1, y, k, depth + 1);
    add(q, x, y - 1, k, depth + 1);
    add(q, x, y + 1, k, depth + 1);
  }
}

void display() {
  int i, j, k;
  for (k = 0; k <= K; k++) {
    printf("- %d\n", k);
    for (i = 0; i < H; i++) {
      for (j = 0; j < W; j++)
        printf("%d ", result[i][j][k]);
      printf("\n");
    }
    printf("\n");
  }
}

void output() {
  int k, min = -1;
  for (k = 0; k <= K; k++) {
    int res = result[H - 1][W - 1][k];
    if (res != -1 && (min == -1 || res < min)) min = res;
  }
  // display();
  printf("%d\n", min);
}

int main() {
  input();
  process();
  output();
  return 0;
}
