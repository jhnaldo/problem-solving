#include <stdio.h>

int main(){
    int n, k;
    int arr[100];
    int cost[10001] = {0,};
    int i, j, p;

    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    cost[0] = 1;
    for (i = 0; i < n; i++){
        for (j = 1; j <= k; j++){
            if (arr[i] <= j)
                cost[j] += cost[j-arr[i]];
        }
    }
    printf("%d\n", cost[k]);
    return 0;
}
