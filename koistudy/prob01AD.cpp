#include <stdio.h>
#include <stdlib.h>

int arr[20];
int comp(const void* left, const void *right){
    return arr[*(int*)left] - arr[*(int*)right];
}

int main(){
    int n, i, order[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        order[i] = i;
    }

    qsort(order, n, sizeof(int), comp);
    printf("%d\n", order[n/2]+1);
    return 0;
}
