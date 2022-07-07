#include <stdio.h>

int main(){
    int n;
    long long int fact = 1;
    int i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        fact *= i;
        while (fact%10 == 0) fact /= 10;
        fact %= 1000000000;
    }
    printf("%lld\n", fact%100000);
    return 0;
}
