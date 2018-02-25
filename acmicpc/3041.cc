#include <stdio.h>

#define ABS(a) ((a) < 0? -(a): (a))

int main() {
  char map[4][5];
  int count = 0;
  for (int i = 0; i < 4; i++) {
    scanf("%s", map[i]);
    for (int j = 0; j < 4; j++) {
      if (map[i][j] == '.') continue;
      int pos = map[i][j]-'A';
      int x = pos/4, y = pos%4;
      count += ABS(x-i) + ABS(y-j);
    }
  }
  printf("%d\n", count);
  return 0;
}
