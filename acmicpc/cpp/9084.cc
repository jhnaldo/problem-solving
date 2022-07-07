#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int coin[20], goal;
    int count[10001] = {0, };
    count[0] = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &coin[i]);
    }
    scanf("%d", &goal);
    for (int i = 0; i < n; i++) {
      for (int j = coin[i]; j <= goal; j++) {
        count[j] += count[j-coin[i]];
      }
    }
    printf("%d\n", count[goal]);
  }
  return 0;
}
