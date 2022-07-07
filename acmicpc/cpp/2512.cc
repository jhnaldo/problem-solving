#include <stdio.h>
#include <stdlib.h>

int compare(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int n, i;
    int arr[10000], sum[10000];
    int max;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &max);

    qsort(arr, n, sizeof(int), compare);

    sum[0] = arr[0];
    for (i = 1; i < n; i++){
        sum[i] = sum[i-1] + arr[i];
    }

    if (sum[n-1] <= max){
        printf("%d\n", arr[n-1]);
        return 0;
    }

    for (i = n-2; i >= 0; i--){
        int val = (max - sum[i])/(n-i-1);
        if (val >= arr[i]){
            printf("%d\n", val);
            return 0;
        }
    }
    printf("%d\n", max/n);

    return 0;
}
