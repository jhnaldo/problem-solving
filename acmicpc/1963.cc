#include <stdio.h>
#include <queue>

using namespace std;

#define SIZE 10000

bool prime[SIZE];
int dist[SIZE];

void get_prime() {
  for (int i = 2; i <= SIZE; i++) prime[i] = true;
  for (int i = 2; i <= SIZE; i++) {
    if (prime[i]) {
      for (int j = i*2; j <= SIZE; j+=i) {
        prime[j] = false;
      }
    }
  }
}

void check(queue<int>& q, int i, int cur, int m) {
  int next = (cur / (m*10) * (m*10)) + (cur % m) + (i * m);
  if (prime[next] && dist[next] == -1) {
    dist[next] = dist[cur] + 1;
    q.push(next);
  }
}

int main() {
  int t;
  scanf("%d", &t);
  get_prime();
  while (t--) {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 1000; i <= 9999; i++) dist[i] = -1;
    queue<int> q;
    dist[x] = 0;
    q.push(x);
    while (!q.empty()) {
      int cur = q.front(); q.pop();
      for (int i = 0; i <= 9; i++) {
        if (i != 0) check(q, i, cur, 1000);
        check(q, i, cur, 100);
        check(q, i, cur, 10);
        check(q, i, cur, 1);
      }
    }
    if (dist[y] == -1) printf("Impossible\n");
    else printf("%d\n", dist[y]);
  }
  return 0;
}
