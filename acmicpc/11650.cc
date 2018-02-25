#include <stdio.h>
#include <stdlib.h>

class Position {
  public:
    int x;
    int y;
};

int compare (const void* left, const void* right) {
  Position* p = (Position*) left;
  Position* q = (Position*) right;
  if (p->x == q->x) return p->y - q->y;
  return p->x - q->x;
}

int main() {
  int n;
  Position arr[100000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    arr[i].x = x;
    arr[i].y = y;
  }
  qsort(arr, n, sizeof(Position), compare);
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", arr[i].x, arr[i].y);
  }
}
