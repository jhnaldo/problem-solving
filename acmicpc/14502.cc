#include <stdio.h>

int n, m;
int arr[10][10];
int x[1000], y[1000], size;
int map[10][10];

int count(int w1, int w2, int w3) {
  int i, j, k;
  int c = 0;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      map[i][j] = arr[i][j];
    }
  }
  int x1 = w1 / m + 1;
  int y1 = w1 % m + 1;
  int x2 = w2 / m + 1;
  int y2 = w2 % m + 1;
  int x3 = w3 / m + 1;
  int y3 = w3 % m + 1;

  if (map[x1][y1]) return 0;
  if (map[x2][y2]) return 0;
  if (map[x3][y3]) return 0;
  map[x1][y1] = map[x2][y2] = map[x3][y3] = 1;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      if (map[i][j] == 2) {
        x[0] = i;
        y[0] = j;
        size = 1;
        while (size > 0) {
          int p = x[--size];
          int q = y[size];
          map[p][q] = 3;
          if (map[p + 1][q] == 0) { x[size] = p + 1; y[size++] = q; }
          if (map[p - 1][q] == 0) { x[size] = p - 1; y[size++] = q; }
          if (map[p][q + 1] == 0) { x[size] = p; y[size++] = q + 1; }
          if (map[p][q - 1] == 0) { x[size] = p; y[size++] = q - 1; }
        }
      }
    }
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      if (map[i][j] == 0) c++;
    }
  }

  return c;
}

int main() {
  int max = 0;
  int i, j, k;
  scanf("%d %d", &n, &m);
  for (i = 0; i <= n + 1; i++) {
    for (j = 0; j <= m + 1; j++) {
      map[i][j] = 1;
    }
  }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++)
      scanf("%d", &arr[i][j]);
  }

  for (i = 0; i < n * m; i++) {
    for (j = i + 1; j < n * m; j++) {
      for (k = j + 1; k < n * m; k++) {
        int c = count(i, j, k);
        max = (c > max ? c : max);
      }
    }
  }
  printf("%d\n", max);
  return 0;
}
