#include <stdio.h>

int main(){
    int n, k, i, count;
    scanf("%d %d", &n, &k);
    for (i = 1, count = 0; i <= n; i++){
        if (n % i == 0){
            count++;
            if (k == count){
                printf("%d\n", i);
                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}
