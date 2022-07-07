#include <stdio.h>

int n;
int *arr;
int length;

int lower_bound(int from, int to, int k) {
  if (from >= to) return from;
  int mid = (from + to) / 2;
  if (arr[mid] >= k) return lower_bound(from, mid, k);
  else return lower_bound(mid + 1, to, k);
}

int main() {
  scanf("%d", &n);
  arr = new int[n];
  for (int i = 0; i < n; i++) {
    int cur, idx;
    scanf("%d", &cur);
    if (length == 0 || arr[length - 1] < cur) arr[length++] = cur;
    else arr[lower_bound(0, length - 1, cur)] = cur;
  }
  printf("%d\n", length);
  delete[] arr;
  return 0;
}
