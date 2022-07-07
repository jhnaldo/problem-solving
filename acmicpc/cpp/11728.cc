#include <stdio.h>

#define SIZE 1000000

int n, m;
int a[SIZE], b[SIZE], c[SIZE*2];

int main() {
  int i, j, k;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  for (j = 0; j < m; j++) scanf("%d", &b[j]);
  for (i = 0, j = 0, k = 0; i < n && j < m;) {
    if (a[i] < b[j]) c[k++] = a[i++];
    else c[k++] = b[j++];
  }
  for (; i < n;) c[k++] = a[i++];
  for (; j < m;) c[k++] = b[j++];
  for (int k = 0; k < n+m; k++) {
    printf("%d ", c[k]);
  }
  printf("\n");
  return 0;
}
