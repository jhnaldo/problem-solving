#include <stdio.h>

int main(){
    int arr[1000][1000], last;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    last = (arr[n-2][n-1]+arr[n-3][n-1]-arr[n-3][n-2])/2;
    for (i = 0; i < n-1; i++)
        printf("%d ", arr[i][n-1]-last);
    printf("%d\n", last);
    return 0;
}
