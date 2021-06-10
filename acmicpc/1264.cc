#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <cstring>

using namespace std;

#define SIZE 255

char str[SIZE+2];

int main() {
  while (true) {
    fgets(str, SIZE+2, stdin);
    if (str[0] == '#') break;
    int count = 0;
    for (int i = 0; str[i]; i++) {
      switch (str[i]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          count++;
          break;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
