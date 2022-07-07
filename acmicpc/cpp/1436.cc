#include <stdio.h>

bool devil(int k) {
  int count = 0;
  while (k) {
    if (k % 10 == 6) count++;
    else count = 0;
    k /= 10;
    if (count >= 3) return true;
  }
  return false;
}

int main() {
  int n, k = 666;
  scanf("%d", &n);
  while (--n) {
    while (!devil(++k));
  }
  printf("%d\n", k);
  return 0;
}
