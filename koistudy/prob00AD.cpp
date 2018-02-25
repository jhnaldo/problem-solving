#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", ((3*n+2)*(n+1)/2)%1000000004);
    return 0;
}
