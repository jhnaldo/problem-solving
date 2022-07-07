#include <stdio.h>

int main(){
    int t, n, k;
    int i, j;
    long long int people[15][15] = {0,};

    for (i = 0; i < 15; i++){
        people[0][i] = i;
    }
    for (i = 1; i < 15; i++){
        for (j = 1; j < 15; j++){
            people[i][j] = people[i][j-1] + people[i-1][j];
        }
    }
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d %d", &n, &k);
        printf("%lld\n", people[n][k]);
    }
    return 0;
}
