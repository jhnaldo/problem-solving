#include <stdio.h>

int fact(int n){
    int i;
    int result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}

void display(int arr[], int result[], int k, int n){
    if (k == n){
        int i;
        for (i = 0; i < n; i++)
            printf("%d", result[i]);
        printf("\n");
    }else{
        int i;
        for (i = 0; i < n; i++){
            if (arr[i]){
                int tmp;
                tmp = arr[i];
                arr[i] = 0;
                result[k] = tmp;
                display(arr, result, k+1, n);
                arr[i] = tmp;
            }
        }
    }
}

int main(){
    int n;
    int arr[7];
    int result[7];
    int i;
    scanf("%d", &n);

    printf("%d\n", fact(n));
    for (i = 0; i < n; i++)
        arr[i] = n-i;
    display(arr, result, 0, n);
    return 0;
}
