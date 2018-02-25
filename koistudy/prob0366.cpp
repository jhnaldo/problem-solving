#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n < 4) printf("0\n");
    else printf("%d\n", (n-1)*(n-2)*(n-3)/3/2);
    return 0;
}
