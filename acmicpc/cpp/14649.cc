#include <stdio.h>

int main () {
  int money, n;
  int stone[100] = {0, };
  int count[3] = {0, };
  scanf("%d %d", &money, &n);
  for (int i = 0; i < n; i++) {
    int pos, direction;
    char str[2];
    scanf("%d %s", &pos, str);
    if (str[0] == 'L') direction = -1;
    else direction = 1;

    pos += direction - 1;
    while (pos >= 0 && pos < 100) {
      stone[pos]++;
      pos += direction;
    }
  }

  for (int i = 0; i < 100; i++) {
    count[stone[i] % 3]++;
  }
  printf("%.2lf\n", (double)money / 100 * count[0]);
  printf("%.2lf\n", (double)money / 100 * count[1]);
  printf("%.2lf\n", (double)money / 100 * count[2]);
  return 0;
}
