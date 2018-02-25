#include <stdio.h>

int main() {
  int n, size = 0;
  char str[21];
  scanf("%d", &n);
  while (n) {
    str[size++] = n % 9 + '0';
    n /= 9;
  }
  for (int i = 0; i < size/2; i++) {
    char tmp = str[i];
    str[i] = str[size-i-1];
    str[size-i-1] = tmp;
  }
  str[size] = '\0';
  printf("%s\n", str);
  return 0;
}
