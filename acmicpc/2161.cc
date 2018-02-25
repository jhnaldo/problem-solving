#include <stdio.h>

int main(){
    int n, i, k;
    int arr[1000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        arr[i] = i+1;
    for (i = 0, k = 0; i < n-1; i++){
        printf("%d ", arr[k]);
        arr[k] = 0;
        while (!arr[k]) k = (k+1) % n;
        k = (k+1) % n;
        while (!arr[k]) k = (k+1) % n;
    }
    printf("%d\n", arr[k]);
    return 0;
}
