#include <stdio.h>

int n, m;
int parent[1000], depth[1000];

void assign_depth(int k) {
  if (!k || depth[k]) return;
  assign_depth(parent[k]);
  depth[k] = depth[parent[k]] + 1;
}

int main() {
  int i, j;
  scanf("%d %d", &n, &m);
  for (i = 1; i < n; i++) {
    scanf("%d", parent + i);
    parent[i]--;
  }
  for (i = 1; i < n; i++) {
    assign_depth(i);
  }
  for (i = 0; i < m; i++) {
    int l, r;
    scanf("%d %d", &l, &r);
    l--; r--;
    while (depth[l] > depth[r]) l = parent[l];
    while (depth[l] < depth[r]) r = parent[r];
    while (l != r) {
      l = parent[l];
      r = parent[r];
    }
    printf("%d\n", l + 1);
  }
  return 0;
}
