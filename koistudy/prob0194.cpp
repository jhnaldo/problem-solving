#include <stdio.h>

int C(int n, int r){
    int i, j;
    int arr[51][51] = {};

    arr[0][0] = 1;
    for (i = 1; i <= n; i++){
        arr[i][0] = 1;
        for (j = 1; j < i; j++)
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        arr[i][i] = 1;
    }
    return arr[n][r];
}

int H(int n, int r){
    if (r) return C(n + r - 1, r);
    return 1;
}

int main(){
    int n, k, m;
    int i;
    scanf("%d", &n);
    scanf("%d", &k);
    for (n -= k-1, i = 0; i < k; i++){
        int value;
        scanf("%d", &value);
        n -= value;
    }
    printf("%d\n", H(k + 1, n));
    return 0;
}
