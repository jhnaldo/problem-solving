#include <stdio.h>

long long fibo(int k, long long pprev, long long prev){
    if (k == 1) return prev;
    return fibo(k-1, prev, pprev+prev);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibo(n, 0, 1));
    return 0;
}
