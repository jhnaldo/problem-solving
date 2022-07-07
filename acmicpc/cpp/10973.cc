#include <stdio.h>
#include <stdlib.h>

int compare(const void *left, const void *right){
    return *(int*)right - *(int*)left;
}

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, i, j, k;
    int arr[10000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = n-2; i >= 0 && arr[i+1] > arr[i]; i--);
    if (i == -1){
        printf("-1\n");
        return 0;
    }

    k = arr[i];
    qsort(arr+i, n-i, sizeof(int), compare);
    for (j = i; arr[j] != k; j++);
    for (; j >= i; j--) swap(arr[j], arr[j+1]);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
