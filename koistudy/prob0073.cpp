#include <stdio.h>

#define check(x) (a < x && x < b)

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", n*(n+1)/2);
    return 0;
}
