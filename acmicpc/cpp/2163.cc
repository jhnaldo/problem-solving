#include <stdio.h>

int main(){
    int count[301][301] = {0,};
    int n, m, i, j, k;

    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            for (k = 1; k <= i/2; k++){
                int sum = count[k][j] + count[i-k][j] + 1;
                if (!count[i][j] || count[i][j] > sum)
                    count[i][j] = sum;
            }
            for (k = 1; k <= j/2; k++){
                int sum = count[i][k] + count[i][j-k] + 1;
                if (!count[i][j] || count[i][j] > sum)
                    count[i][j] = sum;
            }
        }
    }
    printf("%d\n", count[n][m]);
    return 0;
}
