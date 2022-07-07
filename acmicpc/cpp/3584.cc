#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int* arr;
    bool* check;
    int x, y;
    scanf("%d", &n);
    arr = new int[n];
    check = new bool[n]();
    for (int i = 0; i < n; i++) {
      arr[i] = -1;
    }
    for (int i = 0; i < n-1; i++) {
      int parent, child;
      scanf("%d %d", &parent, &child);
      arr[child-1] = parent-1;
    }
    scanf("%d %d", &x, &y);
    x--; y--;
    while (x >= 0) {
      check[x] = true;
      x = arr[x];
    }
    while (!check[y]) y = arr[y];

    printf("%d\n", y + 1);
    delete[] arr;
    delete[] check;
  }
  return 0;
}
