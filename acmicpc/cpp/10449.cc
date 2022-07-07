#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    bool check = false;
    scanf("%d", &n);
    for (int i = 1, p = 1; p < n; i++, p += i) {
      for (int j = 1, q = 1; q < n-p; j++, q += j) {
        int k, r;
        for (k = 1, r = 1; r < n-p-q; k++, r += k);
        if (r+p+q == n) check = true;
      }
    }
    printf("%d\n", check);
  }
  return 0;
}
