#include <stdio.h>

int n, m;
int arr[8];

void backtrack(int k, int x) {
  int i;
  if (k == m) {
    for (i = 0; i < m; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  } else {
    for (; x <= n; x++) {
      arr[k] = x;
      backtrack(k + 1, x);
    }
  }
}

int main() {
  scanf("%d %d", &n, &m);
  backtrack(0, 1);
  return 0;
}
