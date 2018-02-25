#include <stdio.h>

#define ABS(a) ((a)<0?-(a):(a))
#define RCHECK(a,b) ((a) == 0 || (b) == 0)
#define DCHEKC(a,b) (ABS(a) == ABS(b))
#define QCHECK(a,b) (RCHECK(a,b) || DCHEKC(a,b))

int main(){
    int qx, qy;
    int rx, ry;
    int x, y;
    scanf("%d %d", &qx, &qy);
    scanf("%d %d", &rx, &ry);
    scanf("%d %d", &x, &y);

    printf("%d\n", (QCHECK(qx-x,qy-y)? 1: 2));
    printf("%d\n", (RCHECK(rx-x,ry-y)? 1: 2));
    return 0;
}
