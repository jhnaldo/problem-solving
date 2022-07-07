#include <stdio.h>

int main(){
    int n, k, i, j;
    int arr[1001] = {0,};
    arr[0] = 1;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++){
        for (j = i; j >= 1; j--){
            arr[j] += arr[j-1];
            arr[j] %= 10007;
        }
    }
    printf("%d\n", arr[k]);
    return 0;
}
