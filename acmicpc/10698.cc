#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int a, b, c;
    char op[2];
    bool check;
    scanf("%d %s %d = %d", &a, op, &b, &c);
    if (op[0] == '+') {
      check = a + b == c;
    } else {
      check = a - b == c;
    }
    printf("Case %d: %s\n", i+1, check? "YES": "NO");
  }
  return 0;
}
