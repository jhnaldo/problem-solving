#include <stdio.h>
#include <queue>

using namespace std;

class Interval {
public:
  int from;
  int to;
  Interval(int _from, int _to): from(_from), to(_to) {}
  int middle() { return (from + to) / 2; }
};

int main() {
  int n;
  int size;
  int arr[1024];
  queue<Interval> q;
  scanf("%d", &n);
  size = (1 << n) -1;
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  q.push(Interval(0, size-1));
  while (!q.empty()) {
    Interval itv = q.front();
    int m = itv.middle();
    q.pop();
    printf("%d%c", arr[m], itv.to == size-1? '\n': ' ');
    if (itv.from <= m-1) {
      q.push(Interval(itv.from, m-1));
      q.push(Interval(m+1, itv.to));
    }
  }
  return 0;
}
