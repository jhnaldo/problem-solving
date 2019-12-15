#include <iostream>

using namespace std;

int main() {
  bool stack[100], keep;
  int size;
  char str[101];
  while(true) {
    cin.getline(str, 101);
    if (str[0] == '.') break;

    size = 0;
    keep = true;
    for (int i = 0; keep && str[i]; i++) {
      switch (str[i]) {
        case '(': stack[size++] = true; break;
        case '[': stack[size++] = false; break;
        case ')':
          if (size > 0 && stack[size - 1]) size--;
          else keep = false;
          break;
        case ']':
          if (size > 0 && !stack[size - 1]) size--;
          else keep = false;
          break;
      }
    }
    cout << (keep && size == 0 ? "yes" : "no") << endl;
  }
  return 0;
}
