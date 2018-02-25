#include <stdio.h>

int main() {
  bool arr[30] = {0, };
  for (int i = 0; i < 28; i++) {
    int k;
    scanf("%d", &k);
    arr[k-1] = true;
  }
  for (int i = 0; i < 30; i++) {
    if (!arr[i]) printf("%d\n", i+1);
  }
  return 0;
}
