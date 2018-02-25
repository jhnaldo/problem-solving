#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int pos[SIZE], height[SIZE], order[SIZE], stack[SIZE];

int comp(const void* left, const void* right) {
  int lidx = *(int*) left;
  int ridx = *(int*) right;
  return pos[lidx] - pos[ridx];
}

int main() {
  int n, max;
  int ssize = 0;
  int area = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i ++) {
    order[i] = i;
    scanf("%d %d", &pos[i], &height[i]);
  }

  qsort(order, n, sizeof(int), comp);

  max = 0;
  stack[0] = 0;
  ssize = 1;
  for (int i = 1; i < n; i++) {
    for (; max < stack[ssize-1] && height[order[stack[ssize-1]]] < height[order[i]]; ssize--);
    stack[ssize++] = i;
    if (height[order[max]] < height[order[i]]) max = i;
  }

  for (int i = 0; i < ssize; i++) {
    if (stack[i] < max) {
      area += height[order[stack[i]]] * (pos[order[stack[i+1]]] - pos[order[stack[i]]]);
    } else if (stack[i] > max) {
      area += height[order[stack[i]]] * (pos[order[stack[i]]] - pos[order[stack[i-1]]]);
    } else {
      area += height[order[stack[i]]];
    }
  }
  printf("%d\n", area);

  return 0;
}
