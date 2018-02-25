#include <stdio.h>

int main(){
    long long n;
    long long i;
    long long sum = 1;
    scanf("%lld", &n);

    for (i = 2; i*i <= n; i++){
        long long sub_sum = 1;
        long long k = i;
        while (n % i == 0){
            sub_sum += k;
            k *= i;
            n /= i;
        }
        sum *= sub_sum;
    }
    if (n > 1) sum *= (1 + n);
    printf("%lld\n", sum);
    return 0;
}
