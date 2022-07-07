#include <stdio.h>
#include <stdlib.h>

int comp (const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n, m;
    int arr[100000];
    int i, j, sum, min;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), comp);

    min = -1;
    for (i = j = sum = 0; j < n;){
        if (sum < m){
            j++;
            sum += arr[j]-arr[j-1];
            if (sum > m && (min == -1 || min > sum))
                min = sum;
        }else if (sum > m){
            i++;
            sum -= arr[i]-arr[i-1];
            if (sum > m && (min == -1 || min > sum))
                min = sum;
        }else{
            min = m;
            break;
        }
    }
    printf("%d\n", min);
    return 0;
}
