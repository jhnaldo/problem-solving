#include <stdio.h>

int main(){
    int n, m, k, i, j;
    int C[31][31] = {0,};

    C[0][0] = 1;
    for (i = 1; i <= 30; i++){
        C[i][0] = 1;
        for (j = 1; j <= i; j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }

    scanf("%d %d %d", &n, &m, &k);
    if (k == 0){
        printf("%d\n", C[n+m-2][n-1]);
    }else{
        int x, y;
        x = (k-1)/m+1;
        y = (k-1)%m+1;
        printf("%d\n", C[x+y-2][x-1] * C[n+m-x-y][n-x]);
    }
    return 0;
}
