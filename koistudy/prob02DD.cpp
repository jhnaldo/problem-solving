#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    printf("%d\n", l - MAX((a-1)/c+1, (b-1)/d+1));
    return 0;
}
