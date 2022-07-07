#include <stdio.h>

int main() {
  int n;
  int count = 0;
  int arr[6] = {500, 100, 50, 10, 5, 1};
  scanf("%d", &n);
  n = 1000 - n;
  for (int i = 0; i < 6; i++) {
    count += n/arr[i];
    n %= arr[i];
  }
  printf("%d\n", count);
  return 0;
}
