#include <iostream>
#include <string>

using namespace std;

int main() {
  while(true) {
    string str;
    int size, answer = 0;
    bool count[26] = {0,};
    getline(cin, str);
    if (!str.compare("#")) break;
    size = str.length();
    for (int i = 0; i < size; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') count[str[i]-'a'] = true;
      if (str[i] >= 'A' && str[i] <= 'Z') count[str[i]-'A'] = true;
    }
    for (int i = 0; i < 26; i++) {
      if (count[i]) answer++;
    }
    cout << answer << endl;
  }
  return 0;
}
