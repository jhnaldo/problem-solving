#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while(n--) {
    int k;
    char str[2];
    scanf("%d %s", &k, str);
    while (k--) printf("%s", str);
    printf("\n");
  }
  return 0;
}
