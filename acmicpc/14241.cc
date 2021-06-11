#include <stdio.h>
#include <functional>
#include <queue>

using namespace std;

int main() {
  int n;
  priority_queue<int, vector<int>, greater<int> > pq;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    pq.push(x);
  }
  int sum = 0;
  while (pq.size() >= 2) {
    int x = pq.top(); pq.pop();
    int y = pq.top(); pq.pop();
    sum += x*y;
    pq.push(x+y);
  }
  printf("%d\n", sum);
  return 0;
}
