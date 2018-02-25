#include <stdio.h>

typedef long long LL;

void swap(LL &x, LL &y){
    LL tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n;
    LL a, b;
    a = 1;
    b = 1;
    scanf("%d", &n);
    while(n--){
        b += a;
        swap(a,b);
    }
    printf("%lld %lld\n", a, b);
    return 0;
}
