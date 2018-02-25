#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < 2*n-1; i++)
        printf("*");
    printf("\n");
    return 0;
}
