#include <stdio.h>

int main() {
  char str[100001];
  int i, count = 0, res = 0;
  scanf("%s", str);
  for (i = 0; str[i]; i++) {
    if (str[i] == '(') {
      count++;
    } else {
      count--;
      if (str[i - 1] == '(') res += count;
      else res++;
    }
  }
  printf("%d\n", res);
  return 0;
}
