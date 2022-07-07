#include <iostream>

using namespace std;

#define SIZE 100
#define BOUND 200

#define MAX(a,b) ((a) > (b)? (a) : (b))

class BigInteger {
public:
  int arr[BOUND];
  int size;

  BigInteger(long long n) {
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

void apply(int count[SIZE], int n, int v) {
  for (int k = 2; n > 1 && k <= SIZE; k++) {
    while (n % k == 0) {
      n /= k;
      count[k] += v;
    }
  }
}

int main() {
  int n, m;
  int count[SIZE + 1] = { 0, };
  BigInteger answer(1);
  cin >> n >> m;

  if (m <= n/2) m = n-m;

  for (int k = m+1; k <= n; k++) apply(count, k, 1);
  for (int k = 2; k <= n-m; k++) apply(count, k, -1);

  for (int k = 2; k <= SIZE; k++) {
    if (count[k]) {
      for (int i = 0; i < count[k]; i++) {
        BigInteger n(k);
        answer = answer * n;
      }
    }
  }
  cout << answer << endl;

  return 0;
}
