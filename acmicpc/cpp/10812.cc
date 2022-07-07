#include <stdio.h>

int main(){
    int n, m, i;
    int arr[100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        arr[i] = i+1;
    for (i = 0; i < m; i++){
        int begin, end, mid, j, k;
        int tmp[100];
        scanf("%d %d %d", &begin, &end, &mid);
        for (k = 0, j = mid; j <= end; k++, j++)
            tmp[k] = arr[j-1];
        for (j = begin; j < mid; k++, j++)
            tmp[k] = arr[j-1];
        for (k = 0, j = begin; j <= end; k++, j++){
            arr[j-1] = tmp[k];
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
