#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> arr;
int res;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    arr.push_back(x);
  }
}

void process() {
  sort(arr.begin(), arr.end());
  int size = arr.size();
  for (int i = 0; i < size; i++) {
    int x = arr[i] * (size - i);
    res = (x > res ? x : res);
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
