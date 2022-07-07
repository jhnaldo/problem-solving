#include <stdio.h>

int main(){
    int n;
    int count[31][5] = {0,};
    int i;

    scanf("%d", &n);
    count[0][0] = count[1][3] = count[1][4] = 1;
    for (i = 2; i <= n; i++){
        count[i][0] = count[i-1][3] + count[i-1][4] + count[i-2][0];
        count[i][1] = count[i-1][4];
        count[i][2] = count[i-1][3];
        count[i][3] = count[i-1][0] + count[i-1][2];
        count[i][4] = count[i-1][0] + count[i-1][1];
    }
    printf("%d\n", count[n][0]);
    return 0;
}
