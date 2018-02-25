#include <stdio.h>

bool find(int arr[9][9], int x_arr[], int y_arr[], int k, int size){
    int x = x_arr[k], y = y_arr[k];
    int i, j;
    bool check[10] = {0,};

    for (i = 0; i < 9; i++)
        check[arr[x][i]] = check[arr[i][y]] = true;
    for (i = (x/3)*3; i < (x/3)*3+3; i++){
        for (j = (y/3)*3; j < (y/3)*3+3; j++)
            check[arr[i][j]] = true;
    }
    for (i = 1; i <= 9; i++){
        if (!check[i]){
            arr[x][y] = i;
            if (k == size-1){
                for (i = 0; i < 9; i++){
                    for (j = 0; j < 9; j++)
                        printf ("%d ", arr[i][j]);
                    printf ("\n");
                }
                return true;
            }
            if (find(arr, x_arr, y_arr, k+1, size))
                return true;
        }
    }
    arr[x][y] = 0;
    return false;
}

int main(){
    int arr[9][9], x[81], y[81], size = 0;
    int i, j;

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if (!arr[i][j]){
                x[size] = i;
                y[size] = j;
                size++;
            }
        }
    }

    find (arr, x, y, 0, size);

    return 0;
}
