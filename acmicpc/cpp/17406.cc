#include <stdio.h>

#define MAX 50
#define K_MAX 6

int A[MAX][MAX];
int idx[K_MAX];
int r[K_MAX], c[K_MAX], s[K_MAX];
int cur[MAX][MAX];
int N, M, K;
int min = -1;

void input() {
  int i, j;
  scanf("%d %d %d", &N, &M, &K);
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for (i = 0; i < K; i++) {
    idx[i] = i;
    scanf("%d %d %d", &r[i], &c[i], &s[i]);
    r[i]--; c[i]--;
  }
}

void copy() {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++)
      cur[i][j] = A[i][j];
  }
}

void display() {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%d ", cur[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void rotate(int r, int c, int s) {
  // printf("%d %d %d\n", r, c, s);
  for (; s > 0; s--) {
    int i = r - s + 1, j = c - s;
    int tmp = cur[r - s][c - s];
    for (; i <= r + s; i++) cur[i - 1][j] = cur[i][j];
    for (i--, j++; j <= c + s; j++) cur[i][j - 1] = cur[i][j];
    for (j--, i--; i >= r - s; i--) cur[i + 1][j] = cur[i][j];
    for (i++, j--; j >= c - s; j--) cur[i][j + 1] = cur[i][j];
    cur[r - s][c - s + 1] = tmp;
  }
  // display();
}

void swap(int &x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int getMin() {
  int i, j, min;
  for (i = 0; i < N; i++) {
    int sum = 0;
    for (j = 0; j < M; j++)
      sum += cur[i][j];
    if (i == 0 || sum < min) min = sum;
  }
  return min;
}

void check() {
  int i, j;
  int cur_min;

  copy();
  for (i = 0; i < K; i++) {
    rotate(r[idx[i]], c[idx[i]], s[idx[i]]);
  }
  cur_min = getMin();
  // printf("%d\n", cur_min);
  // display();

  if (min == -1 || cur_min < min) min = cur_min;
}

void heap_permutation(int k) {
  if (k == 1) {
    check();
    return;
  }

  int i;
  heap_permutation(k - 1);
  for (i = 0; i < k - 1; i++) {
    if (k % 2 == 0) swap(idx[i], idx[k - 1]);
    else swap(idx[0], idx[k - 1]);
    heap_permutation(k - 1);
  }
}

int main() {
  input();
  heap_permutation(K);
  printf("%d\n", min);
  return 0;
}
