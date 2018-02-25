#include <stdio.h>

int main(){
    int n, count;

    scanf("%d", &n);
    for (count = 0; n > 10; count++, n = (n+5)/10);
    printf("%d", n);
    for (; count > 0; count--) printf("0");
    printf("\n");
    return 0;
}
