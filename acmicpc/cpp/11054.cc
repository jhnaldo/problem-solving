#include <stdio.h>

int main() {
  int n;
  int arr[1000], inc[1000], dec[1000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", arr + i);
  }
  for (int i = 0; i < n; i++) {
    int max = 0;
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i])
        max = (inc[j] > max ? inc[j] : max);
    }
    inc[i] = max + 1;
  }
  for (int i = n - 1; i >= 0; i--) {
    int max = 0;
    for (int j = n - 1; j > i; j--) {
      if (arr[i] > arr[j])
        max = (dec[j] > max ? dec[j] : max);
    }
    dec[i] = max + 1;
  }
  int max = 0;
  for (int i = 0; i < n; i++) {
    int len = inc[i] + dec[i] - 1;
    max = (len > max ? len : max);
  }
  printf("%d\n", max);
  return 0;
}
