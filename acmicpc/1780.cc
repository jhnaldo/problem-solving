#include <stdio.h>

int main() {
  int n;
  int** arr;
  int count[3] = {0, 0, 0};
  scanf("%d", &n);
  arr = new int*[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
      arr[i][j]++;
      count[arr[i][j]]++;
    }
  }
  for (int size = 1; size < n; size *= 3) {
    for (int i = 0; i < n; i += size * 3) {
      for (int j = 0; j < n; j += size * 3) {
        for (int found = 0; found < 3; found++) {
          bool check = true;
          for (int p = 0; p < 3; p++) {
            for (int q = 0; q < 3; q++) {
              if (found != arr[i+p*size][j+q*size]) {
                check = false;
              }
            }
          }
          if (check) {
            count[found] -= 8;
            break;
          }
          if (found == 2) {
            arr[i][j] = -1;
          }
        }
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("%d\n", count[i]);
  }
  return 0;
}
