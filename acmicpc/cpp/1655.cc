#include <stdio.h>
#include <queue>

using namespace std;

int main() {
  int n;
  int mid;
  priority_queue<int, vector<int>, less<int> > max_heap;
  priority_queue<int, vector<int>, greater<int> > min_heap;
  scanf("%d", &n);
  scanf("%d", &mid);
  printf("%d\n", mid);
  for (int i = 1; i < n; i++) {
    int data;
    scanf("%d", &data);
    if (data < mid) {
      if (max_heap.size() == min_heap.size()) {
        min_heap.push(mid);
        max_heap.push(data);
        mid = max_heap.top();
        max_heap.pop();
      } else {
        max_heap.push(data);
      }
    } else {
      if (max_heap.size() < min_heap.size()) {
        max_heap.push(mid);
        min_heap.push(data);
        mid = min_heap.top();
        min_heap.pop();
      } else {
        min_heap.push(data);
      }
    }
    printf("%d\n", mid);
  }
}
