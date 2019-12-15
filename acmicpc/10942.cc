#include <stdio.h>

int main() {
  int n, m;
  int *arr;
  bool **memo;
  int i, j;
  scanf("%d", &n);
  arr = new int[n];
  memo = new bool*[n];
  for (i = 0; i < n; i++) {
    scanf("%d", arr + i);
    memo[i] = new bool[n]();
    memo[i][i] = true;
  }
  for (j = 1; j < n; j++) {
    for (i = j - 1; i >= 0; i--) {
      memo[i][j] = ((i + 1 == j) || memo[i + 1][j - 1]) && (arr[i] == arr[j]);
    }
  }

  scanf("%d", &m);
  for (i = 0; i < m; i++) {
    int s, e;
    scanf("%d %d", &s, &e);
    if (s > e) {
      int t = s;
      s = e;
      e = t;
    }
    printf("%d\n", memo[s - 1][e - 1]);
  }

  for (i = 0; i < n; i++)
    delete[] memo[i];
  delete[] arr;
  delete[] memo;
  return 0;
}
