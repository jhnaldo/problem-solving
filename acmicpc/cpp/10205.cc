#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int k = 1; k <= t; k++) {
    int n;
    char action[101];
    scanf("%d %s", &n, action);
    for (int i = 0; action[i]; i++) {
      if (action[i] == 'b') n--;
      else n++;
    }
    printf("Data Set %d:\n", k);
    printf("%d\n\n", n);
  }
  return 0;
}
