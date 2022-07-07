#include <stdio.h>

int main(){
    int a, b, res[10], size;
    scanf("%d %d", &a, &b);
    for (size = 0; a || b; a /= 10, b /= 10, size++)
        res[size] = a%10+b%10;
    for (size--; size >= 0; size--)
        printf ("%d", res[size]);
    printf("\n");
    return 0;
}
