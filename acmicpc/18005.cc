#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  switch(n % 4) {
    case 1:
    case 3:
      printf("0\n");
      break;
    case 2:
      printf("1\n");
      break;
    default:
      printf("2\n");
  }
  return 0;
}
