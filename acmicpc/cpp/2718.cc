#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int pprev[4], prev[4] = {1, 0, 0, 0}, cur[4] = {1, 1, 1, 1};
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
      for (int j = 0; j < 4; j++) {
        pprev[j] = prev[j];
        prev[j] = cur[j];
      }
      cur[1] = prev[0] + prev[3];
      cur[2] = prev[0] + pprev[2];
      cur[3] = prev[0] + prev[1];
      cur[0] = pprev[0] + prev[0] + prev[1] + prev[2] + prev[3];
    }
    printf("%d\n", cur[0]);
  }
  return 0;
}
