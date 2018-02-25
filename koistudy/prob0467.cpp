#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int n;
    int arr[101];
    int max[101];
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    max[0] = arr[0] = 0;
    max[1] = arr[1];
    max[2] = arr[1] + arr[2];

    for (i = 3; i <= n; i++)
        max[i] = MAX(max[i-1], MAX(max[i-2] + arr[i], max[i-3] + arr[i-1] + arr[i]));
    printf("%d\n", max[n]);
    return 0;
}
