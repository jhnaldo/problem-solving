#include <stdio.h>
#include <stdlib.h>

int arr[8], order[8];

int order_compare(const void *left, const void *right){
    return arr[*(int*)left] - arr[*(int*)right];
}

int compare(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
int i, sum = 0;

    for (i = 0; i < 8; i++) order[i] = i;
    for (i = 0; i < 8; i++) scanf("%d", &arr[i]);

    qsort(order, 8, sizeof(int), order_compare);
    for (i = 3; i < 8; i++)
        sum += arr[order[i]];
    printf("%d\n", sum);

    qsort(order+3, 5, sizeof(int), compare);
    for (i = 3; i < 8; i++)
        printf("%d ", order[i]+1);
    printf("\n");
    return 0;
}
