#include <stdio.h>
#include <stdlib.h>
int comp(const void* left, const void* right){
    return *(int*)right - *(int*)left;
}

int main(){
    int arr[100000];
    int size;
    int i;

    scanf("%d", &size);
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, size, sizeof(int), comp);

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
