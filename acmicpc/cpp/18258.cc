#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;

int main() {
  int n;
  queue<int> q;
  scanf("%d", &n);
  while (n--) {
    char cmd[6];
    scanf("%s", cmd);
    if (strcmp(cmd, "push") == 0) {
      int k;
      scanf("%d", &k);
      q.push(k);
    } else if (strcmp(cmd, "pop") == 0) {
      if (q.empty()) printf("-1\n");
      else {
        int k = q.front();
        printf("%d\n", k);
        q.pop();
      }
    } else if (strcmp(cmd, "size") == 0) {
      printf("%lu\n", q.size());
    } else if (strcmp(cmd, "empty") == 0) {
      printf("%d\n", q.empty());
    } else if (strcmp(cmd, "front") == 0) {
      if (q.empty()) printf("-1\n");
      else printf("%d\n", q.front());
    } else if (strcmp(cmd, "back") == 0) {
      if (q.empty()) printf("-1\n");
      else printf("%d\n", q.back());
    }
  }
  return 0;
}
