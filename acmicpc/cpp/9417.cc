#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void swap(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int gcd(int x, int y) {
  if (x < y) swap(x, y);
  while (x % y) {
    x %= y;
    swap(x, y);
  }
  return y;
}

int main() {
  int t;
  string str;
  cin >> t;
  getline(cin, str);
  while(t--) {
    int arr[100], size, k, max = 1;
    getline(cin, str);
    istringstream iss(str);
    for (size = 0; iss >> k; size++) {
      arr[size] = k;
    }
    for (int i = 0; i < size; i++) {
      for (int j = i+1; j < size; j++) {
        int g = gcd(arr[i], arr[j]);
        if (max < g) max = g;
      }
    }
    cout << max << endl;
  }
  return 0;
}
