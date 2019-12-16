#include <stdio.h>

void star(int n) {
  while (n--) printf("*");
}

void space(int n) {
  while (n--) printf(" ");
}

void newline() {
  printf("\n");
}

int main() {
  int n, i;
  scanf("%d", &n);
  star(n); space(n * 2 - 3); star(n); newline();
  for (i = 1; i <= n - 2; i++) {
    space(i); star(1); space(n - 2); star(1);
    space((n - i) * 2 - 3);
    star(1); space(n - 2); star(1);
    newline();
  }
  space(n - 1); star(1); space(n - 2); star(1); space(n - 2); star(1); newline();
  for (i = n - 2; i >= 1; i--) {
    space(i); star(1); space(n - 2); star(1);
    space((n - i) * 2 - 3);
    star(1); space(n - 2); star(1);
    newline();
  }
  star(n); space(n * 2 - 3); star(n); newline();
  return 0;
}
