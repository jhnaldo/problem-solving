#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    printf("Pairs for %d:", n);
    for (int i = 1; i <= (n-1)/2; i++) {
      printf(" %d %d", i, n-i);
      if (i != (n-1)/2) printf(",");
    }
    printf("\n");
  }
  return 0;
}
