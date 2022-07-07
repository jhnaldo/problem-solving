#include <stdio.h>

int main(){
    int n, k;
    int cost[100], num[10001];
    int i, j;

    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &cost[i]);

    num[0] = 0;
    for (i = 1; i <= k; i++){
        num[i] = -1;
        for (j = 0; j < n; j++){
            if (cost[j] <= i && num[i-cost[j]] != -1 && (num[i] == -1 || num[i] > num[i-cost[j]]+1)){
                num[i] = num[i-cost[j]]+1;
            }
        }
    }
    printf("%d\n", num[k]);
    return 0;
}
