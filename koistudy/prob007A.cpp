#include <stdio.h>

int main(){
    int n, k, i;
    scanf("%d", &n);
    if (n == 1){
        for (i = 1; i <= 9; i++){
            for (k = 2; k <= 9; k++){
                printf("%d*%d=%d ", k, i, i*k);
            }
            printf("\n");
        }
    }else{
        for (i = 1; i <= 9; i++){
            printf("%d*%d=%d\n", n, i,  n*i);
        }
    }
    return 0;
}
