#include <stdio.h>

int main() {
  int n;
  int zero[3], other[3];
  int zero_buf[3], other_buf[3];
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
      other[j] = other_buf[j];
      zero[j] = zero_buf[j];
    }
  }
  printf("%d\n", other[0]);
}
