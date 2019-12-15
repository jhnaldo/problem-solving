#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define SIZE 200000

int n, k;
int arr[SIZE];

bool check(int num) {
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += MIN(n, num / i);
  }
  return sum < k;
}

int binary(int from, int to) {
  if (from >= to) {
    int res = from;
    while (!check(res)) res--;
    return res;
  }
  int mid = (from/2 + to/2);
  if (check(mid)) return binary(mid + 1, to);
  else return binary(from, mid - 1);
}

int main() {
  scanf("%d %d", &n, &k);
  printf("%d\n", binary(1, INT_MAX) + 1);
  return 0;
}
