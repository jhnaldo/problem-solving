#include <stdio.h>

int main(){
    int n, k;
    int arr[100001];
    int i, max;
    scanf("%d %d", &n, &k);
    arr[0] = 0;
    for (i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        arr[i] += arr[i-1];
    }

    max = arr[k];
    for (i = k+1; i <= n; i++){
        int sum = arr[i] - arr[i-k];
        if (sum > max)
            max = sum;
    }
    printf("%d\n", max);

    return 0;
}
