#include <stdio.h>
#include <math.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)sqrt(n));
  }
  return 0;
}
