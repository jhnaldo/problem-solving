#include <stdio.h>

int main() {
  int n, m, arr[100], max;
  int i, j, k;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
    scanf("%d", arr + i);

  max = 0;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      for (k = j + 1; k < n; k++) {
        int sum = arr[i] + arr[j] + arr[k];
        if (max < sum && sum <= m)
          max = sum;
      }
    }
  }
  printf("%d\n", max);
}
