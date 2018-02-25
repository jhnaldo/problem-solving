#include <stdio.h>

int main() {
  int a, b, m;
  int n = 0;
  int result[101], size;
  scanf("%d %d %d", &a, &b, &m);
  for (int i = 0; i < m; i++) {
    int k;
    scanf("%d", &k);
    n *= a;
    n += k;
  }
  for (size = 0; n; size++, n /= b) {
    result[size] = n%b;
  }
  for (int i = size-1; i >= 0; i--) {
    printf("%d ", result[i]);
  }
  printf("\n");
  return 0;
}
