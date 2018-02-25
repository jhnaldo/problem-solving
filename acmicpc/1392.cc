#include <stdio.h>

int main() {
  int n, q;
  int arr[100];
  scanf("%d %d", &n, &q);
  scanf("%d", &arr[0]);
  for (int i = 1; i < n; i++) {
    scanf("%d", &arr[i]);
    arr[i] += arr[i-1];
  }
  for (int i = 0; i < q; i++) {
    int k;
    scanf("%d", &k);
    for (int j = 0; j < n; j++) {
      if (k < arr[j]) {
        printf("%d\n", j + 1);
        break;
      }
    }
  }
  return 0;
}
