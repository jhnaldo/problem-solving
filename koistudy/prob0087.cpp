#include <stdio.h>

int main(){
    int n;
    int arr[100][100];
    int i, j;
    int x, y, d, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) arr[0][i] = ++count;
    d = 1;
    x = 0;
    y = n-1;
    for (i = n-1; i >= 1; i--){
        for (j = 0; j < i; j++){
            x += d;
            arr[x][y] = ++count;
        }
        for (j = 0; j < i; j++){
            y -= d;
            arr[x][y] = ++count;
        }
        d *= -1;
    }
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
