#include <stdio.h>

#define SIZE 10000

int main() {
  int t;
  bool prime[SIZE+1] = { 0, };

  for (int i = 2; i <= SIZE; i++) {
    prime[i] = true;
  }

  for (int i = 2; i <= SIZE; i++) {
    if (prime[i]) {
      for (int j = 2*i; j <= SIZE; j += i) {
        prime[j] = false;
      }
    }
  }

  scanf("%d", &t);
  while(t--) {
    int n, answer;
    scanf("%d", &n);
    for (int i = 0; i <= n/2; i++) {
      if (prime[i] && prime[n-i]) answer = i;
    }
    printf("%d %d\n", answer, n - answer);
  }
  return 0;
}
