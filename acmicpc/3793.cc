#include <stdio.h>
#include <cstring>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define SIZE 10000

int main() {
  int n, m;
  char left[SIZE + 1], right[SIZE + 1];
  int **arr;
  int i, j;

  while (scanf("%s %s", left, right) == 2) {
    n = strlen(left);
    m = strlen(right);
    arr = new int*[n + 1];
    for (i = 0; i <= n; i++) {
      arr[i] = new int[m + 1]();
    }

    for (i = 1; i <= n; i++) {
      for (j = 1; j <= m; j++) {
        if (left[i-1] == right[j-1]) {
          arr[i][j] = arr[i-1][j-1] + 1;
        } else {
          arr[i][j] = MAX(arr[i-1][j], arr[i][j-1]);
        }
      }
    }


    printf("%d\n", arr[n][m]);

    for (i = 0; i <= n; i++) delete[] arr[i];
    delete[] arr;
  }
  return 0;
}
