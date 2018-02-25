#include <stdio.h>

int main()
{
  while (true) {
    char ch = getchar();
    if (ch == EOF) break;
    printf("%c", ch);
  }

  return 0;
}
