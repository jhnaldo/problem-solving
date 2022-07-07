#include <stdio.h>

#define MOD 1000000007

int n;

long long matrix[8][8] = {
  { 0, 1, 1, 0, 0, 0, 0, 0 },
  { 1, 0, 1, 1, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1, 0, 0, 0 },
  { 0, 1, 1, 0, 1, 1, 0, 0 },
  { 0, 0, 1, 1, 0, 1, 0, 1 },
  { 0, 0, 0, 1, 1, 0, 1, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 1 },
  { 0, 0, 0, 0, 1, 0, 1, 0 },
};

long long res[8][8] = {
  { 1, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 1, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 1, 0, 0, 0, 0, 0 },
  { 0, 0, 0, 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 1, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 1, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 1 },
};

void mult(long long l[8][8], long long r[8][8], long long m[8][8]) {
  long long temp[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      temp[i][j] = 0;
    }
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      for (int k = 0; k < 8; k++) {
        temp[i][j] += l[i][k] * r[k][j];
        temp[i][j] %= MOD;
      }
    }
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = temp[i][j];
    }
  }
}

int main() {
  scanf("%d", &n);
  while (n > 0) {
    if (n % 2 == 1) mult(res, matrix, res);
    mult(matrix, matrix, matrix);
    n /= 2;
  }
  printf("%lld\n", res[0][0]);
  return 0;
}
