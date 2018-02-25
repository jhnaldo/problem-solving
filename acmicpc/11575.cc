#include <stdio.h>

char affine(char ch, int a, int b) {
  int k = ch - 'A';
  return (char) ((k * a + b) % 26 + 'A');
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b;
    char str[1000001];
    scanf("%d %d", &a, &b);
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
      str[i] = affine(str[i], a, b);
    }
    printf("%s\n", str);
  }
  return 0;
}
