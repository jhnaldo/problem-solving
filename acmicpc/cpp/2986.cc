#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 2; i*i <= n; i++){
        if (n%i==0) break;
    }
    if (i*i > n) printf("%d\n", n-1);
    else printf("%d\n", n-n/i);
    return 0;
}
