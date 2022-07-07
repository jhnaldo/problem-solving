#include <stdio.h>

void show(int n, int k){
    int i;
    for (i = 0; i < k/2; i++){
        printf(" *");
    }
    if (n*2-2 == k){
        printf(" ");
        for (i = 0; i < k/2-1; i++){
            printf("* ");
        }
    }else{
        for (i = 0; i < (n-1-k/2)*4-1; i++){
            printf("%c", (k%2?' ':'*'));
        }
        for (i = 0; i < k/2; i++){
            printf("* ");
        }
    }
}

int main(){
    int n, i;
    int size;
    scanf("%d", &n);
    size = 4*n-3;
    if (n == 1){
        printf("*\n");
        return 0;
    }
    for (i = 0; i < size/2; i++){
        printf("*");
        show(n, i);
        printf("*");
        printf("\n");
    }
    for (i = size/2; i >= 0; i--){
        printf("*");
        show(n, i);
        printf("*");
        printf("\n");
    }
    return 0;
}
