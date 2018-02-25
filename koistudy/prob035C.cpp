#include <stdio.h>

bool prime(int arr[], int size, int n){
    int i;
    for (i = 0; i < size && arr[i] * arr[i] <= n; i++){
        if (n % arr[i] == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    int cur;
    int arr[100000];
    int i;
    scanf("%d", &n);
    for (cur = 2, i = 1, arr[0] = 2; i < n; i++){
        while (!prime(arr, i, ++cur));
        arr[i] = cur;
    }
    printf("%d\n", cur);
    return 0;
}
