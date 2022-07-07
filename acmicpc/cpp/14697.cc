#include <stdio.h>
#include <queue>

#define SIZE 300

using namespace std;

int a, b, c, n;
bool possible[SIZE + 1];

int main() {
  scanf("%d %d %d %d", &a, &b, &c, &n);
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int x = q.front(); q.pop();
    if (x+a <= n && !possible[x+a]) { possible[x+a] = true; q.push(x+a); }
    if (x+b <= n && !possible[x+b]) { possible[x+b] = true; q.push(x+b); }
    if (x+c <= n && !possible[x+c]) { possible[x+c] = true; q.push(x+c); }
  }
  printf("%d\n", possible[n]);
  return 0;
}
