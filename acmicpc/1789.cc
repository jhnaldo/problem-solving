#include <stdio.h>
#include <math.h>

int main(){
    long long int n, k;

    scanf("%lld", &n);
    k = sqrt(n*2);
    while(k*(k+1)/2 > n) k--;
    printf("%lld\n", k);
    return 0;
}
