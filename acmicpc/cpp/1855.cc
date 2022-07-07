#include <stdio.h>
#include <string.h>

int main() {
  int n, size;
  char str[201];
  scanf("%d", &n);
  scanf("%s", str);
  size = strlen(str)/n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < size; j++) {
      if (j%2) {
        printf("%c", str[j*n + (n-i-1)]);
      } else {
        printf("%c", str[j*n + i]);
      }
    }
  }
  printf("\n");
  return 0;
}
