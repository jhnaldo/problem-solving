#include <stdio.h>

#define MOD 10007

int main(){
    int n, i, j;
    int before[10], cur[10];
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
        before[i] = 10-i;
    for (i = 2; i <= n; i++){
        cur[9] = 1;
        for (j = 8; j >= 0; j--)
            cur[j] = (cur[j+1] + before[j]) % MOD;
        for (j = 0; j < 10; j++)
            before[j] = cur[j];
    }
    printf("%d\n", before[0]);
    return 0;
}
