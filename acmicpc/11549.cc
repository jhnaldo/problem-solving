#include <stdio.h>

int main() {
  int answer, n;
  int count = 0, i;
  scanf("%d", &answer);
  for (i = 0; i < 5; i++) {
    scanf("%d", &n);
    if (answer == n) count++;
  }
  printf("%d\n", count);
  return 0;
}
