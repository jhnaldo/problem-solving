#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int gcd(int a, int b){
    if (a < b) swap(a,b);
    while (a % b){
        a %= b;
        swap(a,b);
    }
    return b;
}

int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", n * m / gcd(n,m));

    return 0;
}
