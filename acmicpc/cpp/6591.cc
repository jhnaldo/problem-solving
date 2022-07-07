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

int main() {
  while (true) {
    int n, k;
    int* arr;
    int i, j, result;
    scanf("%d %d", &n, &k);
    if (n == 0 && k == 0) break;
    if (k > n - k) k = n - k;
    arr = new int[k];
    for (i = 0; i < k; i++) {
      arr[i] = n - i;
    }
    for (i = 2; i <= k; i++) {
      int cur = i;
      for (j = 0; j < k; j++) {
        int g = gcd(arr[j], cur);
        arr[j] /= g;
        cur /= g;
      }
    }
    result = 1;
    for (i = 0; i < k; i++) {
      result *= arr[i];
    }
    printf("%d\n", result);
  }
  return 0;
}
