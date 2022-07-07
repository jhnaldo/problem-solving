#include <stdio.h>
#include <list>

using namespace std;

#define SIZE 1000000

int n, i;
char str[SIZE+1];

int main() {
  scanf("%d", &n);
  while(n--) {
    scanf("%s", str);
    list<char> l;
    list<char>::iterator iter = l.begin();
    for (i = 0; str[i]; i++) {
      char ch = str[i];
      switch (ch) {
        case '<':
          if (iter != l.begin()) {
            iter--;
          }
          break;
        case '>':
          if (iter != l.end()) {
            iter++;
          }
          break;
        case '-':
          if (iter != l.begin()) {
            l.erase(prev(iter));
          }
          break;
          break;
        default:
          l.insert(iter, ch);
          break;
      }
    }
    for (iter = l.begin(); iter != l.end(); iter++) {
      char ch = *iter;
      printf("%c", ch);
    }
    printf("\n");
  }
}
