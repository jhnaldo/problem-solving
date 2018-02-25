#include <stdio.h>

#define C(n,k) (fact[n]/(fact[k]*fact[(n)-(k)]))
typedef long long int lint;

lint fact[12];

lint _dec_num(lint len, lint n, lint before){
    lint i, sum = 1;
    if (len == 1) return before*10+n;
    for (i = len-1; sum <= n; i++, sum += C(i, len-1));
    return _dec_num(len-1, n - sum + C(i, len-1), before*10+i);
}

lint dec_num(lint n){
    lint len, sum;
    for (len = 1, sum = 10; len <= 10 && sum <= n; len++, sum += C(10, len));
    if (len > 10) return -1;
    return _dec_num(len, n - sum + C(10,len), 0);
}

int main(){
    lint i, n, count;
    fact[0] = 1;
    for (i = 1; i <= 11; i++) fact[i] = fact[i-1]*i;
    scanf("%lld", &n);
    printf("%lld\n", dec_num(n));
    return 0;
}
