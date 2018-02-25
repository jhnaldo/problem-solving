#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    int arr[1000];
    bool check[1000] = {0,};
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      arr[i]--;
    }
    for (int i = 0; i < n; i++) {
      int cur = i;
      bool flag = false;
      while (!check[cur]) {
        flag = true;
        check[cur] = true;
        cur = arr[cur];
      }
      if (flag) count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
