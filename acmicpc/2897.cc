#include <stdio.h>

int main() {
  int n, m, answer[5] = {0, };
  char map[50][51];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", map[i]);
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      int count = 0;
      if (map[i-1][j-1] == '#') count -= 10;
      if (map[i-1][j-1] == 'X') count ++;
      if (map[i-1][j-0] == '#') count -= 10;
      if (map[i-1][j-0] == 'X') count ++;
      if (map[i-0][j-1] == '#') count -= 10;
      if (map[i-0][j-1] == 'X') count ++;
      if (map[i-0][j-0] == '#') count -= 10;
      if (map[i-0][j-0] == 'X') count ++;
      if (count >= 0 && count <= 4) answer[count]++;
    }
  }
  for (int i = 0; i <= 4; i++) {
    printf("%d\n", answer[i]);
  }
  return 0;
}
