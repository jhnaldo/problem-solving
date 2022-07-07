#include <stdio.h>

int main() {
  char str[1000001];
  int i;
  scanf("%s", str);
  for (i = 0; str[i]; i++)
    str[i] -= 'a' - 'A';
  printf("%s\n", str);
  return 0;
}
