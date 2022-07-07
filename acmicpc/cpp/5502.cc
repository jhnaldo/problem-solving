#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main() {
  int n;
  char *str;
  int **arr;
  int i, j;

  scanf("%d", &n);
  str = new char[n + 1];
  arr = new int*[n + 1];
  for (i = 0; i <= n; i++) {
    arr[i] = new int[n + 1]();
  }
  scanf("%s", str);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (str[i-1] == str[n-j]) {
        arr[i][j] = arr[i-1][j-1] + 1;
      } else {
        arr[i][j] = MAX(arr[i-1][j], arr[i][j-1]);
      }
    }
  }

  printf("%d\n", n - arr[n][n]);

  delete[] str;
  for (i = 0; i <= n; i++) delete[] arr[i];
  delete[] arr;
  return 0;
}
