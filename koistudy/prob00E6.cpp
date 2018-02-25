#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int n;
    int *arr, *count;
    int i, j, max = 0;
    scanf("%d", &n);
    arr = new int[n];
    count = new int[n]();

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        count[i] = 1;
        for (j = i-1; j >= 0; j--){
            if (arr[j] > arr[i])
                count[i] = MAX(count[i], count[j]+1);
        }
    }

    for (i = 0; i < n; i++)
        max = MAX(max, count[i]);

    printf("%d\n", max);

    delete[] arr;
    delete[] count;
    return 0;
}
