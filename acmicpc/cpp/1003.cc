#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  while(n-- > 0) {
    int k;
    int count_0_pprev, count_1_pprev;
    int count_0_prev = 1, count_1_prev = 0;
    int count_0 = 0, count_1 = 1;

    scanf("%d", &k);
    switch (k) {
      case 0: count_0 = 1; count_1 = 0; break;
      case 1: count_0 = 0; count_1 = 1; break;
      default:
        while (1 < k--) {
          count_0_pprev = count_0_prev;
          count_1_pprev = count_1_prev;
          count_0_prev = count_0;
          count_1_prev = count_1;
          count_0 = count_0_pprev + count_0_prev;
          count_1 = count_1_pprev + count_1_prev;
        }
    }
    printf("%d %d\n", count_0, count_1);
  }
  return 0;
}
