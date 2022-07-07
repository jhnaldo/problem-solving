#include <stdio.h>

int main(){
    int n, m, k;
    int arr[301][301] = {0,};
    int i, j, x, y;

    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            scanf("%d", &arr[i][j]);
            arr[i][j] += arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }

    scanf("%d", &k);
    for (; k > 0; k--){
        scanf("%d %d %d %d", &i, &j, &x, &y);
        printf("%d\n", arr[x][y]-arr[i-1][y]-arr[x][j-1]+arr[i-1][j-1]);
    }
}
