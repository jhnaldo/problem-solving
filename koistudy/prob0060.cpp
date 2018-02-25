#include <stdio.h>

int main(){
    int arr[19][19] = {};
    int i, j;
    int n;
    for (i = 0; i < 19; i++){
        for (j = 0; j < 19; j++)
            scanf("%d", &arr[i][j]);
    }
    scanf("%d", &n);
    while (n--){
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        for (i = 0; i < 19; i++){
            arr[i][y] = 1 - arr[i][y];
            arr[x][i] = 1 - arr[x][i];
        }
    }
    for(i = 0; i < 19; i++){
        for (j = 0; j < 19; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
