#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int n;
    int arr[1000] = {};
    int i, j;
    scanf("%d", &n);
    scanf("%d", &arr[0]);
    for (j = 1; j < n; j++){
        scanf("%d", &arr[j]);
        arr[j] += arr[j-1];
    }
    for (i = 1; i < n; i++){
        int k;
        scanf("%d", &k);
        arr[0] += k;
        for (j = 1; j < n; j++){
            scanf("%d", &k);
            arr[j] = k + MAX(arr[j-1], arr[j]);
        }
    }
    printf("%d\n", arr[n-1]);
    return 0;
}
