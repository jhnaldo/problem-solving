#include <stdio.h>

int main(){
    int n, m;
    int arr[2] = {1, 1};
    int i, j;
    scanf("%d %d", &n, &m);
    arr[0] %= m;
    arr[1] %= m;
    for (i = 0; i < n-1; i++){
        int tmp;
        tmp = (arr[0]*2 + arr[1]) % m;

        arr[0] = arr[1];
        arr[1] = tmp;
    }
    printf("%d\n", arr[1]);
    return 0;
}
