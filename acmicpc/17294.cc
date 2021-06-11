#include <stdio.h>
#include <string.h>

int main() {
  char str[20];
  scanf("%s", str);
  int i, len = strlen(str);
  for (i = 2; i < len; i++) {
    if (str[i]-str[i-1] != str[i-1]-str[i-2]) break;
  }
  if (i >= len) printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n");
  else printf("흥칫뿡!! <(￣ ﹌ ￣)>\n");
}
