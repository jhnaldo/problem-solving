//0 1 x = x   a b a b
//1 1 y   x+y c d c d

#include <stdio.h>

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
            x = _x % 1000000;
            y = _y % 1000000;
        }

        n /= 2;
        _a = a*a + b*c;
        _b = a*b + b*d;
        _c = c*a + d*c;
        _d = c*b + d*d;
        a = _a % 1000000;
        b = _b % 1000000;
        c = _c % 1000000;
        d = _d % 1000000;
    }
    printf("%lld\n", x);
    return 0;
}
