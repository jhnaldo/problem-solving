#include <stdio.h>

#define SIZE 19

int map[SIZE + 6][SIZE + 6];

int main() {
  int i, j, answer = 0;
  int x, y;
  for (i = 1; i <= SIZE; i++) {
    for (j = 1; j <= SIZE; j++) {
      scanf("%d", &map[i][j]);
    }
  }
  for (i = 1; answer == 0 && i <= SIZE; i++) {
    for (j = 1; answer == 0 && j <= SIZE; j++) {
      int target = map[i][j];
      if (target == 0) continue;

      if (target != map[i - 1][j] &&
          target == map[i + 1][j] &&
          target == map[i + 2][j] &&
          target == map[i + 3][j] &&
          target == map[i + 4][j] &&
          target != map[i + 5][j]) {
        x = i;
        y = j;
        answer = target;
      }

      if (target != map[i][j - 1] &&
          target == map[i][j + 1] &&
          target == map[i][j + 2] &&
          target == map[i][j + 3] &&
          target == map[i][j + 4] &&
          target != map[i][j + 5]) {
        x = i;
        y = j;
        answer = target;
      }

      if (target != map[i + 1][j - 1] &&
          target == map[i - 1][j + 1] &&
          target == map[i - 2][j + 2] &&
          target == map[i - 3][j + 3] &&
          target == map[i - 4][j + 4] &&
          target != map[i - 5][j + 5]) {
        x = i;
        y = j;
        answer = target;
      }

      if (target != map[i - 1][j - 1] &&
          target == map[i + 1][j + 1] &&
          target == map[i + 2][j + 2] &&
          target == map[i + 3][j + 3] &&
          target == map[i + 4][j + 4] &&
          target != map[i + 5][j + 5]) {
        x = i;
        y = j;
        answer = target;
      }
    }
  }
  printf("%d\n", answer);
  if (answer) printf("%d %d\n", x, y);
  return 0;
}
