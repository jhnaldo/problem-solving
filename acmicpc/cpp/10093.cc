#include <stdio.h>

int main(){
    long long int a, b;

    scanf("%lld %lld", &a, &b);
    if (a > b){
        long long int tmp = a;
        a = b;
        b = tmp;
    }

    printf("%lld\n", (a+1>=b?0:b-a-1));
    for (a++; a < b; a++){
        printf("%lld%c", a, (a==b-1?'\n':' '));
    }
    return 0;
}
