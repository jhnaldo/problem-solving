#include <stdio.h>

#define SIZE 50000
#define INF 1e9

int count[SIZE+1];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    count[i] = INF;
    for (int j = 1; j*j <= i; j++) {
      int x = count[i-j*j] + 1;
      if (x < count[i]) count[i] = x;
    }
  }
  printf("%d\n", count[n]);
  return 0;
}
