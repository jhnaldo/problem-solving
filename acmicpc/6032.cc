#include <stdio.h>
#include <algorithm>

int n, *joy, *price, *idx;

int compare(const void *x, const void *y) {
  int ix = *(int*)x;
  int iy = *(int*)y;
  double dx = (double)joy[ix] / price[ix];
  double dy = (double)joy[iy] / price[iy];
  if (dx < dy) return 1;
  if (dx > dy) return -1;
  return 0;
}

int main() {
  int i;
  scanf("%d", &n);
  joy = new int[n];
  price = new int[n];
  idx = new int[n];
  for (i = 0; i < n; i++) {
    scanf("%d %d", joy + i, price + i);
    idx[i] = i;
  }

  qsort(idx, n, sizeof(int), compare);

  printf("%d\n", price[idx[0]] + price[idx[1]] + price[idx[2]]);
  printf("%d\n", idx[0] + 1);
  printf("%d\n", idx[1] + 1);
  printf("%d\n", idx[2] + 1);

  delete[] joy;
  delete[] price;
  delete[] idx;
  return 0;
}
