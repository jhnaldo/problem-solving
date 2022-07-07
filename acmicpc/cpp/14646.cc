#include <stdio.h>

int main() {
  int n, count = 0, max = 0;
  bool check[200000] = {0, };
  scanf("%d", &n);
  for (int i = 0; i < 2*n; i++) {
    int k;
    scanf("%d", &k);
    if (check[k]) count--;
    else {
      count++;
      if (count > max) max = count;
      check[k] = true;
    }
  }
  printf("%d\n", max);
  return 0;
}
