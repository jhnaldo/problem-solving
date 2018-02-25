#include <stdio.h>

#define T(x) ((x)+1) * (x) / 2;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, sum = 0;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++) {
      sum += k * T(k+1);
    }
    printf("%d\n", sum);
  }
  return 0;
}
