#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int n;
int root;
int parent[50];
int in[50];
int count[50];
int total = 0;

int main(){
  scanf("%d", &n);

  queue<int> q;
  for (int i = 0; i < n; i++) {
    scanf("%d", &parent[i]);
    if (parent[i] != -1) {
      in[parent[i]]++;
    }
  }

  int removed;
  scanf("%d", &removed);
  if (parent[removed] != -1 && in[parent[removed]] == 1) {
    total = 1;
  }

  for (int i = 0; i < n; i++) {
    if (in[i] == 0) {
      total++;
      count[i] = 1;
      q.push(i);
    }
  }

  while (!q.empty()) {
    int x = q.front(); q.pop();
    int p = parent[x];
    if (p == -1) continue;
    count[p] += count[x];
    if (--in[p] == 0) {
      q.push(p);
    }
  }

  total -= count[removed];
  printf("%d\n", total);

  return 0;
}
