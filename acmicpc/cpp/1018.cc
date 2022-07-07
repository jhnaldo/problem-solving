#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int n, m, i, j, min = 64;
    int count[51][51] = {0,};
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        char str[51];
        scanf("%s", str);
        for (j = 1; j <= m; j++){
            if((str[j-1]=='W' && (i+j)%2)
                    || (str[j-1]=='B' && (i+j)%2==0))
                count[i][j]++;
            count[i][j] += count[i-1][j];
            count[i][j] += count[i][j-1];
            count[i][j] -= count[i-1][j-1];
        }
    }
    for (i = 8; i <= n; i++){
        for (j = 8; j <= m; j++){
            int value = count[i][j]-count[i-8][j]-count[i][j-8]+count[i-8][j-8];
            min = MIN(min, MIN(value, 64-value));
        }
    }
    printf("%d\n", min);
    return 0;
}
