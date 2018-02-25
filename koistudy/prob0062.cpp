#include <stdio.h>

int main(){
    int arr[10][10] = {};
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++)
            scanf("%d", &arr[i][j]);
    }
    i = j = 1;
    while (true) {
        if (arr[i][j] == 2){
            arr[i][j] = 9;
            break;
        }
        arr[i][j] = 9;
        if (arr[i][j+1] != 1) j++;
        else if (arr[i+1][j] != 1) i++;
        else break;
    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
