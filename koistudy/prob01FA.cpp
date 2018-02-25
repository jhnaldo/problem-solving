#include <stdio.h>

#define ODD(x) ((x)*2-1)
#define RET(x) ((x+1)/2)

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld %lld\n", ODD((RET(n)-1) * (RET(n)-1) + 1), ODD(RET(n) * RET(n)));
}
