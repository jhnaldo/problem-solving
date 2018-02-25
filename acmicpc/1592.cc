#include <stdio.h>

int main() {
  int n, m, l;
  int arr[1000] = {0, };
  int i, k;
  scanf("%d %d %d", &n, &m, &l);
  arr[0] = 1;
  for (i = 0, k = 0; arr[i] < m; k++) {
    if (arr[i] % 2) {
      i = (i + l) % n;
      arr[i]++;
    } else {
      i = (i + n - l) % n;
      arr[i]++;
    }
  }
  printf("%d\n", k);
  return 0;
}
