//0 1 x = x   a b a b
//1 1 y   x+y c d c d

#include <stdio.h>
#define MOD 1000000007

int main(){
    long long int n;
    long long int a, b, c, d;
    long long int x, y;

    scanf("%lld", &n);
    x = a = 0;
    y = b = c = d = 1;
    while (n){
        long long int _a, _b, _c, _d;
        if (n%2){
            long long int _x, _y;
            _x = a*x + b*y;
            _y = c*x + d*y;
            x = _x % MOD;
            y = _y % MOD;
        }

        n /= 2;
        _a = a*a + b*c;
        _b = a*b + b*d;
        _c = c*a + d*c;
        _d = c*b + d*d;
        a = _a % MOD;
        b = _b % MOD;
        c = _c % MOD;
        d = _d % MOD;
    }
    printf("%lld\n", x);
    return 0;
}
