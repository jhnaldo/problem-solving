#include <stdio.h>

void swap (int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int gcd (int a, int b) {
  if (a < b) swap(a, b);
  while(a % b) {
    a %= b;
    swap(a, b);
  }
  return b;
}

int main() {
  int n, g, k, size = 0;
  int bottom[100000], top[100000];
  scanf("%d", &n);
  scanf("%d", &g);
  for (int i = 1; i < n; i++) {
    scanf("%d", &k);
    g = gcd(g, k);
  }

  for (int i = 1; i*i <= g; i++) {
    if (g % i == 0) {
      bottom[size] = i;
      top[size] = g/i;
      size++;
    }
  }
  for (int i = 0; i < size; i++) {
    printf("%d\n", bottom[i]);
  }
  if (bottom[size-1] != top[size-1])
    printf("%d\n", top[size-1]);
  for (int i = size-2; i >= 0; i--) {
    printf("%d\n", top[i]);
  }

  return 0;
}
