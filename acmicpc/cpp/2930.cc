#include <stdio.h>

int score(char x, char y) {
  if ((x == 'S' && y == 'P') ||
      (x == 'R' && y == 'S') ||
      (x == 'P' && y == 'R')) return 2;
  if (x == y) return 1;
  return 0;
}

int main() {
  int n, m;
  char x[51];
  char y[50][51];
  char z[4] = "RSP";
  int i, j, k, sum;
  scanf("%d", &n);
  scanf("%s", x);
  scanf("%d", &m);
  for (i = 0; i < m; i++) {
    scanf("%s", y[i]);
  }

  sum = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += score(x[i], y[j][i]);
    }
  }
  printf("%d\n", sum);

  sum = 0;
  for (i = 0; i < n; i++) {
    int max = 0;
    for (k = 0; k < 3; k++) {
      int s = 0;
      x[i] = z[k];
      for (j = 0; j < m; j++) {
        s += score(x[i], y[j][i]);
      }
      max = (s > max ? s : max);
    }
    sum += max;
  }
  printf("%d\n", sum);
  return 0;
}
