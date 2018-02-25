#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

int main(){
    int n;
    int arr[10000];
    int i;
    int avg = 0;
    int sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        avg += arr[i];
    }
    avg /= n;
    for (i = 0; i < n; i++){
        sum += ABS(arr[i] - avg);
    }
    printf("%d\n", sum / 2);
    return 0;
}
