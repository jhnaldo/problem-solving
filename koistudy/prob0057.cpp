#include <stdio.h>

int main(){
    int n, i, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if (i%3) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
