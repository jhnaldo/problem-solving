#include <stdio.h>

int main(){
    int n;
    int arr[4] = {6, 28, 496, 8128};
    int i;
    scanf("%d", &n);
    for (i = 3; i >= 0 && arr[i] > n; i--);
    if (i >= 0) printf("%d\n", arr[i]);
    return 0;
}
