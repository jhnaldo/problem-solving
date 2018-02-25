#include <stdio.h>

int main() {
  int n, goal;
  int coin[10], result = 0;
  scanf("%d %d", &n, &goal);
  for (int i = 0; i < n; i++) {
    scanf("%d", &coin[i]);
  }
  for (int i = n-1; i >= 0; i--) {
    result += goal / coin[i];
    goal %= coin[i];
  }
  printf("%d\n", result);
  return 0;
}
