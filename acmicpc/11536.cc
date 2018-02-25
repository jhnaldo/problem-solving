#include <stdio.h>
#include <string.h>

int main() {
  int n, order = 0, i;
  bool neither = false;
  char name[20][13];
  scanf("%d", &n);
  scanf("%s", name[0]);
  for (i = 1; i < n; i++) {
    int compare;
    scanf("%s", name[i]);
    if (!neither) {
      compare = strcmp(name[i-1], name[i]);
      compare = (compare < 0? -1: 1);
      if (compare * order < 0) {
        neither = true;
      }
      order = compare;
    }
  }
  if (!neither) {
    printf("%s\n", (order > 0? "DECREASING": "INCREASING"));
  } else printf("NEITHER\n");
  return 0;
}
