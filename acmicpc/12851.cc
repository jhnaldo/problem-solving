#include <stdio.h>
#include <queue>

using namespace std;

#define SIZE 100000

int N, K, i;
int dist[SIZE+1], count[SIZE+1];
queue<int> q;

void update(int x, int c, int d) {
  if (x < 0 || x > SIZE) return;
  if (dist[x] == -1) {
    dist[x] = d;
    count[x] = c;
    q.push(x);
  } else if (dist[x] == d) {
    count[x] += c;
  }
}

int main() {
  scanf("%d %d", &N, &K);
  for (i = 0; i <= SIZE; i++) {
    dist[i] = -1;
  }
  dist[N] = 0;
  count[N] = 1;
  q.push(N);

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    int d = dist[x];
    int c = count[x];

    update(x*2, c, d + 1);
    update(x-1, c, d + 1);
    update(x+1, c, d + 1);
  }

  printf("%d\n", dist[K]);
  printf("%d\n", count[K]);

  return 0;
}
