#include <stdio.h>

int main(){
    int n, k;
    long long arr[1000001];
    int i;
    scanf("%d %d", &n, &k);
    if (k == 1){
        arr[0] = 1;
        arr[1] = 0;
        arr[2] = 1;
    }else if (k == 2){
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 0;
    }else{
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 2;
    }

    for (i = 3; i <= n; i++){
        if (i != k) arr[i] = (arr[i-1] + arr[i-2] + arr[i-3]) % 1000000007;
        else arr[i] = 0;
    }

    printf("%lld\n", arr[n]);

    return 0;
}
