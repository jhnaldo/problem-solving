#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char name[101];
    scanf("%s", name);
    for (int i = 0; name[i]; i++) {
      if (name[i] >= 'A' && name[i] <= 'Z') {
        name[i] += 'a' - 'A';
      }
    }
    printf("%s\n", name);
  }
  return 0;
}
