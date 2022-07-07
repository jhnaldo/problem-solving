#include <stdio.h>

#define SIZE 4000

int n, m;
int bulb[SIZE];

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &bulb[i]);
  }
  for (int i = 0; i < m; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    switch (x) {
      case 1:
        bulb[y-1] = z;
        break;
      case 2:
        for (y--; y < z; y++) bulb[y] = 1 - bulb[y];
        break;
      case 3:
        for (y--; y < z; y++) bulb[y] = 0;
        break;
      case 4:
        for (y--; y < z; y++) bulb[y] = 1;
        break;
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", bulb[i]);
  }
  printf("\n");
  return 0;
}
