#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

int main(){
    int arr[6];
    int i;
    for (i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 4, sizeof(int), comp);
    qsort(arr+4, 2, sizeof(int), comp);

    printf("%d\n", arr[1]+arr[2]+arr[3]+arr[5]);
    return 0;
}
