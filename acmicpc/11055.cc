#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int n;
int arr[1000];
int memo[1000];
int res;

void input() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
}

void process() {
  for (int i = 0; i < n; i++) {
    int max = 0;
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i]) max = MAX(memo[j], max);
    }
    memo[i] += max + arr[i];
    res = MAX(memo[i], res);
  }
}

void output() {
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
