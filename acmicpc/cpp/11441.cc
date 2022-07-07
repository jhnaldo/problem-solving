#include <stdio.h>

int main(){
    int sum[100001];
    int n, k, i;
    scanf("%d", &n);
    sum[0] = 0;
    for (i = 1; i <= n; i++){
        scanf("%d", &sum[i]);
        sum[i] += sum[i-1];
    }
    scanf("%d", &k);
    while (k--){
        int from, to;
        scanf("%d %d", &from, &to);
        printf("%d\n", sum[to]-sum[from-1]);
    }
    return 0;
}
