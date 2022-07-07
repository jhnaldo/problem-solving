#include <stdio.h>

int n;
int map[20][20];
int pref[401][4];

int getP(int pref[4], int x, int y) {
  int count = 0;
  for (int i = 0; i < 4; i++) {
    if (x-1 >= 0 && map[x-1][y] == pref[i]) count++;
    if (x+1 < n && map[x+1][y] == pref[i]) count++;
    if (y-1 >= 0 && map[x][y-1] == pref[i]) count++;
    if (y+1 < n && map[x][y+1] == pref[i]) count++;
  }
  return count;
}

int getE(int pref[4], int x, int y) {
  int count = 0;
  if (x-1 >= 0 && map[x-1][y] == 0) count++;
  if (x+1 < n && map[x+1][y] == 0) count++;
  if (y-1 >= 0 && map[x][y-1] == 0) count++;
  if (y+1 < n && map[x][y+1] == 0) count++;
  return count;
}

void insert(int x, int pref[4]) {
  int p, e, a, b;
  p = e = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int newP = getP(pref, i, j);
      int newE = getE(pref, i, j);
      if (map[i][j] == 0 && (p < newP || (p == newP && e < newE))) {
        p = newP;
        e = newE;
        a = i;
        b = j;
      }
    }
  }
  map[a][b] = x;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n*n; i++) {
    int x;
    scanf("%d", &x);
    for (int j = 0; j < 4; j++) {
      scanf("%d", &pref[x][j]);
    }
    insert(x, pref[x]);
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int p = getP(pref[map[i][j]], i, j);
      switch (p) {
        case 1: sum += 1; break;
        case 2: sum += 10; break;
        case 3: sum += 100; break;
        case 4: sum += 1000; break;
      }
    }
  }
  printf("%d\n", sum);
  return 0;
}
