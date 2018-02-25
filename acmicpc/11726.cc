#include <stdio.h>

int main(){
    int prev = 0, cur = 1;
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int pprev = prev;
        prev = cur;
        cur = (pprev + prev) % 10007;
    }
    printf("%d\n", cur);
    return 0;
}
