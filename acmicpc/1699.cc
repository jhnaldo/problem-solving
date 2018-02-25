#include <stdio.h>

int main(){
    int n, i, k;
    int arr[100001];
    arr[0] = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int min = i;
        for (k = 1; k*k <= i; k++){
            if (min > arr[i-k*k]) min = arr[i-k*k];
        }
        arr[i] = min+1;
    }
    printf("%d\n", arr[n]);
    return 0;
}
