#include <stdio.h>

#define SIZE 400
#define MOD 1000000000

struct BigNumber {
  int count[SIZE];
  BigNumber(int n) {
    count[0] = count[1] = 0;
    for (int i = 2; i < SIZE; i++) {
      count[i] = 0;
      while (n % i == 0) {
        count[i]++;
        n /= i;
      }
    }
  }
  void operator *=(const BigNumber &that) {
    for (int i = 0; i < SIZE; i++) {
      count[i] += that.count[i];
    }
  }
  void operator /=(const BigNumber &that) {
    for (int i = 0; i < SIZE; i++) {
      count[i] -= that.count[i];
    }
  }
  long long toLL(long long mod) {
    long long res = 1;
    for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < count[i]; j++) {
        res *= i;
        res %= mod;
      }
    }
    return res;
  }
};

int n, k;
int res;

BigNumber combination(int n, int k) {
  BigNumber res(1);
  if (k > n / 2) k = n - k;
  for (int i = n - k + 1; i <= n; i++)
    res *= BigNumber(i);
  for (int i = 1; i <= k; i++)
    res /= BigNumber(i);
  return res;
}

void input() {
  scanf("%d %d", &n, &k);
}

void process() {
  res = combination(n + k - 1, k - 1).toLL(MOD);
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
