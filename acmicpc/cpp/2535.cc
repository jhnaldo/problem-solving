#include <stdio.h>
#include <stdlib.h>

int arr[100];

int compare (const void *left, const void *right){
    return arr[*(int*)right]-arr[*(int*)left];
}

int main(){
    int n, i;
    int order[100], nation[100], num[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d %d", &nation[i], &num[i], &arr[i]);
        order[i] = i;
    }

    qsort(order, n, sizeof(int), compare);

    printf("%d %d\n", nation[order[0]], num[order[0]]);
    printf("%d %d\n", nation[order[1]], num[order[1]]);
    if (nation[order[0]] == nation[order[1]])
        printf("%d %d\n", nation[order[3]], num[order[3]]);
    else
        printf("%d %d\n", nation[order[2]], num[order[2]]);
    return 0;
}
