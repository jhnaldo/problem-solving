#include <stdio.h>

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
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
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, i, j;
    int arr[100];
    long sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
        sum += gcd(arr[i], arr[j]);
      }
    }
    printf("%ld\n", sum);
  }
  return 0;
}
