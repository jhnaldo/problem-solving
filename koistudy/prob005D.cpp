#include <stdio.h>

int main(){
    int arr[10000];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = n-1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
