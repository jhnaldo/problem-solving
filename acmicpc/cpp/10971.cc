#include <stdio.h>

int n;
int map[10][10];
int path[10];
int min = -1;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &map[i][j]);
    path[i] = i;
  }
}

int dist() {
  int sum = 0, e;
  for (int i = 1; i < n; i++) {
    e = map[path[i-1]][path[i]];
    if (!e) return -1;
    sum += e;
  }
  e = map[path[n - 1]][path[0]];
  if (!e) return -1;
  sum += e;
  return sum;
}

void update() {
  int d = dist();
  if (d != -1 && (min == -1 || d < min)) min = d;
}

void swap(int &x, int &y) {
  int t = x; x = y; y = t;
}

void search(int k) {
  if (k == 1) return update();
  for (int i = 0; i < k; i++) {
    search(k - 1);
    if (i < k - 1) swap(path[i * (1 - k % 2)], path[k - 1]);
  }
}

void output() {
  printf("%d\n", min);
}

int main() {
  input();
  search(n);
  output();
  return 0;
}
