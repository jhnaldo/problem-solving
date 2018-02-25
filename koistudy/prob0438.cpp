#include <stdio.h>

int mul(int a, int b, int c){
    if (a % 2) c += b;
    a >>= 1;
    b <<= 1;
    if (a) return mul(a, b, c);
    return c;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", mul(a, b, 0));
    return 0;
}
