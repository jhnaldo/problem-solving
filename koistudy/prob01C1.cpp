#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int max = 0, cur = 0, i;
    for (i = 0; i < 4; i++){
        int out, in;
        scanf("%d %d", &out, &in);
        cur += in - out;
        max = MAX(max, cur);
    }
    printf("%d\n", max);
    return 0;
}
