#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i, res = 1;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            res *= 2;
        printf("%d\n", res-1);
    }
    return 0;
}
