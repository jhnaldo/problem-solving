#include <stdio.h>
#include <cstring>

int main() {
  char str[21];
  scanf("%s", str);
  int size = strlen(str);
  int l, r;
  l = r = 0;
  for (int i = 0; i < size/2; i++) l += (str[i] - '0');
  for (int i = size/2; i < size; i++) r += (str[i] - '0');
  if (l == r) printf("LUCKY\n");
  else printf("READY\n");
  return 0;
}
