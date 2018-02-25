#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    n--; m--;
    printf("%d\n", ABS(n/4 - m/4) + ABS(n%4 - m%4));
    return 0;
}
