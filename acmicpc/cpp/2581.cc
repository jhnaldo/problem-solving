#include <stdio.h>

int main(){
    bool non_prime[10001] = {0,};
    int n, m, sum = 0, first = 0;
    int i, j;

    scanf("%d %d", &n, &m);

    non_prime[0] = non_prime[1] = true;
    for (i = 2; i <= m; i++){
        if (!non_prime[i]){
            for (j = 2; i*j <= m; j++){
                non_prime[i*j] = true;
            }
        }
    }

    for (i = n; i <= m; i++){
        if(!non_prime[i]){
            sum += i;
            if (!first){
                first = i;
            }
        }
    }
    if (sum){
        printf("%d\n%d\n", sum, first);
    }else{
        printf("-1\n");
    }
    return 0;
}
