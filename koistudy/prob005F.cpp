#include <stdio.h>

int main(){
    int map[19][19] = {};
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        map[x-1][y-1] = 1;
    }
    for (i = 0; i < 19; i++){
        for (j = 0; j < 19; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }
    return 0;
}
