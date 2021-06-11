#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

#define MAX 10000

bool comp(string s1, string s2) { return s1 < s2; }
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    string arr[MAX];
    int n, i;
    char number[11];
    bool pass = true;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%s", number);
      arr[i] = number;
    }
    sort(arr, arr + n);
    for (i = 1; i < n; i++) {
      if (arr[i].rfind(arr[i - 1], 0) == 0) pass = false;
    }
    printf("%s\n", pass ? "YES" : "NO");
  }
  return 0;
}
