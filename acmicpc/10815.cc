#include <stdio.h>
#include <stdlib.h>

int comp(const void *left, const void *right) { return *(int*)left - *(int*)right; }

int binary_search(int arr[], int from, int to, int k){
    if (from > to) return false;
    int mid = (from+to)/2;
    if (arr[mid] == k) return true;
    return (k<arr[mid]?binary_search(arr,from,mid-1,k):binary_search(arr,mid+1,to,k));
}

int main(){
    int n, m, i;
    int arr[500000];

    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), comp);

    scanf ("%d", &m);
    for (i = 0; i < m; i++){
        int k;
        scanf("%d", &k);
        printf("%d ", binary_search(arr, 0, n-1, k));
    }
    printf("\n");

    return 0;
}
