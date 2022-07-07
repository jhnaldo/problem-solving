#include <stdio.h>

int main() {
  long long a, b;
  a = b = 0;
  for (int i = 0; i < 4; i++) {
    long long score;
    scanf("%lld", &score);
    a += score;
  }
  for (int i = 0; i < 4; i++) {
    long long score;
    scanf("%lld", &score);
    b += score;
  }
  printf("%lld\n", (a > b? a : b));
  return 0;
}
