#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int i;
    int arr[5];
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 5, sizeof(int), comp);
    printf("%d\n", arr[2]);
    return 0;
}
