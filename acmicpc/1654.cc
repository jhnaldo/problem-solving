#include <stdio.h>
#include <limits.h>

#define MAX 1000000
#define SIZE 10000

int k, n;
int arr[SIZE];

bool check(int len) {
  int count = 0;
  for (int i = 0; i < k; i++)
    count += arr[i] / len;
  return count >= n;
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
  scanf("%d %d", &k, &n);
  for (int i = 0; i < k; i++)
    scanf("%d", arr + i);
  printf("%d\n", binary(1, INT_MAX));
  return 0;
}
