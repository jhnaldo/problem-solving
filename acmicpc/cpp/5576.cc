#include <stdio.h>
#include <stdlib.h>

int compare(const void* left, const void* right) {
  return *(int*)left - *(int*)right;
}

int main() {
  int warr[10], karr[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &warr[i]);
  }
  qsort(warr, 10, sizeof(int), compare);
  for (int i = 0; i < 10; i++) {
    scanf("%d", &karr[i]);
  }
  qsort(karr, 10, sizeof(int), compare);
  printf("%d %d\n", warr[9] + warr[8] + warr[7], karr[9] + karr[8] + karr[7]);
  return 0;
}
