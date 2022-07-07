#include <stdio.h>
#include <vector>

using namespace std;

#define MAX 1000000

bool check[MAX + 1];
vector<int> cases;

void init() {
  check[0] = check[1] = true;
  for (int i = 2; i <= MAX; i++) {
    if (!check[i]) {
      for (int j = i * 2; j <= MAX; j += i)
        check[j] = true;
    }
  }
}

void input() {
  int t;
  scanf("%d", &t);
  while (t) {
    cases.push_back(t);
    scanf("%d", &t);
  }
}

void process() {
  int size = cases.size();
  for (int i = 0; i < size; i++) {
    int t = cases[i];
    int j;
    for (j = 2; check[j] || check[t - j]; j++);
    printf("%d = %d + %d\n", t, j, t - j);
  }
}

int main() {
  init();
  input();
  process();
  return 0;
}
