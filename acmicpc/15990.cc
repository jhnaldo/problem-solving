#include <stdio.h>

#define SIZE 100000

int memo[SIZE+1][4];

int add(int x, int y) {
  return (x + y) % 1000000009;
}

void preprocess() {
  memo[1][0] = memo[1][1] = 1;
  memo[2][0] = memo[2][2] = 1;
  memo[3][0] = 3; memo[3][1] = memo[3][2] = memo[3][3] = 1;
  for (int i = 4; i <= SIZE; i++) {
    memo[i][1] = add(memo[i-1][2], memo[i-1][3]);
    memo[i][2] = add(memo[i-2][1], memo[i-2][3]);
    memo[i][3] = add(memo[i-3][1], memo[i-3][2]);
    memo[i][0] = add(add(memo[i][1], memo[i][2]), memo[i][3]);
  }
}

int main() {
  preprocess();
  int t;
  scanf("%d", &t);
  while (t--) {
    int x;
    scanf("%d", &x);
    printf("%d\n", memo[x][0]);
  }
  return 0;
}
