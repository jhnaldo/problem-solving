#include <stdio.h>
#include <algorithm>

using namespace std;

#define SIZE 500000

int n, x;
int arr[SIZE];

int main() {
  scanf("%d", &n);
  double sum = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    if (__gcd(x, arr[i]) == 1) {
      sum += arr[i];
      count++;
    }
  }
  printf("%lf\n", sum/count);
  return 0;
}
