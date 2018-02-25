#include <stdio.h>
#include <stdlib.h>

int comp(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int n;
    int arr[100000];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), comp);

    for (i = n-1; i >= 2 && arr[i] >= arr[i-1] + arr[i-2]; i--);
    printf("%d\n", (i < 2? 0: arr[i]+arr[i-1]+arr[i-2]));

    return 0;
}
