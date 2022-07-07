#include <stdio.h>

#define SIZE 4000000

bool prime[SIZE+1];
int primes[SIZE+1], psize;
int count[SIZE+1];

void get_prime() {
  for (int i = 2; i <= SIZE; i++) prime[i] = true;
  for (int i = 2; i <= SIZE; i++) {
    if (prime[i]) {
      primes[psize++] = i;
      for (int j = i*2; j <= SIZE; j+=i) {
        prime[j] = false;
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  get_prime();
  for (int i = 0; i < psize; i++) {
    int sum = 0;
    for (int j = i; j < psize; j++) {
      sum += primes[j];
      if (sum > SIZE) break;
      count[sum]++;
    }
  }
  printf("%d\n", count[n]);
  return 0;
}
