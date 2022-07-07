#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int n;
int start[MAX], end[MAX], idx[MAX];

int compare(const void *x, const void *y) {
  if (end[*(int*)x] > end[*(int*)y]) return 1;
  else if (end[*(int*)x] < end[*(int*)y]) return -1;
  else return start[*(int*)x] - start[*(int*)y];
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", start + i, end + i);
    idx[i] = i;
  }

  qsort(idx, n, sizeof(int), compare);

  int avail, count;
  avail = count = 0;
  for (int i = 0; i < n; i++) {
    if (avail <= start[idx[i]]) {
      count++;
      avail = end[idx[i]];
    }
  }
  printf("%d\n", count);

  return 0;
}
