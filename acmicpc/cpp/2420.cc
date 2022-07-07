#include <stdio.h>

#define abs(k) ((k)<0?-(k):(k))

int main(){
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", abs(n-m));
    return 0;
}
