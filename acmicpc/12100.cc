#include <stdio.h>

int n;
int map[20][20];
int max;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      scanf("%d", &map[i][j]);
  }
}

void left(int m[20][20]) {
  for (int i = 0; i < n; i++) {
    int prev = 0;
    int k = 0;
    for (int j = 0; j < n; j++) {
      if (m[i][j]) {
        if (prev == m[i][j]) {
          max = MAX(m[i][j] * 2, max);
          m[i][k++] = m[i][j] * 2;
          prev = 0;
        } else if (prev) {
          max = MAX(prev, max);
          m[i][k++] = prev;
          prev = m[i][j];
        } else {
          prev = m[i][j];
        }
      }
    }
    if (prev) {
      max = MAX(prev, max);
      m[i][k++] = prev;
    }
    while (k < n) m[i][k++] = 0;
  }
}
void right(int m[20][20]) {
  for (int i = 0; i < n; i++) {
    int prev = 0;
    int k = n - 1;
    for (int j = n - 1; j >= 0; j--) {
      if (m[i][j]) {
        if (prev == m[i][j]) {
          max = MAX(m[i][j] * 2, max);
          m[i][k--] = m[i][j] * 2;
          prev = 0;
        } else if (prev) {
          max = MAX(prev, max);
          m[i][k--] = prev;
          prev = m[i][j];
        } else {
          prev = m[i][j];
        }
      }
    }
    if (prev) {
      max = MAX(prev, max);
      m[i][k--] = prev;
    }
    while (k >= 0) m[i][k--] = 0;
  }
}
void up(int m[20][20]) {
  for (int i = 0; i < n; i++) {
    int prev = 0;
    int k = 0;
    for (int j = 0; j < n; j++) {
      if (m[j][i]) {
        if (prev == m[j][i]) {
          max = MAX(m[j][i] * 2, max);
          m[k++][i] = m[j][i] * 2;
          prev = 0;
        } else if (prev) {
          max = MAX(prev, max);
          m[k++][i] = prev;
          prev = m[j][i];
        } else {
          prev = m[j][i];
        }
      }
    }
    if (prev) {
      max = MAX(prev, max);
      m[k++][i] = prev;
    }
    while (k < n) m[k++][i] = 0;
  }
}
void down(int m[20][20]) {
  for (int i = 0; i < n; i++) {
    int prev = 0;
    int k = n - 1;
    for (int j = n - 1; j >= 0; j--) {
      if (m[j][i]) {
        if (prev == m[j][i]) {
          max = MAX(m[j][i] * 2, max);
          m[k--][i] = m[j][i] * 2;
          prev = 0;
        } else if (prev) {
          max = MAX(prev, max);
          m[k--][i] = prev;
          prev = m[j][i];
        } else {
          prev = m[j][i];
        }
      }
    }
    if (prev) {
      max = MAX(prev, max);
      m[k--][i] = prev;
    }
    while (k >= 0) m[k--][i] = 0;
  }
}

void move(int arr[]) {
  int m[20][20];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      m[i][j] = map[i][j];
  }
  for (int i = 0; i < 5; i++) {
    switch (arr[i]) {
      case 0: left(m); break;
      case 1: right(m); break;
      case 2: up(m); break;
      case 3: down(m); break;
    }
  }
}

void process() {
  for (int i0 = 0; i0 < 4; i0++)
    for (int i1 = 0; i1 < 4; i1++)
      for (int i2 = 0; i2 < 4; i2++)
        for (int i3 = 0; i3 < 4; i3++)
          for (int i4 = 0; i4 < 4; i4++) {
            int arr[5] = { i0, i1, i2, i3, i4 };
            move(arr);
          }
}

void output() {
  printf("%d\n", max);
}

int main() {
  input();
  process();
  output();
  return 0;
}
