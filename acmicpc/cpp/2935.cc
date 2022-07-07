#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

char left[101], op[2], right[101];

void zeros(int k) {
  for (int i = 0; i < k; i++) {
    printf("0");
  }
}

int main() {
  scanf("%s", left);
  scanf("%s", op);
  scanf("%s", right);
  int l = strlen(left) - 1;
  int r = strlen(right) - 1;
  if (l > r) swap(l, r);
  if (op[0] == '+') {
    if (l == r) {
      printf("2");
      zeros(l);
    } else {
      printf("1");
      zeros(r-l-1);
      printf("1");
      zeros(l);
    }
  } else {
    printf("1");
    zeros(l+r);
  }
  printf("\n");
  return 0;
}
