#include <stdio.h>

bool palidrom(long long int n, long long int k){
    long long int arr[31], size = 0;
    while(n){
        arr[size++] = n%k;
        n /= k;
    }
    for (long long int i = 0; i < size/2; i++){
        if (arr[i] != arr[size-1-i])
            return false;
    }
    return true;
}

int main(){
    long long int n, i;

    scanf("%lld", &n);
    for(i = 2; i*i < n; i++){
        if (palidrom(n, i))
            printf("%lld\n", i);
    }
    for(i--; i >= 1; i--){
        if (n % i == 0 && n/i >= 3 && (n/i-1)*(n/i-1) > n)
            printf("%lld\n", n/i-1);
    }
    return 0;
}
