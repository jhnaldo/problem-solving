#include <iostream>

using namespace std;

int main() {
  string str;
  int size;
  int happy, sad;
  getline(cin, str);
  size = str.length();
  happy = sad = 0;
  for (int i = 0; i < size-2; i++) {
    if (str[i+0] == ':' &&
        str[i+1] == '-' &&
        str[i+2] == ')') happy++;
    if (str[i+0] == ':' &&
        str[i+1] == '-' &&
        str[i+2] == '(') sad++;
  }
  cout << (happy > sad? "happy": (sad > happy? "sad": (happy? "unsure": "none"))) << endl;
  return 0;
}
