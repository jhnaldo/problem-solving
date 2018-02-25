#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  while (n--) {
    char str[11];
    scanf("%s", str);
    for (int i = 0; i < m/2; i++) {
      char ch = str[i];
      str[i] = str[m-i-1];
      str[m-i-1] = ch;
    }
    printf("%s\n", str);
  }
}
