#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        long long int n, i, k;
        long long int factor = 1;
        long long int trinary[30] = {0,};
        scanf("%lld", &n);

        if (n < 0){
            for (k = 1, i = 3; n < -factor; k++, i *= 3) factor += i;
        }else{
            for (k = 1, i = 3; n > factor; k++, i *= 3) factor += i;
        }
        n += factor;

        for (i = 0; i < k; i++, n /= 3) trinary[i] = n%3;
        for (i = k-1; i >= 0; i--)
            printf("%c", (trinary[i]?(trinary[i]==1?'0':'1'):'-'));
        printf("\n");
    }
    return 0;
}
