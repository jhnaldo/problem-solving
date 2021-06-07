#include <stdio.h>
#include <cstring>

int M;
int set = 0;
int all = (1 << 20) - 1;

int main() {
  scanf("%d", &M);
  while(M--) {
    char str[10];
    int k;
    scanf("%s %d", str, &k);
    k--;
    if (strcmp(str, "add") == 0) {
      set |= 1 << k;
    } else if (strcmp(str, "remove") == 0) {
      set &= all - (1 << k);
    } else if (strcmp(str, "check") == 0) {
      printf("%d\n", (set & (1 << k)) != 0);
    } else if (strcmp(str, "toggle") == 0) {
      set ^= 1 << k;
    } else if (strcmp(str, "all") == 0) {
      set = all;
    } else if (strcmp(str, "empty") == 0) {
      set = 0;
    }
  }
  return 0;
}
