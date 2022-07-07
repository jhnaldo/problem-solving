#include <stdio.h>

#define ABS(a) ((a)>0?(a):-(a))

int main() {
  int n, q, prev;
  int sum[1000];
  scanf("%d %d", &n, &q);
  scanf("%d", &prev);
  for (int i = 1; i < n; i++) {
    int x;
    scanf("%d", &x);
    sum[i] = sum[i-1] + ABS(prev - x);
    prev = x;
  }
  for (int i = 0; i < q; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", sum[y-1] - sum[x-1]);
  }
  return 0;
}
