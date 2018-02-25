#include <stdio.h>

#define BOUND 1000000007

long long count(long long arr[1001][1001], long long n, long long k){
    if (arr[n][k]) return arr[n][k];
    if (n == k || k == 1){
        arr[n][k] = 1;
        return 1;
    }
    arr[n][k] = (count(arr, n-1, k-1) + count(arr, n-1, k) * k) % BOUND;
    return arr[n][k];
}

int main(){
    long long n, k;
    long long arr[1001][1001] = {};
    scanf("%lld %lld", &n, &k);
    printf("%lld\n", count(arr, n, k));
    return 0;
}
