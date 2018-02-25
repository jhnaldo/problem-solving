#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int n;
    int arr[1000];
    int i, j, tmp, value, max;

    scanf("%d", &n);
    scanf("%d", &arr[0]);
    for (i = 1; i < n; i++){
        scanf("%d", &value);
        tmp = arr[0];
        arr[0] += value;
        for (j = 1; j < i; j++){
            int _tmp = tmp;
            scanf("%d", &value);
            tmp = arr[j];
            arr[j] = MAX(arr[j], _tmp) + value;
        }
        scanf("%d", &value);
        arr[i] = tmp + value;
    }
    max = arr[0];
    for (i = 1; i < n; i++)
        max = MAX(max, arr[i]);
    printf("%d\n", max);
    return 0;
}
