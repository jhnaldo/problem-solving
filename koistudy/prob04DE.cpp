#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if (n%10) printf("-1\n");
    else printf("%d %d %d\n", n/300, n%300/60, n%60/10);
    return 0;
}
