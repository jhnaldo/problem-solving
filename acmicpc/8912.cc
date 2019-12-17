#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    int arr[1000];
    int i, j, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%d", arr + i);
      for (j = 0; j < i; j++) {
        if (arr[j] <= arr[i])
          count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
