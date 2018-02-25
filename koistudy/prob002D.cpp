#include <stdio.h>

int main(){
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    printf("%.1lf\n", (a+b+c)/3.0);
    return 0;
}
