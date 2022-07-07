#include <stdio.h>
#include <stack>

using namespace std;

int n;
int arr[1000];
int pr[1000];
int len[1000];
int max_len = 0;
int cur = -1;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int l = 0;
    int p = -1;
    scanf("%d", &arr[i]);
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i] && l < len[j]) {
        l = len[j];
        p = j;
      }
    }
    pr[i] = p;
    len[i] = l + 1;
    if (max_len < len[i]) {
      max_len = len[i];
      cur = i;
    }
  }

  printf("%d\n", max_len);
  stack<int> s;
  while (true) {
    s.push(arr[cur]);
    if (pr[cur] == -1) break;
    cur = pr[cur];
  }
  while (!s.empty()) {
    int v = s.top(); s.pop();
    printf("%d ", v);
  }
  printf("\n");

  return 0;
}
