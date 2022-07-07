#include <stdio.h>

int main() {
  int lcount[26] = {}, rcount[26] = {}, count = 0;
  char str[1001];
  int i;
  scanf("%s", str);
  for (i = 0; str[i]; i++) lcount[str[i] - 'a']++;
  scanf("%s", str);
  for (i = 0; str[i]; i++) rcount[str[i] - 'a']++;
  for (i = 0; i < 26; i++) {
    int diff = lcount[i] - rcount[i];
    count += (diff < 0 ? -diff : diff);
  }
  printf("%d\n", count);
  return 0;
}
