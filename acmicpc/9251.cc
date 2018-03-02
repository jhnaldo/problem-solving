#include <stdio.h>
#include <cstring>

#define MAX(a, b) ( (a) > (b) ? (a) : (b) );

int main() {
  char first[1002], second[1002];
  int *prev, *cur;
  int fsize, ssize;
  int i, j;
  scanf("%s %s", first, second);
  fsize = strlen(first);
  ssize = strlen(second);
  prev = new int[ssize + 1]();
  cur = new int[ssize + 1]();
  for (i = 0; i < fsize; i++) {
    int *tmp = prev;
    prev = cur;
    cur = tmp;

    for (j = 0; j < ssize; j++) {
      if (first[i] == second[j]) {
        cur[j + 1] = prev[j] + 1;
      } else {
        cur[j + 1] = MAX(prev[j + 1], cur[j]);
      }
    }
  }

  printf("%d\n", cur[ssize]);

  delete[] prev;
  delete[] cur;
}
