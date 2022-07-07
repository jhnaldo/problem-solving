#include <stdio.h>

int main() {
  int arr[10], tmp, count = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 10; i++) {
    scanf("%d", &tmp);
    if (arr[i] > tmp) count++;
    else if (arr[i] < tmp) count--;
  }
  printf("%c\n", (count > 0? 'A': (count < 0? 'B' : 'D')));
  return 0;
}
