#include <stdio.h>

int main() {
  int n, m;
  int arr[100];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int k = 1; k <= m; k++) {
    for (int i = 1; i < n; i++) {
      if (arr[i-1]%k > arr[i]%k) {
        int tmp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = tmp;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
