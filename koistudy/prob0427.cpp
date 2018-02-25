#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int n;
    long long before, cur;
    scanf("%d", &n);
    before = cur = 1LL;
    while (--n){
        long long tmp = before + cur;
        before = cur;
        cur = tmp;
    }
    printf("%lld\n", cur);
    return 0;
}
