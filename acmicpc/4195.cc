#include <stdio.h>
#include <map>
#include <string>

using namespace std;

#define SIZE 200000

int getId(map<string, int>& m, int group[], int rank[], int size[], string& str) {
  map<string, int>::iterator iter = m.find(str);
  if (iter == m.end()) {
    int newId = m.size();
    m.insert(make_pair(str, newId));
    group[newId] = newId;
    rank[newId] = 1;
    size[newId] = 1;
    return newId;
  } else {
    return iter->second;
  }
}

int find(int group[], int x) {
  if (x == group[x]) return x;
  return group[x] = find(group, group[x]);
}

int set_union(int group[], int rank[], int size[], int x, int y) {
  x = find(group, x); y = find(group, y);
  if (x == y) return size[x];
  if (rank[x] < rank[y]) swap(x, y);
  group[y] = x;
  if (rank[x] == rank[y]) rank[x] += 1;
  size[x] += size[y];
  return size[x];
}

void step() {
  int f;
  map<string, int> m;
  int group[SIZE], rank[SIZE], size[SIZE];
  scanf("%d", &f);

  while (f--) {
    char from[21], to[21];
    scanf("%s %s", from, to);
    string from_str = from;
    string to_str = to;
    int x = getId(m, group, rank, size, from_str);
    int y = getId(m, group, rank, size, to_str);
    int r = set_union(group, rank, size, x, y);
    printf("%d\n", r);
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) step();
  return 0;
}
