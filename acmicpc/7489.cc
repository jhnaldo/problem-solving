#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i;
        int cur = 1;
        scanf("%d", &n);
        for (i = 2; i <= n; i++){
            cur *= i;
            while (cur%10 == 0)cur /= 10;
            cur %= 100000;
        }
        printf("%d\n", cur%10);
    }
    return 0;
}
