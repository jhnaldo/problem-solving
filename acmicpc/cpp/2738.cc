#include <stdio.h>

int main(){
    int n, m, i, j;
    int mat[100][100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            int k;
            scanf("%d", &k);
            printf("%d ", mat[i][j]+k);
        }
        printf("\n");
    }

    return 0;
}
