#include <stdio.h>
#include <queue>
#include <stack>

using namespace std;

#define SIZE 100000

int N, K, i;
int dist[SIZE+1];
int back[SIZE+1];
queue<int> q;

int main() {
  scanf("%d %d", &N, &K);
  for (i = 0; i <= SIZE; i++) {
    dist[i] = -1;
  }
  dist[N] = 0;
  q.push(N);

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    int d = dist[x];
    if (x*2 <= SIZE && dist[x*2] == -1) {
      back[x*2] = x;
      dist[x*2] = d + 1;
      q.push(x*2);
    }
    if (x-1 >= 0 && dist[x-1] == -1) {
      back[x-1] = x;
      dist[x-1] = d + 1;
      q.push(x-1);
    }
    if (x+1 <= SIZE && dist[x+1] == -1) {
      back[x+1] = x;
      dist[x+1] = d + 1;
      q.push(x+1);
    }
  }

  stack<int> s;
  printf("%d\n", dist[K]);
  for (i = K; i != N; i = back[i]) {
    s.push(i);
  }
  printf("%d", N);
  while (!s.empty()) {
    printf(" %d", s.top());
    s.pop();
  }
  printf("\n");

  return 0;
}
