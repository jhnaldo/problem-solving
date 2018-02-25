#include <stdio.h>

int main(){
    int n;
    long long count[21];
    int i, j;
    scanf("%d", &n);
    count[0] = 1;
    for (i = 1; i <= n; i++){
        count[i] = 0;
        for (j = 0; j < i; j++){
            count[i] += count[j] * count[i-j-1];
        }
    }
    printf("%lld\n", count[n]);
    return 0;
}
