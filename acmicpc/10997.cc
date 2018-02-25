#include <stdio.h>

void show (int size, int left, int right, char fill){
    int i;
    printf("*");
    for (i = 0; i < left; i++){
        printf(" *");
    }
    for (i = 0; i < size-left*2-right*2-2; i++){
        printf("%c", fill);
    }
    for (i = 0; i < right; i++){
        printf("* ");
    }
    printf("*\n");
}

int main(){
    int n, i;
    scanf("%d", &n);

    if (n == 1){
        printf("*\n");
        return 0;
    }

    for (i = 0; i < n*4-3; i++){
        printf("*");
    }
    printf("\n");
    printf("*\n");
    for (i = 1; i <= n-1; i++){
        show (n*4-3, i, i-1, '*');
        show (n*4-3, i, i-1, ' ');
    }
    printf("*");
    for (i = 0; i < (n-1)*2; i++)
        printf(" *");
    printf("\n");
    for (i = n-2; i >= 0; i--){
        show (n*4-3, i, i, ' ');
        show (n*4-3, i, i, '*');
    }
    return 0;
}
