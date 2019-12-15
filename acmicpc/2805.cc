#include <stdio.h>
#include <limits.h>

#define SIZE 1000000

int n, m;
int arr[SIZE];

bool check(int height) {
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > height)
      sum += arr[i] - height;
  }
  return sum >= m;
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
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);
  printf("%d\n", binary(1, INT_MAX));
  return 0;
}
