#include <stdio.h>

int main(){
    int n;
    while (true){
        int i;
        int sq_sum = 0;
        scanf("%d", &n);
        if (!n) break;
        for (i = 1; i <= n; i++)
            sq_sum += i*i;
        printf("%d\n", sq_sum);
    }
    return 0;
}
