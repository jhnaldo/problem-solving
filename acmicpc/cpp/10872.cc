#include <stdio.h>

int main(){
    int n, fac = 1, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) fac *= i;
    printf("%d\n", fac);
}
