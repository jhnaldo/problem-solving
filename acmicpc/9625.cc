#include <stdio.h>

int main(){
    int n, i;
    int pprev, prev, cur;
    pprev = 0;
    prev = 1;
    scanf("%d", &n);
    for (i = 0 ; i < n-1; i++){
        cur = pprev+prev;
        pprev = prev;
        prev = cur;
    }
    printf("%d %d\n", pprev, prev);
    return 0;
}
