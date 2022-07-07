#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, i;
        int arr[2][100000];
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%d", &arr[0][i]);
        for (i = 0; i < n; i++) scanf("%d", &arr[1][i]);

        if (n == 1){
            printf("%d\n", MAX(arr[0][0], arr[0][1]));
            continue;
        }

        arr[0][1] += arr[1][0];
        arr[1][1] += arr[0][0];
        for (i = 2; i < n; i++){
            arr[0][i] += MAX(arr[1][i-1], arr[1][i-2]);
            arr[1][i] += MAX(arr[0][i-1], arr[0][i-2]);
        }
        printf("%d\n", MAX(arr[0][n-1], arr[1][n-1]));
    }
    return 0;
}
