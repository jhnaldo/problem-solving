#include <stdio.h>

int main(){
    long long a, d, n;
    scanf("%lld %lld %lld", &a, &d, &n);
    while(--n) a *= d;
    printf("%lld\n", a);

    return 0;
}
