#include <stdio.h>
#include <deque>

using namespace std;

int main() {
  int n, front;
  deque<int> dq;
  int arr[1000000];
  int i, x;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", arr + i);
  }
  for (i = n - 1, x = 1; i >= 0; i--, x++) {
    switch(arr[i]) {
      case 1:
        dq.push_front(x);
        break;
      case 2:
        front = dq.front();
        dq.pop_front();
        dq.push_front(x);
        dq.push_front(front);
        break;
      case 3:
        dq.push_back(x);
        break;
    }
  }
  for (i = 0; i < n; i++) {
    printf("%d ", dq[i]);
  }
  printf("\n");
  return 0;
}
