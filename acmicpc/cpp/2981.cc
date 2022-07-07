#include <stdio.h>
#include <stdlib.h>

int factors[100];
int counts[100];
int len;
int res[1000000];
int cur = 1, size;

int compare(const void *x, const void *y) {
  return *(int*)x - *(int*)y;
}

void traverse(int k) {
  if (k == len) {
    res[size++] = cur;
    return;
  }
  traverse(k + 1);
  for (int i = 0; i < counts[k]; i++) {
    cur *= factors[k];
    traverse(k + 1);
  }
  for (int i = 0; i < counts[k]; i++)
    cur /= factors[k];
}

int gcd(int x, int y) {
  if (x < y) return gcd(y, x);
  if (y == 0) return x;
  return gcd(y, x % y);
}

int main() {
  int n;
  int prev, g = 0;
  scanf("%d", &n);
  scanf("%d", &prev);

  for (int i = 1; i < n; i++) {
    int cur;
    scanf("%d", &cur);
    g = gcd(g, cur > prev ? (cur - prev) : (prev - cur));
    prev = cur;
  }

  for (int x = 2; g > 1; x++) {
    if (g % x == 0) {
      factors[len] = x;
      counts[len] = 0;
      while (g % x == 0) {
        g /= x;
        counts[len]++;
      }
      len++;
    }
  }
  traverse(0);
  qsort(res, size, sizeof(int), compare);

  for (int i = 1; i < size; i++)
    printf("%d ", res[i]);
  printf("\n");

  return 0;
}
