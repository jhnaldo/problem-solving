#include <stdio.h>

typedef int (*Op)(int, int);
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int div(int x, int y) { return x / y; }

int n;
int num[12];
int count[4];
int min = 1e9, max = -1e9;
Op op[4] = { add, sub, mul, div };

void backtrack(int res, int k) {
  if (k == n) {
    max = (res > max? res : max);
    min = (res < min? res : min);
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (count[i] > 0) {
      count[i]--;
      backtrack(op[i](res, num[k]), k + 1);
      count[i]++;
    }
  }
}

int main() {
  int i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", num + i);
  for (i = 0; i < 4; i++) scanf("%d", count + i);
  backtrack(num[0], 1);
  printf("%d\n", max);
  printf("%d\n", min);
  return 0;
}
