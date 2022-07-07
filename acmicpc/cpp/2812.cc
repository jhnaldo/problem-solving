#include <stdio.h>

#define SIZE 500000

int N, K, i, j;
char str[SIZE+1], result[SIZE+1];

int main() {
  scanf("%d %d", &N, &K);
  scanf("%s", str);
  for (i = 0, j = 0; i < N; i++) {
    while (K > 0 && j > 0 && result[j-1] < str[i]) {
      j--; K--;
    }
    result[j++] = str[i];
  }
  while (K > 0 && j > 0) {
    j--; K--;
  }
  result[j] = 0;
  printf("%s\n", result);
  return 0;
}
