#include <stdio.h>

#define MOD 15746

int main(){
    int pprev, prev, cur, n;
    pprev = 1;
    prev = 1;
    scanf("%d", &n);
    while(n--){
        cur = (pprev + prev)%MOD;
        pprev = prev;
        prev = cur;
    }
    printf("%d\n", pprev);
    return 0;
}
