#include <stdio.h>
#include <stdlib.h>
#include <functional>
#include <queue>

using namespace std;

#define SIZE 300000

int N, K, i, j;
long long M[SIZE], V[SIZE], C[SIZE];
int order[SIZE];

int compare(const void* left, const void* right) {
  int lidx = *(int*)left;
  int ridx = *(int*)right;
  if (M[lidx] > M[ridx]) return 1;
  if (M[lidx] < M[ridx]) return -1;
  return 0;
}

int ccompare(const void* left, const void* right) {
  long long l = *(long long*)left;
  long long r = *(long long*)right;
  if (l > r) return 1;
  if (l < r) return -1;
  return 0;
}

int main() {
  scanf("%d %d", &N, &K);
  for (i = 0; i < N; i++) {
    scanf("%lld %lld", &M[i], &V[i]);
    order[i] = i;
  }
  for (i = 0; i < K; i++) {
    scanf("%lld", &C[i]);
  }

  qsort(order, N, sizeof(int), compare);
  qsort(C, K, sizeof(long long), ccompare);

  long long sum = 0;
  priority_queue<long long, vector<long long>, less<long long> > pq;
  for (i = 0, j = 0; i < K; i++) {
    while (j < N && M[order[j]] <= C[i]) {
      pq.push(V[order[j]]);
      j++;
    }
    if (!pq.empty()) {
      long long max = pq.top();
      pq.pop();
      sum += max;
    }
  }
  printf("%lld\n", sum);

  return 0;
}
