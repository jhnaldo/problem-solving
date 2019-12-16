#include <stdio.h>

int main() {
  int n = 3;
  char str[9], before;
  int i, count, max;
  while(n--) {
    scanf("%s", str);
    before = '0';
    count = 0;
    max = 0;
    for (i = 0; i <= 8; i++) {
      if (before == str[i]) {
        count++;
      } else {
        max = (count > max ? count : max);
        before = str[i];
        count = 1;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}
