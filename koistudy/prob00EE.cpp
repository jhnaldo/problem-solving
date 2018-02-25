#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)right - *(int*)left;
}

int main(){
    int i;
    int arr[20];
    for (i = 0; i < 20; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 10, sizeof(int), comp);
    qsort(arr+10, 10, sizeof(int), comp);
    printf("%d\n%d\n", arr[0]+arr[1]+arr[2], arr[10]+arr[11]+arr[12]);
}
