#include <stdio.h>
#include <stdlib.h>

int cmp(const void* left, const void* right) {
  return *(int*)left - *(int*)right;
}

int n, m;
int arr[8];
bool visited[8];
int result[8];

void recursion(int k) {
  if (m == k) {
    for (int i = 0; i < m; i++) {
      printf("%d ", result[i]);
    }
    printf("\n");
    return;
  }
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      visited[i] = true;
      result[k] = arr[i];
      recursion(k+1);
      visited[i] = false;
    }
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  qsort(arr, n, sizeof(int), cmp);
  recursion(0);
  return 0;
}
