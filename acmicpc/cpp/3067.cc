#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int count[10001] = {0,};
    int kind[20], goal;
    scanf("%d", &n);
    count[0] = 1;
    for (int i = 0; i < n; i++) {
      scanf("%d", &kind[i]);
    }
    scanf("%d", &goal);
    for (int i = 0; i < n; i++) {
      for (int k = kind[i]; k <= goal; k++) {
        count[k] += count[k-kind[i]];
      }
    }
    printf("%d\n", count[goal]);
  }
  return 0;
}
