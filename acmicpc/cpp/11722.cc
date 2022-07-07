#include <stdio.h>

int main() {
  int n;
  int arr[1000];
  int max_len[1000], max = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    max_len[i] = 1;
    for (int j = 0; j < i; j++) {
      if (arr[i] < arr[j] && max_len[i] < max_len[j] + 1) {
        max_len[i] = max_len[j] + 1;
      }
    }
    if (max < max_len[i]) max = max_len[i];
  }
  printf("%d\n", max);
  return 0;
}
