#include <stdio.h>

int main(){
    int t;
    int n, i, j, k, sum;
    int arr[10], before[10];
    int neighbors[10][4] = {
        {7, 0, 0, 0},
        {2, 4, 0, 0},
        {1, 3, 5, 0},
        {2, 6, 0, 0},
        {1, 5, 7, 0},
        {2, 4, 6, 8},
        {3, 5, 9, 0},
        {0, 4, 8, 0},
        {5, 7, 9, 0},
        {6, 8, 0, 0}};
    int size[10] = {1, 2, 3, 2, 3, 4, 3, 3, 3, 2};

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        for (i = 0; i < 10; i++)
            arr[i] = 1;

        for (i = 1; i < n; i++){
            for (j = 0; j < 10; j++) before[j] = arr[j];
            for (j = 0; j < 10; j++){
                arr[j] = 0;
                for (k = 0; k < size[j]; k++){
                    arr[j] += before[neighbors[j][k]];
                }
                arr[j] %= 1234567;
            }
        }

        sum = 0;
        for (i = 0; i < 10; i++){
            sum += arr[i];
            sum %= 1234567;
        }
        printf("%d\n", sum);
    }
    return 0;
}
