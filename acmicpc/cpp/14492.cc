#include <stdio.h>

int main() {
  int n, count = 0;
  int a[300][300], b[300][300];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      bool test = false;
      for (int k = 0; !test && k < n; k++) {
        test = a[i][k] && b[k][j];
      }
      if (test) count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
