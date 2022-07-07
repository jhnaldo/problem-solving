#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int n;
    int ppprev, pprev, prev;
    int before;
    ppprev = pprev = prev = 0;
    before = 0;

    scanf("%d", &n);
    while(n--){
        int cur, sum = 0;
        scanf("%d", &cur);
        sum = MAX(sum, ppprev + before + cur);
        sum = MAX(sum, pprev + cur);
        sum = MAX(sum, prev);
        ppprev = pprev;
        pprev = prev;
        prev = sum;
        before = cur;
    }
    printf("%d\n", prev);
    return 0;
}
