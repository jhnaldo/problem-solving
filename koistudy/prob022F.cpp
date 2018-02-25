#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

bool exist(int arr[], int k, int from, int to){
    int mid;
    if (from > to)
        return false;

    mid = (from + to) / 2;
    if (arr[mid] > k) return exist(arr, k, from, mid-1);
    if (arr[mid] < k) return exist(arr, k, mid+1, to);
    return true;
}

int main(){
    int n, m;
    int arr[2000];
    int* pair;
    int i, j, k;

    scanf("%d %d", &n, &m);
    pair = new int[n*(n+1)/2];
    for (k = 0, i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        for (j = 0; j <= i; j++){
            pair[k++] = arr[i] + arr[j];
        }
    }

    qsort(pair, n*(n+1)/2, sizeof(int), comp);

    for (i = 0; i < n*(n+1)/2; i++){
        if (pair[i] < m && exist(pair, m-pair[i], 0, n*(n+1)/2-1))
            break;
    }
    printf("%s\n", (i == n*(n+1)/2? "NO": "YES"));
    delete[] pair;
    return 0;
}
