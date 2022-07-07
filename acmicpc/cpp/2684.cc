#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char trial[41];
    int cur = 0;
    int count[8] = {0, };
    scanf("%s", trial);
    cur = (trial[0] == 'H') * 2 + (trial[1] == 'H');
    for (int i = 2; trial[i]; i++) {
      cur = cur % 4 * 2 + (trial[i] == 'H');
      count[cur]++;
    }
    for (int i = 0; i < 8; i++) {
      printf("%d ", count[i]);
    }
    printf("\n");
  }
  return 0;
}
