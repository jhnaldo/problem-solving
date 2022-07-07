#include <stdio.h>

#define MAX 1000000000

void find_print(int n, int arr[], int size, int res[], int k){
    if (n == 0){
        for (k--; k >= 0; k--)
            printf("%d ", res[k]);
        printf("\n");
    }else{
        int idx;
        for (idx = size-1; arr[idx] > n; idx--);
        res[k] = arr[idx];
        find_print(n-res[k], arr, size, res, k+1);
    }
}

int main(){
    int t;
    int arr[50], res[50], size;
    arr[0] = 1;
    arr[1] = 2;
    for (size = 2; arr[size-1] <= MAX; size++)
        arr[size] = arr[size-2] + arr[size-1];

    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        find_print(n, arr, size, res, 0);
    }
    return 0;
}
