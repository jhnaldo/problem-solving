#include <stdio.h>

int n, m;
int arr[8];

void backtrack(int k) {
  int i, x;
  if (k == m) {
    for (i = 0; i < m; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  } else {
    for (x = 1; x <= n; x++) {
      arr[k] = x;
      backtrack(k + 1);
    }
  }
}

int main() {
  scanf("%d %d", &n, &m);
  backtrack(0);
  return 0;
}
