#include <stdio.h>

int main(){
    int n;
    bool arr[100][100] = {};
    int i, j, count = 0;
    scanf("%d", &n);
    while (n--){
        int x, y;
        scanf("%d %d", &x, &y);
        for (i = 0; i < 10; i++){
            for (j = 0; j < 10; j++)
                arr[x+i][y+j] = true;
        }
    }
    for (i = 0; i < 100; i++){
        for (j = 0; j < 100; j++)
            count += arr[i][j];
    }
    printf("%d\n", count);

    return 0;
}
