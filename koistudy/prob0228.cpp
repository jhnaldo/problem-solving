#include <stdio.h>

int C(int n, int r){
    int arr[16][16] = {};
    int i, j;
    arr[0][0] = 1;
    for (i = 1; i <= n; i++){
        arr[i][0] = arr[i][i] = 1;
        for (j = 1; j < i; j++)
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
    }
    return arr[n][r];
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    if (n == k) printf("0\n");
    else{
        printf("%d\n", C(n-1,k)*2);
    }
    return 0;
}
