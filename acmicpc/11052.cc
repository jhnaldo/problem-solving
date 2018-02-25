#include <stdio.h>

int main() {
  int n;
  int max[1001];
  scanf("%d", &n);
  max[0] = 0;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &max[i]);
    for (int j = 1; j*2 <= i; j++) {
      if (max[i] < max[j] + max[i-j])
        max[i] = max[j] + max[i-j];
    }
  }
  printf("%d\n", max[n]);
  return 0;
}
