#include <stdio.h>

void swap(int& x, int &y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int gcd(int a, int b) {
  if (a < b) swap(a, b);
  while (a % b) {
    a %= b;
    swap(a, b);
  }
  return b;
}

int main() {
  int n, k;
  scanf("%d", &n);
  scanf("%d", &k);
  for (int i = 0; i < n-1; i++) {
    int t, g;
    scanf("%d", &t);
    g = gcd(k, t);
    printf("%d/%d\n", k/g, t/g);
  }
  return 0;
}
