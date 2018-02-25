#include <stdio.h>

char convert(const char ch) {
  if ('a' <= ch && ch <= 'z') {
    return (ch-'a'+13) % 26 + 'a';
  } else if ('A' <= ch && ch <= 'Z') {
    return (ch-'A'+13) % 26 + 'A';
  } else {
    return ch;
  }
}

int main() {
  char str[101];
  int i;
  scanf("%[^\n]", str);
  for (i = 0; str[i]; i++) {
    str[i] = convert(str[i]);
  }
  printf("%s\n", str);
  return 0;
}
