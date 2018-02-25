#include <stdio.h>

int main(){
    long long n, k, m;
    scanf("%lld %lld %lld", &n, &k, &m);
    if (n*k < m) printf("0\n");
    else printf("%lld\n", n*k-m);
    return 0;
}
