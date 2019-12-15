#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 200000

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

int n, c;
int arr[SIZE];

bool check(int dist) {
  int prev = arr[0];
  int count = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] - prev >= dist) {
      prev = arr[i];
      count++;
    }
  }
  return count >= c;
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
  scanf("%d %d", &n, &c);
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);
  qsort(arr, n, sizeof(int), compare);
  printf("%d\n", binary(1, INT_MAX));
  return 0;
}
