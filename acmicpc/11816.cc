#include <stdio.h>
#include <cstring>

int main() {
  char n[21];
  int len;
  scanf("%s", n);
  len = strlen(n);
  if (len >= 2 && n[1] == 'x') {
    int answer = 0;
    for (int i = 2; i < len; i++) {
      answer *= 16;
      answer += n[i] > '9'? n[i] - 'a' + 10 : n[i] - '0';
    }
    printf("%d\n", answer);
  } else if (n[0] == '0') {
    int answer = 0;
    for (int i = 1; i < len; i++) {
      answer *= 8;
      answer += n[i] - '0';
    }
    printf("%d\n", answer);
  } else {
    printf("%s\n", n);
  }
  return 0;
}
