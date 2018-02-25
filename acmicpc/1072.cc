#include <stdio.h>

typedef long long int lint;

int main(){
    while (true){
        lint x, y, z;
        lint up, down;
        if (scanf("%lld %lld", &x, &y) == EOF) break;
        z = y*100/x;
        up = (z+1)*x - 100*y;
        down = 100-z-1;
        if (down <= 0) {
            printf("-1\n");
            continue;
        }
        printf("%lld\n", up/down+(up%down?1:0));
    }
    return 0;
}
