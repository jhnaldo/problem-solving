#include <stdio.h>

int main(){
    int n, k = 1;
    int i, count = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        k *= i;
        while(k % 10 == 0){
            k /= 10;
            count++;
        }
        k %= 10000;
    }
    printf("%d\n", count);
    return 0;
}
