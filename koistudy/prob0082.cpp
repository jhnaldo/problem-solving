#include <stdio.h>

int main(){
    long long int pprev, prev, cur;
    int n;
    scanf("%d", &n);
    prev = 0; cur = 1;
    while (--n){
        pprev = prev;
        prev = cur;
        cur = pprev + prev;
    }
    printf("%lld\n", cur);
    return 0;
}
