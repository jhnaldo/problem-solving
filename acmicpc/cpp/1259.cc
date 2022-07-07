#include <stdio.h>

int main() {
  while (true) {
    int n;
    int arr[5];
    scanf("%d", &n);
    if (n == 0) break;
    int i;
    int size = 0;
    while (n > 0) {
      arr[size++] = n % 10;
      n /= 10;
    }
    for (i = 0; i < size; i++) {
      if (arr[i] != arr[size-i-1]) {
        printf("no\n");
        break;
      }
    }
    if (i == size) {
      printf("yes\n");
    }
  }
  return 0;
}
