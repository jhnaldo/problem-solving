#include <stdio.h>

int main(){
    int n;
    int i, j, k = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            printf("%d ", k++);
        printf("\n");
    }
    return 0;
}
