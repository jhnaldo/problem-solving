#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    int result = 1;
    map<string, int> count;
    string name, kind;
    cin >> n;
    for (i = 0; i < n; i++) {
      cin >> name >> kind;
      count[kind] = count[kind] + 1;
    }
    map<string, int>::iterator it;
    for (it = count.begin(); it != count.end(); ++it) {
      result *= it->second + 1;
    }
    cout << result - 1 << endl;
  }
  return 0;
}
