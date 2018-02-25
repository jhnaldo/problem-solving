#include <stdio.h>
#include <cstring>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    int max = 0, k;
    char name[21], tmp[21];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%s %d", tmp, &k);
      if (max < k) {
        max = k;
        strcpy(name, tmp);
      }
    }
    printf("%s\n", name);
  }
  return 0;
}
