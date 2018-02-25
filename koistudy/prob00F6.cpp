#include <stdio.h>

int main(){
    int n, m;
    int map[16][16] = {};
    int i, j;
    scanf("%d %d", &n, &m);

    for (i = 0; i <= n; i++){
        map[i][0] = 1;
        for (j = 1; j <= m && (n-i) * m <= n * (m-j); j++)
            map[i][j] = map[i][j-1] + map[i-1][j];
    }
    printf("%d\n", map[n][m]);
    return 0;
}
