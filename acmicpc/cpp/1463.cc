#include <stdio.h>

int main(){
    int n, i;
    int arr[1000001];

    scanf("%d", &n);
    arr[1] = 0;
    for (i = 2; i <= n; i++){
        arr[i] = -1;
        if (i%3 == 0 && (arr[i] == -1 || arr[i] > arr[i/3]+1))
            arr[i] = arr[i/3]+1;
        if (i%2 == 0 && (arr[i] == -1 || arr[i] > arr[i/2]+1))
            arr[i] = arr[i/2]+1;
        if (arr[i] == -1 || arr[i] > arr[i-1]+1)
            arr[i] = arr[i-1]+1;
    }
    printf("%d\n", arr[n]);
    return 0;
}
