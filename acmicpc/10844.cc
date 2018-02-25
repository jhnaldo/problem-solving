#include <stdio.h>

#define MOD 1000000000

int main(){
    int n, i, sum = 0;
    int before[10], count[10];
    scanf ("%d", &n);
    for (i = 0; i < 10; i++) before[i] = 1;
    while (n-->1){
        count[0] = before[1];
        count[9] = before[8];
        for (i = 1; i < 9; i++)
            count[i] = (before[i-1] + before[i+1]) % MOD;
        for (i = 0; i < 10; i++)
            before[i] = count[i];
    }
    for (i = 1; i < 10; i++){
        sum += before[i];
        sum %= MOD;
    }
    printf("%d\n", sum);
    return 0;
}
