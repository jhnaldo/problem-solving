#include <stdio.h>

int main() {
  int n;
  int arr[100000];
  int sum = 0;
  scanf("%d", &n);
  for (int i = 0, j = 0; i < n; i++) {
    scanf("%d", &arr[j]);
    if (arr[j]) {
      sum += arr[j++];
    } else {
      sum -= arr[--j];
    }
  }
  printf("%d\n", sum);
  return 0;
}
