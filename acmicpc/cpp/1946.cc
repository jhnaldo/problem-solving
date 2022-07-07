#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 100000
#define INF 1e9

vector<pair<int, int> > list;
int arr[SIZE];
int n, result;

bool cmp(const pair<int, int>& l, const pair<int, int>& r) {
  return l.first < r.first;
}

void input() {
  scanf("%d", &n);

  list.clear();

  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    list.push_back(make_pair(x, y));
  }

  sort(list.begin(), list.end(), cmp);

  vector<pair<int, int> >::iterator iter;
  int i;
  for (i = 0, iter = list.begin(); i < n; i++, iter++) {
    arr[i] = iter->second;
  }
}

void process() {
  int min = INF;
  result = 0;
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      result++;
      min = arr[i];
    }
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    input();
    process();
    printf("%d\n", result);
  }
}
