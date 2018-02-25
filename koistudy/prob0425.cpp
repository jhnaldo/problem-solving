#include <stdio.h>

#define BOUND 1000000007

int main(){
    int n;
    long long *count[3], sum = 0;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
        count[i] = new long long[n+1]();

    count[2][0] = 1;
    count[2][1] = 1;
    count[2][2] = 2;

    for (i = 3; i <= n; i++){
        count[0][i] = count[2][i-3];
        count[1][i] = (count[0][i-1] + count[0][i-2]) % BOUND;
        count[2][i] = (count[1][i-1] + count[1][i-2] + count[2][i-1] + count[2][i-2]) % BOUND;
    }

    for (i = 0; i < 3; i++)
        sum += count[i][n];
    printf("%lld\n", sum % BOUND);

    for (i = 0; i < 3; i++)
        delete[] count[i];
    return 0;
}
