#include <stdio.h>

int main() {
  int n, q;
  bool check[10000] = {0, };
  int count = 0;
  scanf("%d %d", &n, &q);
  for (int i = 0; i < q; i++) {
    int start, itv;
    scanf("%d %d", &start, &itv);
    for (start--; start < n; start += itv) {
      if (!check[start]) {
        check[start] = true;
        count++;
      }
    }
  }
  printf("%d\n", n - count);
  return 0;
}
