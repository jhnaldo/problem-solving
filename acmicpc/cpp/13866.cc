#include <iostream>

using namespace std;

#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << MIN(ABS(a + b - c - d),
      MIN(ABS(a + c - b - d),
        ABS(a + d - b - c))) << endl;
  return 0;
}
