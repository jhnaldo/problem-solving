#include <stdio.h>

int main() {
  int n, m;
  char str[502];
  int type[5] = {0, };
  scanf("%d %d", &n, &m);
  scanf("%s", str);
  for (int i = 0; i < n; i++) {
    int count[100] = {0, };
    for (int j = 0; j < 4; j++) {
      scanf("%s", str);
      for (int k = 0; k < m; k++) {
        if (str[k*5 + 1] == '*') count[k]++;
      }
    }
    scanf("%s", str);
    for (int k = 0; k < m; k++) {
      type[count[k]]++;
    }
  }
  for (int i = 0; i < 5; i++) {
    printf("%d ", type[i]);
  }
  printf("\n");
  return 0;
}
