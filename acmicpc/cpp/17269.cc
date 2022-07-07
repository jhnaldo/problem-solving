#include <stdio.h>

int main() {
  char left[101], right[101];
  int arr[200];
  int count[26] = {
    3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3,
    2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1
  };
  int n, m, i, j;
  scanf("%d %d", &n, &m);
  scanf("%s %s", left, right);
  for (i = 0, j = 0; left[i] || right[i]; i++) {
    if (left[i]) arr[j++] = count[left[i] - 'A'];
    if (right[i]) arr[j++] = count[right[i] - 'A'];
  }
  for (i = n + m; i > 2; i--) {
    for (j = 0; j < i - 1; j++) {
      arr[j] = (arr[j] + arr[j + 1]) % 10;
    }
  }
  printf("%d%%\n", arr[0] * 10 + arr[1]);
  return 0;
}
