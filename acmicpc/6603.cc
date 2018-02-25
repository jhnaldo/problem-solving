#include <stdio.h>

void display(int arr[], int cur[], int count, int from, int n) {
  if (count == 6) {
    for (int i = 0; i < 6; i++) {
      printf("%d ", cur[i]);
    }
    printf("\n");
  } else {
    for (int i = from; i < n - (6-count-1); i++) {
      cur[count] = arr[i];
      display(arr, cur, count+1, i+1, n);
    }
  }
}

int main() {
  while (true) {
    int n;
    int arr[13], cur[6];
    scanf("%d", &n);
    if (!n) break;
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    display(arr, cur, 0, 0, n);
    printf("\n");
  }
  return 0;
}
