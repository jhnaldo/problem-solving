#include <stdio.h>

int main(){
    long long int one, zero;
    long long int before_one, before_zero;
    int n, i;

    one = 1;
    zero = 0;

    scanf("%d", &n);
    for (i = 2; i <= n; i++){
        before_one = one;
        before_zero = zero;
        one = before_zero;
        zero = before_one + before_zero;
    }
    printf("%lld\n", one + zero);
    return 0;
}
