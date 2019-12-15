#include <stdio.h>

void print_hanoi(int n, int from, int to, int space) {
  if (n == 0) return;
  print_hanoi(n - 1, from, space, to);
  printf("%d %d\n", from, to);
  print_hanoi(n - 1, space, to, from);
}

int count_hanoi(int n, int from, int to, int space) {
  if (n == 0) return 0;
  int count = 0;
  count += count_hanoi(n - 1, from, space, to);
  count++;
  count += count_hanoi(n - 1, space, to, from);
  return count;
}

int main() {
  int n, i;
  scanf("%d", &n);
  printf("%d\n", count_hanoi(n, 1, 3, 2));
  print_hanoi(n, 1, 3, 2);
  return 0;
}
