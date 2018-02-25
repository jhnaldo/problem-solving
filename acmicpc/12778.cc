#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    char kind[2];
    scanf("%d %s", &n, kind);
    if (kind[0] == 'C') {
      for (int i = 0; i < n; i++) {
        char ch[2];
        scanf("%s", ch);
        printf("%d ", ch[0]-'A'+1);
      }
      printf("\n");
    } else {
      for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        printf("%c ", k-1+'A');
      }
      printf("\n");
    }
  }
  return 0;
}
