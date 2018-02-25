#include <stdio.h>

int main(){
    int arr[100][100] = {};
    int h, w, n;
    int i, j;

    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    while (n--){
        int l, d, x, y;
        scanf("%d %d %d %d", &l, &d, &x, &y);
        x--; y--;
        for (i = 0; i < l; i++){
            arr[x+i*d][y+i*(1-d)] = 1;
        }
    }
    for(i = 0; i < h; i++){
        for (j = 0; j < w; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
