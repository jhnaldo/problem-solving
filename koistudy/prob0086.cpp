#include <stdio.h>

int main(){
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%d ", i*n+(i%2?n-j:j+1));
        printf("\n");
    }
    return 0;
}
