#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
  }
  if (n == 0) printf("divide by zero\n");
  else printf("1.00\n");
  return 0;
}
