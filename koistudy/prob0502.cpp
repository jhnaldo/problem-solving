#include <stdio.h>

long long int f(long long int a, long long int b){
    return (a > b? a: b);
}

int main()
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    printf("%lld", f(x, y));
    return 0;
}
