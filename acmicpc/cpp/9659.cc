#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("%s\n", n%4 ? "SK" : "CY");
  return 0;
}
