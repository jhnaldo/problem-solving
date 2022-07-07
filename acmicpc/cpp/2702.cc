#include <stdio.h>

void swap(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int gcd(int n, int m) {
  if (n < m) swap(n, m);

  while(n%m) {
    n %= m;
    swap(n, m);
  }
  return m;
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, m, g;
    scanf("%d %d", &n, &m);
    g = gcd(n, m);
    printf("%d %d\n", n*m/g, g);
  }
  return 0;
}
