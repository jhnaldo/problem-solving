#include <stdio.h>

#define SIZE 100000

int N, i, x;
long long dist[SIZE], price[SIZE], sum;

int main() {
  scanf("%d", &N);
  for (i = 0; i < N-1; i++) {
    scanf("%lld", &dist[i]);
  }
  for (i = 0; i < N; i++) {
    scanf("%lld", &price[i]);
  }

  sum = 0;
  x = price[0];

  for (i = 0; i < N-1; i++) {
    if (x > price[i]) x = price[i];
    sum += x * dist[i];
  }

  printf("%lld\n", sum);

  return 0;
}
