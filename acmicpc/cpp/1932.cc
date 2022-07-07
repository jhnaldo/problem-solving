#include <stdio.h>

#define max(a,b) (a>b?a:b)

int main(){
    int n;
    int arr[501][501] = {0,};
    int max_val;
    int i, j;

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            scanf("%d", &arr[i][j]);
            arr[i][j] += max(arr[i-1][j-1], arr[i-1][j]);
        }
    }

    max_val = arr[n][1];
    for(i = 2; i <= n; i++)
        max_val = max(max_val, arr[n][i]);
    printf("%d\n", max_val);
}
