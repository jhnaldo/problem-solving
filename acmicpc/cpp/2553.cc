#include <stdio.h>

int main(){
    int n, k = 1;
    int i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        k *= i;
        while(k % 10 == 0) k /= 10;
        k %= 10000;
    }
    printf("%d\n", k%10);
    return 0;
}
