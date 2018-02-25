#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
  int n, m;
  int arr[1001] = {0, }, tmp[1001];
  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    tmp[0] = 0;
    for (int j = 1; j <= m; j++) {
      scanf("%d", &tmp[j]);
      tmp[j] += MAX(MAX(arr[j], arr[j-1]), tmp[j-1]);
    }
    for (int j = 1; j <= m; j++) {
      arr[j] = tmp[j];
    }
  }

  printf("%d\n", arr[m]);
  return 0;
}
