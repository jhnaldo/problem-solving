#include <stdio.h>

int main(){
    int t, n, i;
    int res[11];

    res[0] = res[1] = 1;
    res[2] = 2;

    for (i = 3; i <=10; i++)
        res[i] = res[i-1] + res[i-2] + res[i-3];

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        printf("%d\n", res[n]);
    }
}
