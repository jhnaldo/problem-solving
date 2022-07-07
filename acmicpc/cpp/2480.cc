#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int a, b, c; 

    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) printf("%d\n", 10000+a*1000);
    else if (a == b || b== c) printf("%d\n", 1000+b*100);
    else if (a == c) printf("%d\n", 1000+c*100);
    else printf("%d\n", MAX(a,MAX(b,c))*100);
    return 0;
}
