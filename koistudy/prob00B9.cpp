#include <stdio.h>

int main(){
    int n, k;
    int comb[30][30] = {};
    int i, j;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++){
        comb[i][0] = comb[i][i] = 1;
        for (j = 1; j < i; j++)
            comb[i][j] = comb[i-1][j-1] + comb[i-1][j];
    }
    printf("%d\n", comb[n][k]);
    return 0;
}
