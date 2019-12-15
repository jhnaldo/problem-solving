#include <stdio.h>
#include <queue>

#define ABS(x) ((x) < 0 ? -(x) : (x))

using namespace std;

class MyInt {
  public:
    int data;
    MyInt(int _data): data(_data) {}
    bool operator<(const MyInt &that) const {
      if (ABS(data) > ABS(that.data)) return true;
      if (ABS(data) < ABS(that.data)) return false;
      return data > that.data;
    }
};

int main() {
  int n;
  priority_queue<MyInt> pq;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int data;
    scanf("%d", &data);
    if (data) {
      pq.push(MyInt(data));
    } else {
      if (pq.empty()) printf("0\n");
      else {
        printf("%d\n", pq.top().data);
        pq.pop();
      }
    }
  }
  return 0;
}
