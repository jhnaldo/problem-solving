#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    printf("%d\n", n);
    for (i = 2; i <= n; i++)
        printf("%d %d\n", i-1, i);
    printf("%d %d\n", n, 1);
    return 0;
}
