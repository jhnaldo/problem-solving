#include <stdio.h>

#define MAXVAL 123456

int main(){
    bool not_prime[2*MAXVAL+1] = {0,};
    int i, j, n;
    int count[2*MAXVAL+1] = {0,};

    not_prime[0] = not_prime[1] = true;
    for (i = 2; i <= 2 * MAXVAL; i++){
        count[i] = count[i-1];
        if (!not_prime[i]){
            for (j = i*2; j <= 2 * MAXVAL; j += i)
                not_prime[j] = true;
            count[i]++;
        }
    }

    scanf("%d", &n);
    while(n){
        printf("%d\n", count[2*n]-count[n]);
        scanf("%d", &n);
    }
    return 0;
}
