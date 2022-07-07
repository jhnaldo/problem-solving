#include <stdio.h>

int main() {
  int n, m;
  int k[1000];
  int i, j, sum = 0;
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++)
    scanf("%d", &k[i]);
  for (i = 1; i <= n; i++) {
    bool check = false;
    for (j = 0; j < m; j++) {
      if (i % k[j] == 0) {
        check = true;
        break;
      }
    }
    if (check) sum += i;
  }
  printf("%d\n", sum);
  return 0;
}
