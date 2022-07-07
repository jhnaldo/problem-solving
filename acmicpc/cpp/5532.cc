#include <stdio.h>
#include <math.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    printf("%d\n", l-MAX((int)ceil(a/double(c)), (int)ceil(b/double(d))));
    return 0;
}
