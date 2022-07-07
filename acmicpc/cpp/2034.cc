#include <stdio.h>

int main () {
  int pos[7] = { 0, 2, 3, 5, 7, 8, 10 };
  char note[12] = { 0, };
  int n;

  for (int i = 0; i < 7; i++) {
    note[pos[i]] = 'A' + i;
  }

  scanf("%d", &n);

  while (n--) {
    int k;
    scanf("%d", &k);
    k += 24;
    for (int i = 0; i < 7; i++) {
      if (pos[i] >= 0) {
        pos[i] = (pos[i] + k) % 12;
        if (!note[pos[i]]) pos[i] = -1;
      }
    }
  }

  for (int i = 0; i < 7; i++) {
    if (pos[i] >= 0) {
      printf("%c %c\n", 'A' + i, note[pos[i]]);
    }
  }

  return 0;
}
