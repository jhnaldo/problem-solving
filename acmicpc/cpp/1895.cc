#include <stdio.h>

int main() {
  int n, m, t, answer = 0;
  int arr[40][40];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  scanf("%d", &t);
  for (int i = 2; i < n; i++) {
    for (int j = 2; j < m; j++) {
      int count = 0;
      for (int p = 0; p < 3; p++) {
        for (int q = 0; q < 3; q++) {
          if (arr[i-p][j-q] >= t) count++;
        }
      }
      if (count >= 5) answer++;
    }
  }
  printf("%d\n", answer);
  return 0;
}
