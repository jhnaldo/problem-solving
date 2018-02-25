#include <stdio.h>

void repeat(char ch, int k) {
  while (k--) printf("%c", ch);
}

void newline() {
  printf("\n");
}

int main() {
  int n, m, x, y;
  scanf("%d %d", &n, &m);
  scanf("%d %d", &x, &y);
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < x; k++) {
      for (int j = 0; j < m; j++) {
        repeat((i + j) % 2? '.': 'X', y);
      }
      newline();
    }
  }
  return 0;
}
