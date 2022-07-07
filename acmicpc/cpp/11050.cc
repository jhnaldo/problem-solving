#include <stdio.h>

int main(){
    int n, k, i, res = 1;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) res *= i;
    for (i = 1; i <= k; i++) res /= i;
    for (i = 1; i <= n-k; i++) res /= i;
    printf("%d\n", res);
    return 0;
}
