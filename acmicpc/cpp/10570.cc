#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    int count[1001] = {0, };
    int max = 0, answer = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      int k;
      scanf("%d", &k);
      count[k]++;
      if (count[k] > max || (count[k] == max && k < answer)) {
        max = count[k];
        answer = k;
      }
    }
    printf("%d\n", answer);
  }
  return 0;
}
