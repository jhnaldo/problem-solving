#include <stdio.h>

int main() {
  int n, m, k;
  int year;
  scanf("%d %d %d", &n, &m, &k);
  n--; m--; k--;
  year = n;
  while (year%28 != m || year%19 != k) year += 15;
  printf("%d\n", year+1);
  return 0;
}
