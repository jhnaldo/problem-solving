#include <stdio.h>

#define SIZE 1000000

char str[SIZE+1];

int main() {
  char prev;
  int count = 1;
  scanf("%s", str);
  prev = str[0];
  for (int i = 1; str[i]; i++) {
    if (prev != str[i]) {
      count++;
    }
    prev = str[i];
  }
  printf("%d\n", count/2);
  return 0;
}
