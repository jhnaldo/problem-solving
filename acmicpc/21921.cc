#include <stdio.h>

#define SIZE 250000

int n, x;
int a[SIZE];
int s[SIZE];
int i;

int main() {
  scanf("%d %d", &n, &x);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < x; i++) {
    s[x-1] += a[i];
  }

  int max_days = s[x-1];
  int count = 1;
  for (; i < n; i++) {
    s[i] = s[i-1] + a[i] - a[i-x];
    if (s[i] == max_days) count++;
    else if (s[i] > max_days) {
      max_days = s[i];
      count = 1;
    }
  }
  if (max_days == 0){
    printf("SAD\n");
  } else {
    printf("%d\n", max_days);
    printf("%d\n", count);
  }
  return 0;
}
