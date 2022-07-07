#include <stdio.h>
#include <queue>

using namespace std;

#define SIZE 100000

int N, K, i;
int dist[SIZE+1];
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
    for (i = x * 2; 0 < i && i <= SIZE; i *= 2) {
      if (dist[i] == -1) {
        dist[i] = d;
        q.push(i);
      }
    }
    if (dist[x-1] == -1) {
      dist[x-1] = d + 1;
      q.push(x-1);
    }
    if (dist[x+1] == -1) {
      dist[x+1] = d + 1;
      q.push(x+1);
    }
  }

  printf("%d\n", dist[K]);

  return 0;
}
