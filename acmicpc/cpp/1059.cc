#include <stdio.h>
#include <algorithm>

int main(){
    int n;
    int arr[51] = {0,};
    int i, k;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    std::sort(arr, arr+n+1);
    for (i = 1; i <= n; i++){
        if (arr[i] >= k) break;
    }
    if (arr[i] == k) printf("0\n");
    else printf("%d\n", (k-arr[i-1])*(arr[i]-k)-1);
    return 0;
}
