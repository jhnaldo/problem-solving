#include <stdio.h>

#define MAX 1000000

int main() {
  int n;
  int *arr = new int[MAX];
  int *res = new int[MAX];
  int *stack = new int[MAX];
  int size = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);
  for (int i = n - 1; i >= 0; i--) {
    while (size > 0 && stack[size-1] <= arr[i]) size--;
    if (size == 0) res[i] = -1;
    else res[i] = stack[size-1];
    stack[size++] = arr[i];
  }
  for (int i = 0; i < n; i++)
    printf("%d ", res[i]);
  printf("\n");
  return 0;
}
