#include <stdio.h>

int main() {
  while (true) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x == 0 && y == 0 && z == 0) break;
    else if (x + y <= z || x + z <= y || y + z <= x) printf("Invalid\n");
    else if (x == y && y == z && x == z) printf("Equilateral\n");
    else if (x == y || y == z || x == z) printf("Isosceles\n");
    else printf("Scalene\n");
  }
  return 0;
}
