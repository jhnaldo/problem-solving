#include <stdio.h>

long long fact(long long n){
    if (n) return n * fact(n-1);
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fact(n));

    return 0;
}
