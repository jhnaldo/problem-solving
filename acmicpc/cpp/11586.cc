#include <stdio.h>

int main() {
  int n, kind;
  char arr[100][101];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", arr[i]);
  }
  scanf("%d", &kind);

  switch (kind) {
    case 1:
      for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
      }
      break;
    case 2:
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
          char ch = arr[i][j];
          arr[i][j] = arr[i][n-j-1];
          arr[i][n-j-1] = ch;
        }
        printf("%s\n", arr[i]);
      }
      break;
    case 3:
      for (int i = n - 1; i >= 0; i--) {
        printf("%s\n", arr[i]);
      }
      break;
  }
  return 0;
}
