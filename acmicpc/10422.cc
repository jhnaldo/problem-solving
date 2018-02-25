#include <stdio.h>

int main(){
    long long int count[2501] = {0,};
    int i, j, t;

    count[0] = 1;
    for (i = 1; i <= 2500; i++){
        count[i] = count[i-1];
        for (j = 1; j < i; j++){
            count[i] += count[j-1] * count[i-j];
            count[i] %= 1000000007;
        }
    }

    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", (n%2?0:count[n/2]));
    }
    return 0;
}
