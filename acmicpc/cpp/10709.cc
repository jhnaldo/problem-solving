#include <stdio.h>

int main() {
  char sky[101];
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    int cur = -1;
    scanf("%s", sky);
    for (int j = 0; sky[j]; j++) {
      if (sky[j] == 'c') {
        cur = 0;
      } else if (cur != -1) {
        cur++;
      }
      printf("%d ", cur);
    }
    printf("\n");
  }
  return 0;
}
