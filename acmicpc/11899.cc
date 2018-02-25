#include <stdio.h>

int main() {
  int cur = 0, wrong = 0;
  char str[51];
  scanf("%s", str);
  for (int i = 0; str[i]; i++) {
    if (str[i] == '(') cur++;
    else if (cur == 0) wrong++;
    else cur--;
  }
  printf("%d\n", cur + wrong);
  return 0;
}
