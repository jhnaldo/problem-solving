#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int>::iterator vec_iter;

int main() {
  int n, k;
  vector<int> v, lis;
  int i;

  scanf("%d", &n);

  scanf("%d", &k);
  v.push_back(k);
  for (i = 1; i < n; i++) {
    scanf("%d", &k);
    if (v.back() < k) v.push_back(k);
    else {
      vec_iter lower = lower_bound(v.begin(), v.end(), k);
      *lower = k;
    }
  }
  printf("%lu\n", v.size());
  return 0;
}
