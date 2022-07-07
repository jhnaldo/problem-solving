#include <stdio.h>

int main(){
    int n, m, k;
    int i, j, p;
    int A[100][100], B[100][100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    }
    scanf("%d %d", &m, &k);
    for (i = 0; i < m; i++){
        for (j = 0; j < k; j++)
            scanf("%d", &B[i][j]);
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < k; j++){
            int res = 0;
            for (p = 0; p < m; p++)
                res += A[i][p]*B[p][j];
            printf("%d ", res);
        }
        printf("\n");
    }
    return 0;
}
