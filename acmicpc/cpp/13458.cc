#include <stdio.h>
#include <vector>

using namespace std;

int n, b, c;
vector<int> arr;
long long sum;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    arr.push_back(k);
  }
  scanf("%d %d", &b, &c);
}

void process() {
  for (int i = 0; i < n; i++) {
    if (arr[i] <= b) {
      sum++;
      continue;
    }
    int count = (arr[i] - b) / c;
    if (count * c < arr[i] - b) count++;
    count++;
    sum += count;
  }
}

void output() {
  printf("%lld\n", sum);
}

int main() {
  input();
  process();
  output();
  return 0;
}
