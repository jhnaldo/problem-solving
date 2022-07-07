#include <stdio.h>
#include <list>

using namespace std;

list<char> l;
typedef list<char>::iterator Iter;

Iter cur;

void input() {
  char str[100001];
  scanf("%s", str);
  for (int i = 0; str[i]; i++)
    l.push_back(str[i]);
}

void process() {
  int n;
  char str[2];
  char &ch = str[0];
  cur = l.end();
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", str);
    switch (ch) {
      case 'L':
        if (cur != l.begin()) cur--;
        break;
      case 'D':
        if (cur != l.end()) cur++;
        break;
      case 'B':
        if (cur != l.begin()) {
          Iter prev = cur;
          l.erase(--prev);
        }
        break;
      case 'P':
        scanf("%s", str);
        l.insert(cur, ch);
        break;
    }
  }
}

void output() {
  Iter iter;
  for (iter = l.begin(); iter != l.end(); iter++)
    printf("%c", *iter);
  printf("\n");
}

int main() {
  input();
  process();
  output();
  return 0;
}
