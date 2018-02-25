#include <stdio.h>

#define MIN(a, b) ((a) < (b)? (a) : (b))
#define MAX(a, b) ((a) > (b)? (a) : (b))

int main() {
  int n;
  int min[3] = { 0, };
  int max[3] = { 0, };
  int tmp[3];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    tmp[0] = MIN(min[0], min[1]) + a;
    tmp[1] = MIN(MIN(min[0], min[1]), min[2]) + b;
    tmp[2] = MIN(min[1], min[2]) + c;
    min[0] = tmp[0];
    min[1] = tmp[1];
    min[2] = tmp[2];
    tmp[0] = MAX(max[0], max[1]) + a;
    tmp[1] = MAX(MAX(max[0], max[1]), max[2]) + b;
    tmp[2] = MAX(max[1], max[2]) + c;
    max[0] = tmp[0];
    max[1] = tmp[1];
    max[2] = tmp[2];
  }
  printf("%d %d\n", MAX(MAX(max[0], max[1]), max[2]), MIN(MIN(min[0], min[1]), min[2]));
  return 0;
}
