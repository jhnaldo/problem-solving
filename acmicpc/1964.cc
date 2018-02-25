#include <stdio.h>

#define MOD 45678

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", (n*(n+1)/2*3+(n+1)) % MOD);
    return 0;
}
