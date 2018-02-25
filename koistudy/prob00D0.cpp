#include <stdio.h>

int main(){
    int n, m, max;
    int i, j, x, y, p, q;
    int map[100][100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            scanf("%d", &map[i][j]);
    }

    max = -1;
    for (i = 0; i < n-2; i++){
        for (j = 0; j < m-2; j++){
            int sum = 0;
            for (x = 0; x < 3; x++){
                for (y = 0; y < 3; y++)
                    sum += map[i+x][j+y];
            }
            if (max < sum){
                max = sum;
                p = i;
                q = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", p+1, q+1);
    return 0;
}
