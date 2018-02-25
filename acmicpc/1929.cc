#include <stdio.h>

#define MAX 1000000

int main(){
    bool not_prime[MAX+1] = {0,};
    int m, n, i, j;

    not_prime[0] = not_prime[1] = true;
    for (i = 2; i <= MAX; i++){
        if (!not_prime[i]){
            for (j = 2; j*i <= MAX; j++)
                not_prime[i*j] = true;
        }
    }

    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++){
        if (!not_prime[i])
            printf("%d\n", i);
    }
    return 0;
}
