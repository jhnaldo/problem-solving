#include <stdio.h>

void swap(int &x, int &y) {
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

int main () {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m, x, y;
    int g, answer = -1;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    g = gcd(n, m);

    for (int i = 0; i < m/g; i++) {
      int k = i * n + x;

      if ((k % m == 0 && y == m) || (k % m == y)) {
        answer = k;
        break;
      }
    }
    printf("%d\n", answer);
  }

  return 0;
}
