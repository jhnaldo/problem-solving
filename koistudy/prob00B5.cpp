#include <stdio.h>

int sub_sum(int sum[65][65], int xstart, int ystart, int size){
    return sum[xstart+size-1][ystart+size-1] - sum[xstart-1][ystart+size-1] - sum[xstart+size-1][ystart-1] + sum[xstart-1][ystart-1];
}

void count(int sum[65][65], int xstart, int ystart, int size, int &white, int &black){
    int k = sub_sum(sum, xstart, ystart, size);
    if (k == size * size){
        black++;
    }else if (k == 0){
        white++;
    }else{
        count(sum, xstart, ystart, size/2, white, black);
        count(sum, xstart, ystart+size/2, size/2, white, black);
        count(sum, xstart+size/2, ystart, size/2, white, black);
        count(sum, xstart+size/2, ystart+size/2, size/2, white, black);
    }
}

int main(){
    int n;
    int sum[65][65] = {};
    int i, j;
    int white, black;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &sum[i][j]);
            sum[i][j] += sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }
    }

    white = black = 0;
    count(sum, 1, 1, n, white, black);
    printf("%d\n%d\n", white, black);
    return 0;
}
