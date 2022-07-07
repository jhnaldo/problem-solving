#include <stdio.h>

int main(){
    int a, b, c, mul;
    int count[10] = {0,};
    int i;

    scanf("%d %d %d", &a, &b, &c);
    mul = a * b * c;
    while (mul){
        count[mul%10]++;
        mul /= 10;
    }

    for (i = 0; i < 10; i++)
        printf("%d\n", count[i]);
    return 0;
}
