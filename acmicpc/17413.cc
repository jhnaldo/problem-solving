#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <cstring>

using namespace std;

#define SIZE 100000

char str[SIZE+1];
char temp[SIZE+1];

void space(int& i) {
  if (str[i] == ' ' || str[i] == '\n') {
    printf("%c", str[i++]);
  } else if (str[i] == '<') {
    while (str[i] != '>') {
      printf("%c", str[i++]);
    }
    printf("%c", str[i++]);
  }
}

void word(int& i) {
  int j = 0;
  while (('a' <= str[i] && str[i] <= 'z') || ('0' <= str[i] && str[i] <= '9')) {
    temp[j++] = str[i++];
  }
  for (int k = 0; k < j/2; k++) {
    swap(temp[k], temp[j-k-1]);
  }
  temp[j] = 0;
  printf("%s", temp);
}

int main() {
  int i = 0;
  fgets(str, SIZE+1, stdin);
  while (str[i]) {
    space(i);
    word(i);
  }
  space(i);
  return 0;
}
