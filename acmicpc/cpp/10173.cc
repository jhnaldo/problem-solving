#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  while (true) {
    string sentence;
    getline(cin, sentence);
    if (!sentence.compare("EOI")) break;
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    int size = sentence.length();
    bool found = false;
    for (int i = 0; i < size-3; i++) {
      if (sentence[i+0] == 'n' &&
          sentence[i+1] == 'e' &&
          sentence[i+2] == 'm' &&
          sentence[i+3] == 'o') {
        found = true;
        break;
      }
    }
    cout << (found? "Found": "Missing") << endl;
  }
  return 0;
}
