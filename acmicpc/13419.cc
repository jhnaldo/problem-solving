#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    char str[27];
    int size;
    scanf("%s", str);
    size = strlen(str);
    for (int i = 0; i < 2; i++) {
      bool check[26] = {0, };
      for (int j = i % size; !check[j]; j = (j+2) % size) {
        printf("%c", str[j]);
        check[j] = true;
      }
      printf("\n");
    }
  }
  return 0;
}
