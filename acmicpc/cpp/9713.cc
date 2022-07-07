#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int odd, sum = 0;
    scanf("%d", &odd);
    while(odd > 0) {
      sum += odd;
      odd -= 2;
    }
    printf("%d\n", sum);
  }
  return 0;
}
