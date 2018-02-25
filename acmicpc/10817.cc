#include <stdio.h>

#define CHECK(a,b,c) ((a)<=(b) && (b)<=(c))

int main(){
    int a, b, c, middle;
    scanf("%d %d %d", &a, &b, &c);
    if (CHECK(b,a,c) || CHECK(c,a,b)) middle = a;
    else if (CHECK(a,b,c) || CHECK(c,b,a)) middle = b;
    else middle = c;
    printf("%d\n", middle);
    return 0;
}
