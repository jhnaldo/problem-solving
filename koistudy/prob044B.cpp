#include <stdio.h>

#define BOUND 1000000007;

int main(){
    long long n, k;
    long long result;
    scanf("%lld %lld", &n, &k);
    result = 1;
    while (k--) result = (result * n) % BOUND;
    printf("%lld\n", result);
    return 0;
}
