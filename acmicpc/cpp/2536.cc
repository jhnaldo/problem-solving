#include <stdio.h>

int main(){
    int n, sum = 0;
    int arr[100][100] = {0,};
    int i, j;

    scanf("%d", &n);
    for (; n > 0; n--){
        int x, y;
        scanf("%d %d", &x, &y);
        for (i = 0; i < 10; i++){
            for (j = 0; j < 10; j++)
                arr[x+i][y+j] = 1;
        }
    }
    for (i = 0; i < 100; i++){
        for (j = 0; j < 100; j++)
            sum += arr[i][j];
    }
    printf("%d\n", sum);
    return 0;
}
