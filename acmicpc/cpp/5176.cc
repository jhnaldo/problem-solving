#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m, count = 0;
    bool arr[500] = {0,};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
      int k;
      scanf("%d", &k);
      k--;
      if (arr[k]) {
        count++;
      } else {
        arr[k] = true;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
