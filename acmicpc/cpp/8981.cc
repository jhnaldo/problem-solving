#include <stdio.h>

int main(){
	int n, cur = 0;
  int arr[100] = {0, };
  scanf("%d", &n);
	for(int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    while (arr[cur]) { cur++; cur %= n; }
    arr[cur] = k;
    cur += k;
    cur %= n;
	}
  printf("%d\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
