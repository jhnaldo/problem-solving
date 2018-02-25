#include <stdio.h>

int main(){
    int a, b;
    int n1, n2, n3;

    scanf("%d %d", &a, &b);
    n1 = a; n2 = b; n3 = 0;
    while (n1){
        if (n1%2) n3 += n2;
        n1 >>= 1;
        n2 <<= 1;
    }
    printf("%d\n", n3);
    return 0;
}
