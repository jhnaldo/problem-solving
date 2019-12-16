#include <stdio.h>

char upper(char ch) {
  if ('a' <= ch && ch <= 'z') return ch - ('a' - 'A');
  return ch;
}

char lower(char ch) {
  if ('A' <= ch && ch <= 'Z') return ch + ('a' - 'A');
  return ch;
}

int main() {
  int s[100], e[100], kind, size;
  char str[101];
  int i, j;
  scanf("%d %s", &kind, str);
  size = 0;
  s[0] = 0;
  for (i = 1; str[i]; i++) {
    switch(kind) {
      case 1:
      case 3:
        if ('A' <= str[i] && str[i] <= 'Z') {
          e[size++] = i - 1;
          s[size] = i;
        }
        break;
      case 2:
        if (str[i] == '_') {
          e[size++] = i - 1;
          s[size] = ++i;
        }
        break;
    }
  }
  e[size++] = i - 1;
  for (i = 0; i < size; i++) {
    for (j = s[i]; j <= e[i]; j++) {
      if (j == 0) printf("%c", lower(str[j]));
      else if (j == s[i]) printf("%c", upper(str[j]));
      else printf("%c", str[j]);
    }
  }
  printf("\n");
  for (i = 0; i < size; i++) {
    for (j = s[i]; j <= e[i]; j++) {
      if (j == 0) printf("%c", lower(str[j]));
      else if (j == s[i]) printf("_%c", lower(str[j]));
      else printf("%c", str[j]);
    }
  }
  printf("\n");
  for (i = 0; i < size; i++) {
    for (j = s[i]; j <= e[i]; j++) {
      if (j == s[i]) printf("%c", upper(str[j]));
      else printf("%c", str[j]);
    }
  }
  printf("\n");
  return 0;
}
