#include <stdio.h>

void swap(long long &x, long long &y){
    long long tmp = x;
    x = y;
    y = tmp;
}

long long gcd(long long n, long long m){
    if (n < m) swap(n, m);
    while(n % m){
        n %= m;
        swap(n, m);
    }
    return m;
}

int main(){
    int n;
    long long arr[2][2] = {};
    long long mo = 1;
    int cur, tmp, g;
    int i;

    cur = 0;
    tmp = 1;
    arr[cur][0] = 1;

    scanf("%d", &n);
    if (n){
        for (i = 0; i < n; i++){
            mo *= 3;
            arr[tmp][0] = 3*arr[cur][1];
            arr[tmp][1] = 2*arr[cur][1] + arr[cur][0];

            cur = 1 - cur;
            tmp = 1 - tmp;
        }
        g = gcd(arr[cur][1], mo);
        printf("%lld/%lld\n", arr[cur][1]/g, mo/g);
    }else{
        printf("0\n");
    }

    return 0;
}
