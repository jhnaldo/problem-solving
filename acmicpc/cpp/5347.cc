#include <stdio.h>

void swap(long long int& n, long long int& m){
    long long int tmp = n;
    n = m;
    m = tmp;
}

long long int gcd(long long int n, long long int m){
    long long int tmp;
    if (n < m) swap(n,m);
    while ((tmp = n%m)){
        n = m;
        m = tmp;
    }
    return m;
}

int main(){
    int t;
    long long int n, m;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%lld %lld", &n, &m);
        long long int g = gcd(n,m);
        printf("%lld\n", n/g*m);
    }
    return 0;
}
