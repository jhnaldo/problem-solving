#include <stdio.h>
#include <stdlib.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int comp(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int k, i;
    scanf("%d", &k);
    for (i = 0; i < k; i++){
        int n, j, min, max, gap;
        int arr[50];
        scanf("%d", &n);
        for (j = 0; j < n; j++)
            scanf("%d", &arr[j]);
        qsort(arr, n, sizeof(int), comp);
        min = max = arr[0];
        gap = arr[1] - arr[0];
        for (j = 1; j < n; j++){
            min = MIN(min, arr[j]);
            max = MAX(max, arr[j]);
            gap = MAX(gap, arr[j]-arr[j-1]);
        }
        printf("Class %d\n", i+1);
        printf("Max %d, Min %d, Largest gap %d\n", max, min, gap);
    }
    return 0;
}
