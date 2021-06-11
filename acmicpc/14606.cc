#include <stdio.h>

int sum;

int main() {
  int n;
  scanf("%d", &n);
  int arr[11];
  arr[0] = arr[1] = 0;
  for (int i = 2; i <= 10; i++) {
    int x = i/2;
    int y = i - (i/2);
    arr[i] = x * y + arr[x] + arr[y];
  }
  printf("%d\n", arr[n]);
  return 0;
}
