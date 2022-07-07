#include <stdio.h>
#include <stdlib.h>

int compare(const void *left, const void *right) {
  return *(int*)left - *(int*)right;
}

int main() {
  int n, i, sum = 0;
  int arr[500000], count[8001];
  int freq, nfreq, min, max;
  scanf("%d", &n);
  for (i = 0; i <= 8000; i++)
    count[i] = 0;
  min = 4001;
  max = -4001;
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
    count[arr[i] + 4000]++;
    if (min > arr[i]) min = arr[i];
    if (max < arr[i]) max = arr[i];
  }
  printf("%.0lf\n", (double) sum / n);

  qsort(arr, n, sizeof(int), compare);
  printf("%d\n", arr[(n-1)/2]);

  freq = nfreq = 0;
  for (i = 1; i <= 8000; i++) {
    if (count[freq] < count[i]) {
      freq = nfreq = i;
    } else if (count[freq] == count[i]) {
      if (freq == nfreq) {
        nfreq = i;
      }
    }
  }
  printf("%d\n", nfreq - 4000);
  printf("%d\n", max - min);

  return 0;
}
