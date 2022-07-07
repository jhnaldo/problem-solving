#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
  int arr[301] = {0, };
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= m; j++) {
      int k;
      scanf("%d", &k);
      arr[j] = MAX(arr[j], arr[j-1]) + k;
    }
  }
  printf("%d\n", arr[m]);
  return 0;
}
