#include <stdio.h>
#include <string.h>

int main() {
  char str[5], a, b;
  scanf("%s", str);
  int len = strlen(str);
  if (len == 4) {
    a = b = 10;
  } else if (len == 3) {
    if (str[1] == '0') { a = 10; b = str[2] - '0'; }
    else { a = str[0] - '0'; b = 10; }
  } else { a = str[0] - '0'; b = str[1] -'0'; }
  printf("%d\n", a + b);
  return 0;
}
