#include <stdio.h>

int main(){
    long long k, result = 0;
    int i;
    scanf("%lld", &k);
    for (i = 0; i < 10; i++){
        long long tmp;
        scanf("%lld", &tmp);
        result = (result + ((tmp % k) * 2) % k) % k;
    }
    printf("%lld\n", result);
    return 0;
}
