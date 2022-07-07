#include <stdio.h>

int main() {
  char l[9], r[9];
  int arr[16];
  scanf("%s", l);
  scanf("%s", r);
  for (int i = 0; i < 8; i++) {
    arr[2*i] = l[i] - '0';
    arr[2*i+1] = r[i] - '0';
  }
  for (int i = 0; i < 14; i++) {
    for (int j = 0; j < 16-i-1; j++) {
      arr[j] = (arr[j] + arr[j+1]) % 10;
    }
  }
  printf("%d%d\n", arr[0], arr[1]);
  return 0;
}
