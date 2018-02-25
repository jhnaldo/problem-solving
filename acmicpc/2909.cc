#include <stdio.h>

int main(){
    int n, k, i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k-1; i++) n /= 10;
    if (k) n = (n+5)/10;
    printf ("%d", n);
    for (i = 0; n && i < k; i++) printf("0");
    printf("\n");
    return 0;
}
