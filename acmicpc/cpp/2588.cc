#include <stdio.h>

int main(){
    int a, b, res;
    int i;

    scanf("%d %d", &a, &b);
    res = a*b;
    for (i = 0; i < 3; i++, b/=10)
        printf("%d\n", a*(b%10));
    printf("%d\n", res);
}
