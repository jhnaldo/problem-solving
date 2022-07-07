#include <stdio.h>

int main() {
  int n, len, size, i;
  char str[101];
  scanf("%d", &n);
  n--;
  for (len = 1, size = 2; size <= n; len++, n-=size, size*=2);
  for (i = len-1; i >= 0; i--) {
    str[i] = (n%2==1?'7':'4');
    n /= 2;
  }
  str[len] = 0;
  printf("%s\n", str);
  return 0;
}
