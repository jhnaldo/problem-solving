#include <iostream>

using namespace std;

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
  int n;
  int t[15], p[15], max[16];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t[i] >> p[i];
  }

  max[n] = 0;
  for (int i = n-1; i >= 0; i--) {
    if (i + t[i] > n) max[i] = max[i+1];
    else {
      max[i] = MAX(max[i+1], p[i] + max[i+t[i]]);
    }
  }
  cout << max[0] << endl;

  return 0;
}
