#include <stdio.h>

int n;
int map[100][100];
long long count[100][100];

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &map[i][j]);
  }
  count[0][0] = 1;
}

void process() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int d = map[i][j];
      if (!d) continue;
      if (i + d < n) count[i + d][j] += count[i][j];
      if (j + d < n) count[i][j + d] += count[i][j];
    }
  }
}

void output() {
  printf("%lld\n", count[n-1][n-1]);
}

int main() {
  input();
  process();
  output();
  return 0;
}
