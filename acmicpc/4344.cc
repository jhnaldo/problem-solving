#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int k, i, count = 0;
    double arr[1000], avg = 0;
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
      scanf("%lf", &arr[i]);
      avg += arr[i];
    }
    avg /= k;
    for (i = 0; i < k; i++) {
      if (arr[i] > avg) count++;
    }
    printf("%.3lf%%\n", (double) count / k * 100);
  }
}
