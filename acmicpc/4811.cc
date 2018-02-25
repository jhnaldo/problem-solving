#include <stdio.h>

int main(){
    long long int count[31] = {0,};
    int t, i, j;

    count[0] = 1;
    for (i = 1; i <= 30; i++){
        for (j = 1; j <= i; j++){
            count[i] += count[j-1]*count[i-j];
        }
    }

    scanf("%d", &i);
    while(i){
        printf("%lld\n", count[i]);
        scanf("%d", &i);
    }
}
