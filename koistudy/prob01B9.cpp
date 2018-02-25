#include <stdio.h>

int main(){
    int n, k;
    int arr[31][31] = {};
    int i, j;
    scanf("%d %d", &n, &k);
    if (n < k){
        printf("0\n");
        return 0;
    }

    for (i = 1; i <= n; i++){
        arr[i][0] = arr[i][i] = 1;
        for (j = 1; j < i; j++)
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
    }
    printf("%d\n", arr[n][k]);

    return 0;
}
