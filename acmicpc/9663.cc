#include <stdio.h>

int n;
bool col[15], rt2lb[30], lt2rb[30];

int backtrack(int x) {
  if (x == n) return 1;
  int sum = 0;
  for (int y = 0; y < n; y++) {
    if (!col[y] && !rt2lb[x + y] && !lt2rb[x - y + n - 1]) {
      col[y] = rt2lb[x + y] = lt2rb[x - y + n - 1] = true;
      sum += backtrack(x + 1);
      col[y] = rt2lb[x + y] = lt2rb[x - y + n - 1] = false;
    }
  }
  return sum;
}

int main() {
  scanf("%d", &n);
  printf("%d", backtrack(0));
  return 0;
}
