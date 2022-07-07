#include <iostream>

using namespace std;

#define BOUND 1000
#define MAX(a,b) ((a) > (b)? (a) : (b))

class BigInteger {
public:
  int arr[BOUND];
  int size;

  BigInteger(long long n = 0) {
    int i;
    for (i = 0; n; i++) {
      arr[i] = n % 10;
      n /= 10;
    }
    size = i;
    for (; i < BOUND; i++) {
      arr[i] = 0;
    }
  }

  void normalize() {
    for (int i = 0; i < size || arr[size]; i++) {
      arr[i+1] += arr[i] / 10;
      arr[i] %= 10;
      if (i >= size) size++;
    }
  }

  BigInteger operator+ (const BigInteger& other) {
    BigInteger n(0);
    n.size = MAX(size, other.size);
    for (int i = 0; i < n.size; i++) {
      n.arr[i] = arr[i] + other.arr[i];
    }
    n.normalize();
    return n;
  }

  BigInteger operator* (const BigInteger& other) {
    BigInteger n(0);
    for (int i = 0; i < size; i++) {
      BigInteger k(0);
      for (int j = 0; j < other.size; j++) {
        k.arr[i+j] = other.arr[j] * arr[i];
      }
      k.size = i + other.size;
      n = n + k;
    }
    return n;
  }

  friend ostream& operator<<(ostream& os, const BigInteger& n);
};

ostream& operator<< (ostream& out, const BigInteger& n) {
  for (int i = n.size-1; i >= 0; i--) out << n.arr[i];
  return out;
}

int main() {
  BigInteger answer[36];
  int n;
  answer[0] = BigInteger(1);
  cin >> n;
  for (int i = 1; i <= n; i++) {
    answer[i] = BigInteger(0);
    for (int j = 0; j < i; j++) {
      answer[i] = answer[i] + (answer[j] * answer[i-1-j]);
    }
  }
  cout << answer[n] << endl;
  return 0;
}
