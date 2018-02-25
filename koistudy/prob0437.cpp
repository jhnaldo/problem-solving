#include <stdio.h>

void swap(long long &n, long long &m){
    long long tmp = n;
    n = m;
    m = tmp;
}

int count(long long n, long long m){
    if (n % m == 0) return n / m;
    return n / m + count(m, n % m);
}

int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    if (n < m) swap(n, m);
    printf("%d\n", count(n, m));
    return 0;
}
