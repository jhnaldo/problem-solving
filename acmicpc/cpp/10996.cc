#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    if (n == 1){
        printf("*\n");
    }else{
        for (i = 0; i < 2*n; i++){
            for (j = 0; j < n; j++) printf("%c", ((i+j)%2?' ':'*'));
            printf("\n");
        }
    }
    return 0;
}
