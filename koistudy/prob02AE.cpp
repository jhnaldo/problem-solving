#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int abs(int n){
    if (n < 0) return -n;
    return n;
}

int sum(int arr[]){
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++)
        sum += arr[i];
    return sum;
}

int main(){
    int col[5], row[5];
    int i, j;

    scanf("%d", &col[0]);
    row[0] = col[0];
    for (j = 1; j < 5; j++){
        scanf("%d", &col[j]);
        row[0] = MAX(row[0], col[j]);
    }
    for (i = 1; i < 5; i++){
        scanf("%d", &row[i]);
        col[0] = MAX(col[0], row[i]);
        for (j = 1; j < 5; j++){
            int value;
            scanf("%d", &value);
            col[j] = MAX(col[j], value);
            row[i] = MAX(row[i], value);
        }
    }

    printf("%d\n", abs(sum(col) - sum(row)));
    return 0;
}
