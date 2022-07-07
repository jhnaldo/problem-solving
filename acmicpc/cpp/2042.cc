#include <stdio.h>
#include <vector>

using namespace std;

int n, m, k;
vector<vector<long long> > sum;

void input() {
  scanf("%d %d %d", &n, &m, &k);
  sum.push_back(vector<long long>());
  for (int i = 0; i < n; i++) {
    long long x;
    scanf("%lld", &x);
    sum[0].push_back(x);
  }
}

void init() {
  long long size;
  int i, j;
  for (size = n / 2, i = 1; size; size /= 2, i++) {
    sum.push_back(vector<long long>());
    for (j = 0; j < size; j++) {
      long long x = sum[i - 1][2 * j] + sum[i - 1][2 * j + 1];
      sum[i].push_back(x);
    }
  }
}

long long sum_until(
    int until,
    int depth = sum.size() - 1,
    int from = 0,
    int to = (1 << sum.size()) - 1
) {
  if (until < from) return 0;
  int mid = (from + to) / 2;
  if (until < mid) return sum_until(until, depth - 1, from, mid);
  else return sum[depth][from >> depth] + sum_until(until, depth - 1, mid + 1, to);
}

void process() {
  for (int i = 0; i < m + k; i++) {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a == 1) {
      b--;
      long long x = c - sum[0][b];
      int size = n;
      for (int j = 0; b < size; j++, b /= 2, size /= 2)
        sum[j][b] += x;
    } else {
      long long to = sum_until(c - 1);
      long long from = sum_until(b - 2);
      printf("%lld\n", to - from);
    }
  }
}

int main() {
  input(); init(); process(); return 0;
}
