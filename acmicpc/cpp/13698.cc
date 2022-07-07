#include <stdio.h>

#define SWAP(x, y) (swap(arr[x], arr[y]))

void swap(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int main() {
  char command[201];
  int arr[4] = {1, 0, 0, 2};
  scanf("%s", command);
  for (int i = 0; command[i]; i++) {
    switch(command[i]) {
      case 'A': SWAP(0, 1); break;
      case 'B': SWAP(0, 2); break;
      case 'C': SWAP(0, 3); break;
      case 'D': SWAP(1, 2); break;
      case 'E': SWAP(1, 3); break;
      case 'F': SWAP(2, 3); break;
    }
  }
  for (int i = 0; i < 4; i++) {
    if (arr[i] == 1) printf("%d\n", i+1);
  }
  for (int i = 0; i < 4; i++) {
    if (arr[i] == 2) printf("%d\n", i+1);
  }
  return 0;
}
