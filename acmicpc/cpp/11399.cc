#include <stdio.h>
#include <stdlib.h>

int compare(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int n, i;
    int arr[1000];
    int res, sum;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    res = sum = 0;
    for (i = 0; i < n; i++){
        sum += arr[i];
        res += sum;
    }
    printf("%d\n", res);

    return 0;
}
