#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int n;
    int arr[301] = {0,}, max[301] = {0,};
    int i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    if (n >= 1) max[1] = arr[1];
    if (n >= 2) max[2] = arr[1]+arr[2];
    for (i = 3; i <= n; i++)
        max[i] = MAX(max[i-2], max[i-3]+arr[i-1])+arr[i];
    printf("%d\n", max[n]);
    return 0;
}
