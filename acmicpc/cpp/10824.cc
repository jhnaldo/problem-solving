#include <stdio.h>

long long int combine(long long int a, long long int b){
    long long int tmp = b;
    while (tmp){
        tmp /= 10;
        a *= 10;
    }
    return a+b;
}

int main(){
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("%lld\n", combine(a, b)+combine(c, d));
    return 0;
}
