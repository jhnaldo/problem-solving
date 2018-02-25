#include <stdio.h>
#include <stdlib.h>

int compare (const void *left, const void *right){
    return *(int*)right - *(int*)left;
}

int main(){
    int n, i, max = 0;
    int arr[100000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    for (i = 0; i < n; i++)
        if (max < arr[i]+i) max = arr[i]+i;
    printf("%d\n", max+2);

    return 0;
}
