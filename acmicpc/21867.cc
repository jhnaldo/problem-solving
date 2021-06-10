#include <stdio.h>

#define SIZE 200000

char str[SIZE+1], res[SIZE+1];

int main() {
  int n;
  int i, j;
  scanf("%d", &n);
  scanf("%s", str);
  for (i = 0, j = 0; str[i]; i++) {
    if (str[i] == 'J') continue;
    if (str[i] == 'A') continue;
    if (str[i] == 'V') continue;
    res[j++] = str[i];
  }
  res[j] = 0;
  if (j == 0) printf("nojava\n");
  else printf("%s\n", res);
  return 0;
}
