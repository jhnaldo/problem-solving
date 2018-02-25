#include <stdio.h>

#define MOD 1000000009

int main() {
  int n;
  long long zero[3], other[3];
  long long zero_buf[3], other_buf[3];
  scanf("%d", &n);
  zero[0] = other[1] = other[2] = 1;
  zero[1] = zero[2] = other[0] = 0;
  for (int i = 2; i <= n; i++) {
    for (int j = 0; j < 3; j++) zero_buf[j] = zero[j] + other[j];
    for (int j = 0; j < 3; j++)
      other_buf[j] = other[(j+1)%3] +
                     other[(j+2)%3] +
                     zero[(j+1)%3] +
                     zero[(j+2)%3];
    for (int j = 0; j < 3; j++) {
      other[j] = other_buf[j] % MOD;
      zero[j] = zero_buf[j] % MOD;
    }
  }
  printf("%lld\n", other[0]);
}
