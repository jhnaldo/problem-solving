#include <stdio.h>

int count[12];
int sum;

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    int s, y;
    scanf("%d %d", &s, &y);
    count[s*6 + y - 1]++;
  }
  for (int i = 0; i < 12; i++) {
    sum += count[i] / k;
    if (count[i] % k > 0) sum++;
  }
  printf("%d\n", sum);
  return 0;
}
