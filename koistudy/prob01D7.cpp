#include <stdio.h>

#define MAX 1000000000000000000LL
#define BOUND 1000000000LL

int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);
    if (n == MAX) printf("%lld%018d\n", m, 0);
    else if (m == MAX) printf("%lld%018d\n", n, 0);
    else {
        long long a = n / BOUND;
        long long b = n % BOUND;
        long long c = m / BOUND;
        long long d = m % BOUND;
        long long o = a*c;
        long long p = a*d + b*c;
        long long q = b*d;

        p += q / BOUND;
        o += p / BOUND;
        q %= BOUND;
        p %= BOUND;

        if (p) printf("%lld%09lld\n", p, q);
        else printf("%lld\n", q);
    }
    return 0;
}
