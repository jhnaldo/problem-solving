#include <stdio.h>

int n, k;
int max_v[100001];
int w[100], v[100];

int main() {
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++)
    scanf("%d %d", w + i, v + i);

  for (int i = 0; i < n; i++) {
    for (int j = k - w[i]; j >= 0; j--) {
      int cur_max = max_v[j + w[i]];
      int new_max = max_v[j] + v[i];
      max_v[j + w[i]] = new_max > cur_max ? new_max : cur_max;
    }
  }
  printf("%d\n", max_v[k]);
  return 0;
}
