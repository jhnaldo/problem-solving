#include <stdio.h>

int main(){
    int n;
    int arr[10];
    int res[10];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++){
        res[i] = n-i;
        for (j = 0; j < i-arr[n-1-i]; j++){
            int tmp = res[i-j];
            res[i-j] = res[i-j-1];
            res[i-j-1] = tmp;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d%c", res[i], (i==n-1?'\n':' '));

    return 0;
}
